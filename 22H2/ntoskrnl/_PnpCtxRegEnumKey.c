/*
 * XREFs of _PnpCtxRegEnumKey @ 0x140814D7C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140375490 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x140B95274 (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140B953C0 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B95B80 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B95D90 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140B96120 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x14086B97C (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2)
{
  return RegRtlEnumKey(a2);
}
