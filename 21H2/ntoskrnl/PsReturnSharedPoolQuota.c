/*
 * XREFs of PsReturnSharedPoolQuota @ 0x1406603C4
 * Callers:
 *     PspJobDelete @ 0x140287530 (PspJobDelete.c)
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     ObAdjustSecurityQuota @ 0x14065FB48 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x140660238 (ObpChargeQuotaForObject.c)
 *     PspFreeRateControl @ 0x14067F51C (PspFreeRateControl.c)
 *     AlpcMessageDestroyProcedure @ 0x14068A760 (AlpcMessageDestroyProcedure.c)
 *     RtlpFreeAtom @ 0x1406A156C (RtlpFreeAtom.c)
 *     ObpIncrementHandleCountEx @ 0x1406F5F60 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     PspReturnQuota @ 0x140341980 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x140660410 (PspDereferenceQuotaBlock.c)
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
