/*
 * XREFs of VerifierKeIsExecutingLegacyDpc @ 0x140ABA400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 VerifierKeIsExecutingLegacyDpc()
{
  return KeGetPcr()->Prcb.DpcRequestSummary & 1;
}
