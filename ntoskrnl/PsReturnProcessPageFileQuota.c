/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x1406EC714
 * Callers:
 *     MiReturnFullProcessCharges @ 0x140289980 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1407C5840 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x1403148A0 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1384), a1, 2, a2);
  return result;
}
