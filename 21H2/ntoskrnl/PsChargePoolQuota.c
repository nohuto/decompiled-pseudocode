/*
 * XREFs of PsChargePoolQuota @ 0x140228820
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x1405EF9C0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1405F0650 (FsRtlNotifyFilterReportChangeLiteEx.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     PsChargeProcessPoolQuota @ 0x140228850 (PsChargeProcessPoolQuota.c)
 */

void __stdcall PsChargePoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  int v3; // eax

  v3 = PsChargeProcessPoolQuota(Process, PoolType, Amount);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
