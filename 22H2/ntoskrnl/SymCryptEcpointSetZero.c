/*
 * XREFs of SymCryptEcpointSetZero @ 0x140402838
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403FDD40 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE250 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointSetZero(__int64 a1)
{
  return ((__int64 (*)(void))SymCryptEcurveAllFunctionPointers[12 * (*(_DWORD *)(a1 + 4) & 3)])();
}
