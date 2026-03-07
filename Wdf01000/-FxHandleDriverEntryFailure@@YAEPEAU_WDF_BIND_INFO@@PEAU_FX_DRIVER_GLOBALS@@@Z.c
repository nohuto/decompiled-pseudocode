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
