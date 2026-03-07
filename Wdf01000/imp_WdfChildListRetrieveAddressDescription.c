__int64 __fastcall imp_WdfChildListRetrieveAddressDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  FxChildList *v7; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int _a3; // eax
  unsigned int IdentificationDescriptionSize; // edx
  unsigned __int16 v11; // r9
  unsigned int v12; // ebx
  int v13; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxChildList *pList; // [rsp+60h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)DeviceList, 0x1029u, (void **)&pList);
  v7 = pList;
  m_Globals = pList->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0xEu, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v7 = pList;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !AddressDescription )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  _a3 = v7->m_IdentificationDescriptionSize;
  IdentificationDescriptionSize = IdentificationDescription->IdentificationDescriptionSize;
  if ( _a3 != IdentificationDescription->IdentificationDescriptionSize )
  {
    v11 = 15;
LABEL_9:
    v12 = -1073741808;
    WPP_IFR_SF_DDd(
      m_Globals,
      IdentificationDescriptionSize,
      0xCu,
      v11,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescriptionSize,
      _a3,
      -1073741808);
    return v12;
  }
  _a3 = v7->m_AddressDescriptionSize;
  if ( !_a3 )
  {
    v12 = -1073741808;
    WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0x10u, WPP_FxChildListAPI_cpp_Traceguids, 0xC0000010);
    return v12;
  }
  IdentificationDescriptionSize = AddressDescription->AddressDescriptionSize;
  if ( _a3 != AddressDescription->AddressDescriptionSize )
  {
    v11 = 17;
    goto LABEL_9;
  }
  v13 = FxChildList::GetAddressDescription(v7, IdentificationDescription, AddressDescription);
  v12 = v13;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0x12u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, v13);
  return v12;
}
