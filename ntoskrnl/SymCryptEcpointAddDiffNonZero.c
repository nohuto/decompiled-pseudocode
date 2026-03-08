/*
 * XREFs of SymCryptEcpointAddDiffNonZero @ 0x1403FD0F0
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403F8D30 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptPrecomputation @ 0x1403F93C0 (SymCryptPrecomputation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointAddDiffNonZero(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_140006988[12 * (*(_DWORD *)(a1 + 4) & 3)])(a1, a2);
}
