/*
 * XREFs of PsChargeSharedPoolQuota @ 0x1406D90F8
 * Callers:
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     PspAllocateRateControl @ 0x14065CBDC (PspAllocateRateControl.c)
 *     RtlpAllocateAtom @ 0x1406A6C84 (RtlpAllocateAtom.c)
 *     ObAdjustSecurityQuota @ 0x1406D8908 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1406D8FF8 (ObpChargeQuotaForObject.c)
 * Callees:
 *     PspChargeQuota @ 0x14021ADA0 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1402C2010 (PspReturnQuota.c)
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
      PspReturnQuota((char *)v5, 0LL, 1u, a2);
  }
  return 0LL;
}
