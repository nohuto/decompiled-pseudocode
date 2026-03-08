/*
 * XREFs of SymCryptEcpointCopy @ 0x1403F9464
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403F8820 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403F8D30 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointTransform @ 0x1403F98E4 (SymCryptEcpointTransform.c)
 *     SymCryptShortWeierstrassSetDistinguished @ 0x1403FAC50 (SymCryptShortWeierstrassSetDistinguished.c)
 *     SymCryptShortWeierstrassAdd @ 0x1403FB6D0 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1403FBD54 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void *__fastcall SymCryptEcpointCopy(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  void *result; // rax

  if ( a2 != a3 )
  {
    *a3 = *a2;
    return memmove(a3 + 32, a2 + 32, (*(_DWORD *)(a1 + 16) * (*(_DWORD *)(a1 + 8) & 0xFu)) << 6);
  }
  return result;
}
