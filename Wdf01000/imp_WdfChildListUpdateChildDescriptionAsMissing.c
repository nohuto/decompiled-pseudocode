__int64 __fastcall imp_WdfChildListUpdateChildDescriptionAsMissing(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  FxChildList *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  int _a3; // edx
  unsigned int IdentificationDescriptionSize; // r10d
  unsigned int v9; // edi
  int updated; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxChildList *pList; // [rsp+50h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)DeviceList, 0x1029u, (void **)&pList);
  v5 = pList;
  m_Globals = pList->m_Globals;
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(pList->m_Globals, retaddr);
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x27u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v5 = pList;
  }
  _a3 = v5->m_IdentificationDescriptionSize;
  IdentificationDescriptionSize = IdentificationDescription->IdentificationDescriptionSize;
  if ( _a3 == IdentificationDescription->IdentificationDescriptionSize )
  {
    updated = FxChildList::UpdateAsMissing(v5, IdentificationDescription);
    v9 = updated;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0x29u, WPP_FxChildListAPI_cpp_Traceguids, DeviceList, updated);
  }
  else
  {
    v9 = -1073741808;
    WPP_IFR_SF_DDd(
      m_Globals,
      _a3,
      0xCu,
      0x28u,
      WPP_FxChildListAPI_cpp_Traceguids,
      IdentificationDescriptionSize,
      _a3,
      -1073741808);
  }
  return v9;
}
