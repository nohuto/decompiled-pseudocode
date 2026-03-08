/*
 * XREFs of _PnpCtxRegSetValue @ 0x140A5DEF4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140389620 (PipUpdateDeviceProducts.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140B5AC14 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlSetValue @ 0x140784FE4 (_RegRtlSetValue.c)
 */

int __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, const WCHAR *a3, ULONG a4, void *a5, ULONG a6)
{
  return RegRtlSetValue(a2, a3, a4, a5, a6);
}
