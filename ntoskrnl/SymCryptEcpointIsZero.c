/*
 * XREFs of SymCryptEcpointIsZero @ 0x1403FD1BC
 * Callers:
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F2DFC (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403F8820 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403F8D30 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointIsZero(__int64 a1)
{
  return ((__int64 (*)(void))qword_140006970[12 * (*(_DWORD *)(a1 + 4) & 3)])();
}
