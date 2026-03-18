/*
 * XREFs of _PnpCtxRegEnumKey @ 0x14082EBE0
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C5610 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x140B4F8C4 (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140B4FA10 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B501D0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B503E0 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140B50770 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x1406CB3B4 (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2, ULONG a3, char *a4, unsigned int *a5)
{
  return RegRtlEnumKey(a2, a3, a4, a5);
}
