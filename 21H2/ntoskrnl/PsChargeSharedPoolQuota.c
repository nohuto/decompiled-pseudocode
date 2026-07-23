/*
 * XREFs of PsChargeSharedPoolQuota @ 0x140655158
 * Callers:
 *     PspAllocateRateControl @ 0x1405DA00C (PspAllocateRateControl.c)
 *     RtlpAllocateAtom @ 0x140622F24 (RtlpAllocateAtom.c)
 *     ObAdjustSecurityQuota @ 0x140654968 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x140655058 (ObpChargeQuotaForObject.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 * Callees:
 *     PspChargeQuota @ 0x1402BF6E0 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x14034C6D0 (PspReturnQuota.c)
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
