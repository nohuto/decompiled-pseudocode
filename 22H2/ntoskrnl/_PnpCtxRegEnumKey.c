/*
 * XREFs of _PnpCtxRegEnumKey @ 0x1407C4404
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C6D30 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x140A9023C (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A90380 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A90B40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A90D50 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140A910E0 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x14076619C (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2, ULONG a3, unsigned int *a4, unsigned int *a5)
{
  return RegRtlEnumKey(a2, a3, a4, a5);
}
