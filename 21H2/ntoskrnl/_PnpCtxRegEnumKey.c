/*
 * XREFs of _PnpCtxRegEnumKey @ 0x1407C4164
 * Callers:
 *     PipUpdateDeviceProducts @ 0x1403C7500 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x140A9123C (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140A91380 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A91B40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A91D50 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140A920E0 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x140766D3C (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2, ULONG a3, unsigned int *a4, unsigned int *a5)
{
  return RegRtlEnumKey(a2, a3, a4, a5);
}
