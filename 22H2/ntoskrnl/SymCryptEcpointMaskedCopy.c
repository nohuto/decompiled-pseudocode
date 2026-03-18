/*
 * XREFs of SymCryptEcpointMaskedCopy @ 0x1403FEBC8
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE250 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptShortWeierstrassAdd @ 0x140400BF0 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     SymCryptFdefMaskedCopy @ 0x14040535C (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptEcpointMaskedCopy(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  *a3 &= *a2;
  return SymCryptFdefMaskedCopy(a2 + 32, a3 + 32, *(_DWORD *)(a1 + 16) * (*(_DWORD *)(a1 + 8) & 0xFu));
}
