/*
 * XREFs of PsChangeJobMemoryUsage @ 0x1406FECC4
 * Callers:
 *     MiChargeFullProcessCommitment @ 0x1407BE280 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x1406FECE0 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall PsChangeJobMemoryUsage(__int64 a1, __int64 a2, __int64 a3)
{
  return PspChangeJobMemoryUsageByProcess(a1, a2, a3);
}
