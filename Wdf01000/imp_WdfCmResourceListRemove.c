/*
 * XREFs of imp_WdfCmResourceListRemove @ 0x1C0048FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C004EDCC (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 */

void __fastcall imp_WdfCmResourceListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        unsigned int Index)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxCmResList *pList; // [rsp+50h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)List, 0x1036u, (void **)&pList);
  m_Globals = pList->m_Globals;
  if ( !FxResourceCollection::RemoveAndDelete(pList, Index) )
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0x10u, WPP_FxResourceAPI_cpp_Traceguids, List, Index, pList->m_Count);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
