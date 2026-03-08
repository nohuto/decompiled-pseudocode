/*
 * XREFs of imp_WdfIoResourceRequirementsListRemove @ 0x1C0049840
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C004EDCC (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 */

void __fastcall imp_WdfIoResourceRequirementsListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        unsigned int Index)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxIoResReqList *pList; // [rsp+50h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pList);
  m_Globals = pList->m_Globals;
  if ( !FxResourceCollection::RemoveAndDelete(pList, Index) )
  {
    WPP_IFR_SF_qdd(m_Globals, 2u, 0xCu, 0xAu, WPP_FxResourceAPI_cpp_Traceguids, RequirementsList, Index, pList->m_Count);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
