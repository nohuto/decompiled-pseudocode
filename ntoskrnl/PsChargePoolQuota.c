/*
 * XREFs of PsChargePoolQuota @ 0x140294F20
 * Callers:
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140703B40 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterReportChange @ 0x140848F70 (FsRtlNotifyFilterReportChange.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     PsChargeProcessPoolQuota @ 0x1402951F0 (PsChargeProcessPoolQuota.c)
 */

void __stdcall PsChargePoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  NTSTATUS v3; // eax

  v3 = PsChargeProcessPoolQuota(Process, PoolType, Amount);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
