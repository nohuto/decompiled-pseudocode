/*
 * XREFs of PsReturnSharedPoolQuota @ 0x140696A48
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     ObpChargeQuotaForObject @ 0x140696054 (ObpChargeQuotaForObject.c)
 *     SeDefaultObjectMethod @ 0x1406961E0 (SeDefaultObjectMethod.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     ObAdjustSecurityQuota @ 0x140751258 (ObAdjustSecurityQuota.c)
 *     AlpcMessageDestroyProcedure @ 0x140760CB0 (AlpcMessageDestroyProcedure.c)
 *     PspFreeRateControl @ 0x1407832C0 (PspFreeRateControl.c)
 *     ObpIncrementHandleCountEx @ 0x1407C1090 (ObpIncrementHandleCountEx.c)
 *     RtlpFreeAtom @ 0x1407DC628 (RtlpFreeAtom.c)
 * Callees:
 *     PspReturnQuota @ 0x1403148A0 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x140696A94 (PspDereferenceQuotaBlock.c)
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
