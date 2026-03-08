/*
 * XREFs of FxLibraryCommonUnregisterClient @ 0x1C002C650
 * Callers:
 *     LibraryUnregisterClient @ 0x1C0017850 (LibraryUnregisterClient.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00228D4 (-FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxHandleDriverEntryFailure@@YAEPEAU_WDF_BIND_INFO@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002BC5C (-FxHandleDriverEntryFailure@@YAEPEAU_WDF_BIND_INFO@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxDestroy @ 0x1C0043AD0 (FxDestroy.c)
 *     FxFreeDriverGlobals @ 0x1C0043CA4 (FxFreeDriverGlobals.c)
 *     UnlockVerifierSection @ 0x1C00450DC (UnlockVerifierSection.c)
 */

__int64 __fastcall FxLibraryCommonUnregisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS *WdfDriverGlobals)
{
  _WDF_DRIVER_GLOBALS *v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // rcx

  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryUnregisterClient: enter\n");
  }
  if ( Info && WdfDriverGlobals )
  {
    v4 = WdfDriverGlobals - 8;
    v5 = 0;
    if ( FxHandleDriverEntryFailure(Info, (_FX_DRIVER_GLOBALS *)&WdfDriverGlobals[-8]) )
      return 0LL;
    v7 = *(_QWORD *)&v4[1].DriverName[8];
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
      FxDestroy((_FX_DRIVER_GLOBALS *)&WdfDriverGlobals[-8]);
    }
    FxIFRStop((_FX_DRIVER_GLOBALS *)&WdfDriverGlobals[-8]);
    if ( *(_WORD *)&v4[7].DriverName[4] )
      UnlockVerifierSection((_FX_DRIVER_GLOBALS *)&WdfDriverGlobals[-8]);
    FxFreeDriverGlobals(WdfDriverGlobals);
  }
  else
  {
    v5 = -1073741823;
  }
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryUnregisterClient: exit: status %X\n", v5);
  }
  return v5;
}
