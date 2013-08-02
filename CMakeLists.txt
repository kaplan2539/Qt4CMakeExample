CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

PROJECT(QtStandardApp)
FIND_PACKAGE(Qt4 REQUIRED)

INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

# Define qt modules to use (QtCore & QtUi are true per default)
#SET( QT_DONT_USE_QTGUI    TRUE )  # just in case you don't need Ui
#SET( QT_USE_QTNETWORK     TRUE )
#SET( QT_USE_QTOPENGL      TRUE )
#SET( QT_USE_QTSQL         TRUE )
#SET( QT_USE_QTXML         TRUE )
#SET( QT_USE_QTSVG         TRUE )
#SET( QT_USE_QTTEST        TRUE )
#SET( QT_USE_QTDBUS        TRUE )
#SET( QT_USE_QTSCRIPT      TRUE )
#SET( QT_USE_QTWEBKIT      TRUE )
#SET( QT_USE_QTXMLPATTERNS TRUE )
#SET( QT_USE_PHONON        TRUE )

#-----------------------------------------------------------------------------
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

SET( QtStandardApp_SOURCES   main.cpp mainwindow.cpp )
SET( QtStandardApp_HEADERS   mainwindow.h            )
SET( QtStandardApp_FORMS     mainwindow.ui           )
SET( QtStandardApp_RESOURCES resources.qrc           )

QT4_WRAP_CPP(      QtStandardApp_MOC        ${QtStandardApp_HEADERS}   )
QT4_WRAP_UI(       QtStandardApp_UI_HEADERS ${QtStandardApp_FORMS}     )
QT4_ADD_RESOURCES( QtStandardApp_RCC        ${QtStandardApp_RESOURCES} )

MESSAGE( "QtStandardApp_MOC=${QtStandardApp_MOC}" )
MESSAGE( "QtStandardApp_RCC=${QtStandardApp_RCC}" )
MESSAGE( "QtStandardApp_UI_HEADERS=${QtStandardApp_UI_HEADERS}" )

ADD_EXECUTABLE(
   QtStandardApp
   ${QtStandardApp_SOURCES} 
   ${QtStandardApp_MOC}
   ${QtStandardApp_UI_HEADERS}
   ${QtStandardApp_RCC}
)

TARGET_LINK_LIBRARIES(QtStandardApp ${QT_LIBRARIES})
#-----------------------------------------------------------------------------
