/*
 * XREFs of PsChargeSharedPoolQuota @ 0x140726494
 * Callers:
 *     PspAllocateRateControl @ 0x140678B98 (PspAllocateRateControl.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     ObAdjustSecurityQuota @ 0x140725858 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x140726394 (ObpChargeQuotaForObject.c)
 *     RtlpAllocateAtom @ 0x1407D454C (RtlpAllocateAtom.c)
 * Callees:
 *     PspChargeQuota @ 0x1402AC010 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1403493B0 (PspReturnQuota.c)
 */

__int64 __fastcall PsChargeSharedPoolQuota(struct _KPROCESS *a1, ULONG_PTR a2, unsigned __int64 a3)
{
  __int64 v5; // rbx

  if ( a1 == PsInitialSystemProcess )
    return 1LL;
  v5 = a1[1].Affinity.StaticBitmap[27];
  if ( !a2 || (int)PspChargeQuota(a1[1].Affinity.StaticBitmap[27], 0LL, 1, a2) >= 0 )
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
