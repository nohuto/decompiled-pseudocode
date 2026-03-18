/*
 * XREFs of SymCryptEcpointDouble @ 0x14040A5C4
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140405BF0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140406130 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptPrecomputation @ 0x140406800 (SymCryptPrecomputation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointDouble(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_140006E20[12 * (*(_DWORD *)(a1 + 4) & 3)])(a1, a2);
}
