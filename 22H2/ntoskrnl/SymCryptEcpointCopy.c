/*
 * XREFs of SymCryptEcpointCopy @ 0x1403FE984
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403FDD40 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE250 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointTransform @ 0x1403FEE04 (SymCryptEcpointTransform.c)
 *     SymCryptShortWeierstrassSetDistinguished @ 0x140400170 (SymCryptShortWeierstrassSetDistinguished.c)
 *     SymCryptShortWeierstrassAdd @ 0x140400BF0 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x140401274 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
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
