/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0002764
 * Callers:
 *     FxDriverEntryWorker @ 0x1C00027D4 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x1C0002900 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0002B08 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void __fastcall FxStubDriverUnloadCommon(struct _WDF_BIND_INFO *a1)
{
  FxStubUnbindClasses(a1);
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
