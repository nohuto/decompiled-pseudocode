/*
 * XREFs of _PnpCtxRegSetValue @ 0x140A60BF4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140375490 (PipUpdateDeviceProducts.c)
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140B4324C (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlSetValue @ 0x1407D4F54 (_RegRtlSetValue.c)
 */

int __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, const WCHAR *a3, ULONG a4, void *a5, ULONG a6)
{
  return RegRtlSetValue(a2, a3, a4, a5, a6);
}
