INCLUDE_DIRECTORIES(
${CMAKE_SOURCE_DIR}
${CMAKE_SOURCE_DIR}/scribus
${FREETYPE_INCLUDE_DIRS}
)


SET(SCRIBUS_STYLES_MOC_CLASSES
)

SET(SCRIBUS_STYLES_LIB_SOURCES
  style.cpp
  stylecontext.cpp
  stylecontextproxy.cpp
  linestyle.cpp
  charstyle.cpp
  paragraphstyle.cpp
  tablestyle.cpp
  cellstyle.cpp
)

QT4_WRAP_CPP(SCRIBUS_STYLES_MOC_SOURCES ${SCRIBUS_STYLES_MOC_CLASSES})

SET(SCRIBUS_STYLES_LIB "scribus_styles_lib")
ADD_LIBRARY(${SCRIBUS_STYLES_LIB} STATIC ${SCRIBUS_STYLES_LIB_SOURCES} ${SCRIBUS_STYLES_MOC_SOURCES})

# This is a convenience library that for linkage purposes is part of Scribus's
# main API.
SET_TARGET_PROPERTIES(${SCRIBUS_STYLES_LIB}
  PROPERTIES
  COMPILE_FLAGS -DCOMPILE_SCRIBUS_MAIN_APP
  )
