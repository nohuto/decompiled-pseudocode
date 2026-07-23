/*
 * XREFs of PsReturnSharedPoolQuota @ 0x1406551E4
 * Callers:
 *     PspJobDelete @ 0x1402046D0 (PspJobDelete.c)
 *     PspFreeRateControl @ 0x1405D9FBC (PspFreeRateControl.c)
 *     AlpcMessageDestroyProcedure @ 0x1405E9BF0 (AlpcMessageDestroyProcedure.c)
 *     RtlpFreeAtom @ 0x140600CFC (RtlpFreeAtom.c)
 *     ObAdjustSecurityQuota @ 0x140654968 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x140655058 (ObpChargeQuotaForObject.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     ObpIncrementHandleCountEx @ 0x14070D340 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     PspReturnQuota @ 0x14034C6D0 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x140655230 (PspDereferenceQuotaBlock.c)
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
