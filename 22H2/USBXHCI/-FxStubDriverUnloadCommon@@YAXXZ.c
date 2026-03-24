/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C004FB60
 * Callers:
 *     FxDriverEntryWorker @ 0x1C00182B4 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1C004FBA0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C004FBD4 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
