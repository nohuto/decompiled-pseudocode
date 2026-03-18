/*
 * XREFs of _PnpCtxRegSetValue @ 0x140A22D7C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C5610 (PipUpdateDeviceProducts.c)
 *     PipMigratePnpState @ 0x140B0EC60 (PipMigratePnpState.c)
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 * Callees:
 *     _RegRtlSetValue @ 0x1406D5A30 (_RegRtlSetValue.c)
 */

int __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, const WCHAR *a3, ULONG a4, void *a5, ULONG a6)
{
  return RegRtlSetValue(a2, a3, a4, a5, a6);
}
