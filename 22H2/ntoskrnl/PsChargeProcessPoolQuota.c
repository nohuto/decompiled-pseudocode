/*
 * XREFs of PsChargeProcessPoolQuota @ 0x140303030
 * Callers:
 *     PsChargePoolQuota @ 0x140303000 (PsChargePoolQuota.c)
 *     FsRtlCancelNotify @ 0x140303070 (FsRtlCancelNotify.c)
 * Callees:
 *     PspChargeQuota @ 0x14021ADA0 (PspChargeQuota.c)
 */

NTSTATUS __stdcall PsChargeProcessPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process == PsInitialSystemProcess )
    return 0;
  else
    return PspChargeQuota(Process[1].AffinityPadding[7], (__int64)Process, PoolType == PagedPool, Amount);
}
