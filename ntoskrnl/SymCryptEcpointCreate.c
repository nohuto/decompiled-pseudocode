/*
 * XREFs of SymCryptEcpointCreate @ 0x1403F94A0
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyCreate @ 0x1403F2D48 (SymCryptEckeyCreate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F2DFC (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403F8820 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403F8D30 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptOfflinePrecomputation @ 0x1403F9350 (SymCryptOfflinePrecomputation.c)
 *     SymCryptShortWeierstrassAdd @ 0x1403FB6D0 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     SymCryptEcpointCreateEx @ 0x1403F94C0 (SymCryptEcpointCreateEx.c)
 */

__int64 __fastcall SymCryptEcpointCreate(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptEcpointCreateEx(a1, a2, a3, *(_DWORD *)(a3 + 8) & 0xF);
}
