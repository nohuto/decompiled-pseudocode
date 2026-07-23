/*
 * XREFs of PsChargeProcessPoolQuota @ 0x140228850
 * Callers:
 *     PsChargePoolQuota @ 0x140228820 (PsChargePoolQuota.c)
 *     FsRtlCancelNotify @ 0x140228890 (FsRtlCancelNotify.c)
 * Callees:
 *     PspChargeQuota @ 0x1402BF6E0 (PspChargeQuota.c)
 */

NTSTATUS __stdcall PsChargeProcessPoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  if ( Process == PsInitialSystemProcess )
    return 0;
  else
    return PspChargeQuota(Process[1].AffinityPadding[7], Process, PoolType == PagedPool, Amount);
}
