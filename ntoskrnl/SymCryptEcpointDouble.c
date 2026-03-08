/*
 * XREFs of SymCryptEcpointDouble @ 0x1403FD134
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403F8820 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403F8D30 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptPrecomputation @ 0x1403F93C0 (SymCryptPrecomputation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointDouble(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_140006990[12 * (*(_DWORD *)(a1 + 4) & 3)])(a1, a2);
}
