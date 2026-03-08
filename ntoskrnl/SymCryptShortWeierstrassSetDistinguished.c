/*
 * XREFs of SymCryptShortWeierstrassSetDistinguished @ 0x1403FAC50
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptEcpointCopy @ 0x1403F9464 (SymCryptEcpointCopy.c)
 */

void *__fastcall SymCryptShortWeierstrassSetDistinguished(__int64 a1, _BYTE *a2)
{
  return SymCryptEcpointCopy(a1, *(_BYTE **)(a1 + 648), a2);
}
