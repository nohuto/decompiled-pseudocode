void __fastcall imp_WdfChildListEndIteration(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *DeviceList,
        _WDF_CHILD_LIST_ITERATOR *Iterator)
{
  unsigned __int8 v5; // dl
  FxChildList *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int Flags; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxChildList *pList; // [rsp+50h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)DeviceList, 0x1029u, (void **)&pList);
  v6 = pList;
  m_Globals = pList->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x1Eu, WPP_FxChildListAPI_cpp_Traceguids, DeviceList);
    v6 = pList;
  }
  if ( !Iterator )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( Iterator->Size != 40 )
  {
    WPP_IFR_SF_DDd(m_Globals, v5, 0xCu, 0x1Fu, WPP_FxChildListAPI_cpp_Traceguids, Iterator->Size, 40, -1073741820);
LABEL_7:
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  Flags = Iterator->Flags;
  if ( (Flags & 0xFFFFFFF8) != 0 )
  {
    WPP_IFR_SF_DDd(m_Globals, v5, 0xCu, 0x20u, WPP_FxChildListAPI_cpp_Traceguids, Flags, 7, -1073741811);
    goto LABEL_7;
  }
  FxChildList::EndIteration(v6, Iterator);
}
