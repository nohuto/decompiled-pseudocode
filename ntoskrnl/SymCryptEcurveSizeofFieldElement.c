/*
 * XREFs of SymCryptEcurveSizeofFieldElement @ 0x1403F2CDC
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointGetValue @ 0x1403F9550 (SymCryptEcpointGetValue.c)
 *     SymCryptEcpointSetValue @ 0x1403F96E0 (SymCryptEcpointSetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcurveSizeofFieldElement(__int64 a1)
{
  return *(unsigned int *)(a1 + 20);
}
