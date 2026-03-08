/*
 * XREFs of SymCryptEcpointAdd @ 0x1403FD098
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403F8820 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403F8D30 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointAdd(__int64 a1, __int64 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_140006980[12 * (*(_DWORD *)(a1 + 4) & 3)])(
           a1,
           a2,
           a3);
}
