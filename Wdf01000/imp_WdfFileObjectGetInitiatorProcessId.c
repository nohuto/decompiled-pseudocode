/*
 * XREFs of imp_WdfFileObjectGetInitiatorProcessId @ 0x1C0033D10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 */

HANDLE __fastcall imp_WdfFileObjectGetInitiatorProcessId(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFFILEOBJECT__ *FileObject)
{
  FxFileObject *v2; // rbx
  _EPROCESS *InitiatorProcess; // rax
  FxFileObject *pFO; // [rsp+40h] [rbp+8h] BYREF

  pFO = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)FileObject, 0x1018u, (void **)&pFO);
  v2 = pFO;
  if ( pFO->m_FileObject.m_FileObject )
  {
    InitiatorProcess = (_EPROCESS *)IoGetInitiatorProcess();
    if ( InitiatorProcess )
      return PsGetProcessId(InitiatorProcess);
  }
  else
  {
    WPP_IFR_SF_(pFO->m_Globals, 2u, 0xDu, 0xAu, WPP_FxFileObjectKm_cpp_Traceguids);
    FxVerifierDbgBreakPoint(v2->m_Globals);
  }
  return 0LL;
}
