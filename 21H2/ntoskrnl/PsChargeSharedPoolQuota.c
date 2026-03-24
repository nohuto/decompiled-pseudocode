/*
 * XREFs of PsChargeSharedPoolQuota @ 0x140660338
 * Callers:
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     RtlpAllocateAtom @ 0x14062D000 (RtlpAllocateAtom.c)
 *     ObAdjustSecurityQuota @ 0x14065FB48 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x140660238 (ObpChargeQuotaForObject.c)
 *     PspAllocateRateControl @ 0x14067F56C (PspAllocateRateControl.c)
 * Callees:
 *     PspChargeQuota @ 0x14021ADE0 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x140341980 (PspReturnQuota.c)
 */

__int64 __fastcall PsChargeSharedPoolQuota(struct _KPROCESS *a1, ULONG_PTR a2, unsigned __int64 a3)
{
  __int64 v5; // rbx

  if ( a1 == PsInitialSystemProcess )
    return 1LL;
  v5 = a1[1].AffinityPadding[7];
  if ( !a2 || (int)PspChargeQuota(a1[1].AffinityPadding[7], 0LL, 1, a2) >= 0 )
  {
    if ( !a3 || (int)PspChargeQuota(v5, 0LL, 0, a3) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 512));
      return v5;
    }
    if ( a2 )
      PspReturnQuota((char *)v5, 0LL, 1, a2);
  }
  return 0LL;
}
