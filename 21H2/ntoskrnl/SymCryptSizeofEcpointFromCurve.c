/*
 * XREFs of SymCryptSizeofEcpointFromCurve @ 0x140407254
 * Callers:
 *     SymCryptEckeyCreate @ 0x14040015C (SymCryptEckeyCreate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140400210 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x14040079C (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140405BF0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140406130 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptShortWeierstrassAdd @ 0x140408B40 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     SymCryptSizeofEcpointEx @ 0x14040721C (SymCryptSizeofEcpointEx.c)
 */

__int64 __fastcall SymCryptSizeofEcpointFromCurve(__int64 a1)
{
  return SymCryptSizeofEcpointEx(*(_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 8) & 0xF);
}
