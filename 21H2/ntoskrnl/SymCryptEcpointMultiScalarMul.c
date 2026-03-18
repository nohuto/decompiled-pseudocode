/*
 * XREFs of SymCryptEcpointMultiScalarMul @ 0x14040A67C
 * Callers:
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointMultiScalarMul(__int64 a1, __int64 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_140006E38[12 * (*(_DWORD *)(a1 + 4) & 3)])(
           a1,
           a2,
           a3);
}
