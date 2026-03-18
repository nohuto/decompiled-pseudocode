/*
 * XREFs of SymCryptEcpointCopy @ 0x1404068A4
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140405BF0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140406130 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointTransform @ 0x140406D14 (SymCryptEcpointTransform.c)
 *     SymCryptShortWeierstrassSetDistinguished @ 0x1404080B0 (SymCryptShortWeierstrassSetDistinguished.c)
 *     SymCryptShortWeierstrassAdd @ 0x140408B40 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1404091C8 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
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
