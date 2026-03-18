/*
 * XREFs of SymCryptShortWeierstrassSetDistinguished @ 0x1404080B0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptEcpointCopy @ 0x1404068A4 (SymCryptEcpointCopy.c)
 */

void *__fastcall SymCryptShortWeierstrassSetDistinguished(__int64 a1, _BYTE *a2)
{
  return SymCryptEcpointCopy(a1, *(_BYTE **)(a1 + 648), a2);
}
