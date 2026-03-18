/*
 * XREFs of _CmDevicePropertyRead @ 0x1402DF5A4
 * Callers:
 *     _CmSetDeviceRegPropWorker @ 0x14076FF88 (_CmSetDeviceRegPropWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceRegPropWorker @ 0x14077CF10 (_CmGetDeviceRegPropWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmDevicePropertyRead(__int64 a1, int a2)
{
  if ( a2 <= 7 )
    return a2 < 6 && a2 > 0 && (a2 <= 3 || a2 == 5);
  return a2 <= 24 || a2 > 25 && a2 <= 37;
}
