# Edit following two lines to set component requirements (see docs)

set(COMPONENT_REQUIRES 
)

set(COMPONENT_PRIV_REQUIRES 
)

set(COMPONENT_SRCS 
  "../AppIso/App_Base.c"
  "../AppIso/App_Main.c"
  "../AppIso/App_VTClient.c"
  "../AppIso/App_VTClientLev2.c"
  "../AppIso/AppMemAccess.cpp"
  "../AppCommon/AppOutput.c"
  "../AppCommon/AppHW.cpp"
  "../Samples/AddOn/AppIso_Output.c"
  "../Settings/settingsNVS.cpp"
  "../AppCanDriverEsp32/CanDriverEsp32.cpp"
  "../Diagnostic/AppIso_Diagnostic.c"
  "../AppCanDriverEsp32/SerialNumber.c"
)

set(COMPONENT_ADD_INCLUDEDIRS 
  "."
  ".."
  "../lib_cci"
  "../AppIso"
  "../AppCommon"
  "../Settings"
  "../Diagnostic"
  "../ISODesigner/MyWorkspace1/MyProject1/Output"
)


register_component()



# After build, copy the archive file and header file to parent example directory's main component
add_custom_command(TARGET ${COMPONENT_LIB}
                  POST_BUILD
                  COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/ISODesigner/MyWorkspace1/MyProject1/Output/MyProject1.iop ${CMAKE_SOURCE_DIR}/spiffs_image/pools
                  COMMENT "Copying MyProject1.iop to spiffs_image...")

  
# Import the library, specifying a target name and the library path.
# The private dependencies of the library is also specified.
add_prebuilt_library(libcci_ecu_driver "../lib_cci/libcci_ecu_driver.a")

# `main` calls a function from the library, so link it to `main`
target_link_libraries(${COMPONENT_LIB} PRIVATE libcci_ecu_driver)

# Create a SPIFFS image from the contents of the 'spiffs_image' directory
# that fits the partition named 'storage'. FLASH_IN_PROJECT indicates that
# the generated image should be flashed when the entire project is flashed to
# the target with 'idf.py -p PORT flash'. 
spiffs_create_partition_image(storage ../spiffs_image FLASH_IN_PROJECT)

