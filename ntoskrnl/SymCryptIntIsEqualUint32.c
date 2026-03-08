/*
 * XREFs of SymCryptIntIsEqualUint32 @ 0x1403F389C
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F1A48 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F2DFC (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403F7FE0 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x1403F81E4 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403F8820 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403F8D30 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x1403FE960 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntIsEqualUint32 @ 0x1403FFD50 (SymCryptFdefIntIsEqualUint32.c)
 */

__int64 SymCryptIntIsEqualUint32()
{
  return SymCryptFdefIntIsEqualUint32();
}
