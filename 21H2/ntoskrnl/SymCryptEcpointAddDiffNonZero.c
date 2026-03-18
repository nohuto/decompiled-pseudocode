/*
 * XREFs of SymCryptEcpointAddDiffNonZero @ 0x14040A580
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140406130 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptPrecomputation @ 0x140406800 (SymCryptPrecomputation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointAddDiffNonZero(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_140006E18[12 * (*(_DWORD *)(a1 + 4) & 3)])(a1, a2);
}
