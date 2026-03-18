/*
 * XREFs of PsReturnSharedPoolQuota @ 0x140724DC8
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     PspFreeRateControl @ 0x140678B4C (PspFreeRateControl.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     AlpcMessageDestroyProcedure @ 0x1406A61B0 (AlpcMessageDestroyProcedure.c)
 *     RtlpFreeAtom @ 0x1406AB544 (RtlpFreeAtom.c)
 *     ObAdjustSecurityQuota @ 0x140725858 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x140726394 (ObpChargeQuotaForObject.c)
 *     ObpIncrementHandleCountEx @ 0x140733B40 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     PspReturnQuota @ 0x1403493B0 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x140724E14 (PspDereferenceQuotaBlock.c)
 */

__int64 __fastcall PsReturnSharedPoolQuota(char *P, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 result; // rax

  if ( P != (char *)1 )
  {
    if ( a2 )
      PspReturnQuota(P, 0LL, 1, a2);
    if ( a3 )
      PspReturnQuota(P, 0LL, 0, a3);
    return PspDereferenceQuotaBlock(P);
  }
  return result;
}
