/*
 * XREFs of ?FxHandleDriverEntryFailure@@YAEPEAU_WDF_BIND_INFO@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002BC5C
 * Callers:
 *     FxLibraryCommonUnregisterClient @ 0x1C002C650 (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     FxDestroy @ 0x1C0043AD0 (FxDestroy.c)
 */

unsigned __int8 __fastcall FxHandleDriverEntryFailure(_WDF_BIND_INFO *BindInfo, _FX_DRIVER_GLOBALS *pFxDriverGlobals)
{
  if ( BindInfo != (_WDF_BIND_INFO *)0x7FFFFFFFFFFFEFFFLL || !pFxDriverGlobals->Driver )
    return 0;
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "Destroy FxDriver after DriverEntry failure\n");
  }
  pFxDriverGlobals->Driver->DeleteObject(pFxDriverGlobals->Driver);
  FxDestroy(pFxDriverGlobals);
  pFxDriverGlobals->Driver = 0LL;
  return 1;
}
