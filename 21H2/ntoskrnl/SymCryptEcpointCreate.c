/*
 * XREFs of SymCryptEcpointCreate @ 0x1404068E0
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyCreate @ 0x14040015C (SymCryptEckeyCreate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140400210 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140405BF0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140406130 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptOfflinePrecomputation @ 0x140406784 (SymCryptOfflinePrecomputation.c)
 *     SymCryptShortWeierstrassAdd @ 0x140408B40 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     SymCryptEcpointCreateEx @ 0x140406900 (SymCryptEcpointCreateEx.c)
 */

__int64 __fastcall SymCryptEcpointCreate(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptEcpointCreateEx(a1, a2, a3, *(_DWORD *)(a3 + 8) & 0xF);
}
