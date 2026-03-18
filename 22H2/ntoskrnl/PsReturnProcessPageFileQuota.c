/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x1407454C4
 * Callers:
 *     MiReturnFullProcessCharges @ 0x1402DF130 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1406F78B0 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x1402AD070 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1384), a1, 2, a2);
  return result;
}
