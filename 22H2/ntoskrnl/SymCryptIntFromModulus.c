/*
 * XREFs of SymCryptIntFromModulus @ 0x1403F8D5C
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F6F68 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeySetValue @ 0x1403F74AC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F831C (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x1403F8438 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x1403F9C8C (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403FD500 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE250 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointSetValue @ 0x1403FEC00 (SymCryptEcpointSetValue.c)
 *     SymCryptFdefModInvGeneric @ 0x140403E80 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntFromModulus @ 0x1404037E8 (SymCryptFdefIntFromModulus.c)
 */

__int64 SymCryptIntFromModulus()
{
  return SymCryptFdefIntFromModulus();
}
