/*
 * XREFs of _PnpCtxRegEnumKey @ 0x14081D44C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140389620 (PipUpdateDeviceProducts.c)
 *     PipHardwareConfigExists @ 0x140B91054 (PipHardwareConfigExists.c)
 *     PipMigrateCleanServiceCallback @ 0x140B911A0 (PipMigrateCleanServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140B91960 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140B91B70 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140B91F00 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlEnumKey @ 0x140868D44 (_RegRtlEnumKey.c)
 */

__int64 __fastcall PnpCtxRegEnumKey(__int64 a1, void *a2)
{
  return RegRtlEnumKey(a2);
}
