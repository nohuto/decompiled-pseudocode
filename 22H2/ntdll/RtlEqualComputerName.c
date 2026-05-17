/*
 * XREFs of RtlEqualComputerName @ 0x1800EB230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char __fastcall RtlEqualComputerName(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlEqualDomainName(a1, a2, a3);
}
