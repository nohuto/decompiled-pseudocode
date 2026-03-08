/*
 * XREFs of SymCryptSizeofEcpointFromCurve @ 0x1403F9E14
 * Callers:
 *     SymCryptEckeyCreate @ 0x1403F2D48 (SymCryptEckeyCreate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F2DFC (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x1403F339C (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403F8820 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403F8D30 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptOfflinePrecomputation @ 0x1403F9350 (SymCryptOfflinePrecomputation.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1403FA5AC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x1403FAFEC (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassAdd @ 0x1403FB6D0 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x1403FC95C (SymCryptShortWeierstrassFillScratchSpaces.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSizeofEcpointFromCurve(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 8) & 0xF;
  if ( (unsigned int)(v1 - 1) > 3 )
    return 0;
  else
    return (unsigned int)(*(_DWORD *)(a1 + 36) * v1 + 32);
}
