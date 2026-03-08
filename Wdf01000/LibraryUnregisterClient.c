/*
 * XREFs of LibraryUnregisterClient @ 0x1C0017850
 * Callers:
 *     <none>
 * Callees:
 *     FxLibraryCommonUnregisterClient @ 0x1C002C650 (FxLibraryCommonUnregisterClient.c)
 */

int __fastcall LibraryUnregisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS *WdfDriverGlobals)
{
  return FxLibraryCommonUnregisterClient(Info, WdfDriverGlobals);
}
