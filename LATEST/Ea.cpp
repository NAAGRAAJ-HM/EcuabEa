/*****************************************************/
/* File   : Ea.cpp                                   */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Ea.h"

#include "Ea_EcuM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_Ea Ea;
class_Ea_EcuM Ea_EcuM;
class_EcuM_Client *EcuM_Client_ptr_Ea = &Ea_EcuM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, EA_CODE) class_Ea_EcuM::InitFunction(void){
}

FUNC(void, EA_CODE) class_Ea::SetMode(void){
}

FUNC(void, EA_CODE) class_Ea::Read(void){
}

FUNC(void, EA_CODE) class_Ea::Write(void){
}

FUNC(void, EA_CODE) class_Ea::Cancel(void){
}

FUNC(void, EA_CODE) class_Ea::GetStatus(void){
}

FUNC(void, EA_CODE) class_Ea::GetJobResult(void){
}

FUNC(void, EA_CODE) class_Ea::InvalidateBlock(void){
}

FUNC(void, EA_CODE) class_Ea::GetVersionInfo(void){
}

FUNC(void, EA_CODE) class_Ea::EraseImmediateBlock(void){
}

FUNC(void, EA_CODE) class_Ea::CbJobEndNotification(void){
}

FUNC(void, EA_CODE) class_Ea::CbJobErrorNotification(void){
}

FUNC(void, EA_CODE) class_Ea::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

