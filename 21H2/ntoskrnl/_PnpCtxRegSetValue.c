/*
 * XREFs of _PnpCtxRegSetValue @ 0x140974B24
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C7500 (PipUpdateDeviceProducts.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 *     PipMigratePnpState @ 0x140A52084 (PipMigratePnpState.c)
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 * Callees:
 *     _RegRtlSetValue @ 0x140768CB4 (_RegRtlSetValue.c)
 */

int __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, const WCHAR *a3, ULONG a4, void *a5, ULONG a6)
{
  return RegRtlSetValue(a2, a3, a4, a5, a6);
}
