/*
 * XREFs of FxDestroy @ 0x1C0043AD0
 * Callers:
 *     ?FxHandleDriverEntryFailure@@YAEPEAU_WDF_BIND_INFO@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002BC5C (-FxHandleDriverEntryFailure@@YAEPEAU_WDF_BIND_INFO@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLibraryCommonUnregisterClient @ 0x1C002C650 (FxLibraryCommonUnregisterClient.c)
 *     imp_WdfDriverCreate @ 0x1C0037350 (imp_WdfDriverCreate.c)
 *     ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00403D0 (-Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     UnlockVerifierSection @ 0x1C00450DC (UnlockVerifierSection.c)
 *     ?FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C0045588 (-FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 *     ?FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0046ABC (-FreeThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0048198 (-FxMdlDump@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxPurgeBugCheckDriverInfo @ 0x1C0088C58 (FxPurgeBugCheckDriverInfo.c)
 *     FxUnregisterBugCheckCallback @ 0x1C0088DE8 (FxUnregisterBugCheckCallback.c)
 */

void __fastcall FxDestroy(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( _InterlockedExchangeAdd(&FxDriverGlobals->Refcnt, 0xFFFFFFFF) == 1 )
    KeSetEvent(&FxDriverGlobals->DestroyEvent.m_Event, 0, 0);
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&FxDriverGlobals->DestroyEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
  if ( FxDriverGlobals->FxVerifierLock )
  {
    FxVerifierLock::FreeThreadTable(FxDriverGlobals);
    FxDriverGlobals->ThreadTableLock.m_DbgFlagIsInitialized = 0;
  }
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(FxDriverGlobals, 5u, 0xAu, 0x13u, WPP_wdfpool_cpp_Traceguids, &FxDriverGlobals->FxPoolFrameworks);
  if ( FxDriverGlobals->FxPoolTrackingOn )
  {
    FxPoolDump(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks);
    FxMdlDump(FxDriverGlobals);
  }
  FxDriverGlobals->FxPoolFrameworks.PagedLock.m_DbgFlagIsInitialized = 0;
  FxDriverGlobals->FxPoolFrameworks.NonPagedLock.m_DbgFlagIsInitialized = 0;
  FxUnregisterBugCheckCallback(FxDriverGlobals);
  FxPurgeBugCheckDriverInfo(FxDriverGlobals);
  if ( FxDriverGlobals->FxVerifierOn )
    UnlockVerifierSection(FxDriverGlobals);
}
