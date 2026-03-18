/*
 * XREFs of PsIsProcessCommitRelinquished @ 0x1409AE2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PsIsProcessCommitRelinquished(__int64 a1)
{
  return BYTE1(*(_DWORD *)(a1 + 2172)) & 1;
}
