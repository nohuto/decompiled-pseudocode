/*
 * XREFs of RtlOwnerAcesPresent @ 0x1800E6B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlOwnerAcesPresent(PACL pAcl)
{
  return RtlpOwnerAcesPresent(0, (__int64)pAcl);
}
