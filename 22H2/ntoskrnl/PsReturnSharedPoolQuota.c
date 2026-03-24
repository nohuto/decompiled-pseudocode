/*
 * XREFs of PsReturnSharedPoolQuota @ 0x1406D9184
 * Callers:
 *     PspJobDelete @ 0x1402DD320 (PspJobDelete.c)
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     ObpIncrementHandleCountEx @ 0x140643680 (ObpIncrementHandleCountEx.c)
 *     PspFreeRateControl @ 0x14065CB8C (PspFreeRateControl.c)
 *     AlpcMessageDestroyProcedure @ 0x14066C2E0 (AlpcMessageDestroyProcedure.c)
 *     RtlpFreeAtom @ 0x1406862EC (RtlpFreeAtom.c)
 *     ObAdjustSecurityQuota @ 0x1406D8908 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1406D8FF8 (ObpChargeQuotaForObject.c)
 * Callees:
 *     PspReturnQuota @ 0x1402C2010 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1406D91D0 (PspDereferenceQuotaBlock.c)
 */

__int64 __fastcall PsReturnSharedPoolQuota(char *P, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 result; // rax

  if ( P != (char *)1 )
  {
    if ( a2 )
      PspReturnQuota(P, 0LL, 1u, a2);
    if ( a3 )
      PspReturnQuota(P, 0LL, 0, a3);
    return PspDereferenceQuotaBlock(P);
  }
  return result;
}
