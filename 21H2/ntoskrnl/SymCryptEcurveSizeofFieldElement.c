/*
 * XREFs of SymCryptEcurveSizeofFieldElement @ 0x1404000F0
 * Callers:
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointGetValue @ 0x140406980 (SymCryptEcpointGetValue.c)
 *     SymCryptEcpointSetValue @ 0x140406B10 (SymCryptEcpointSetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcurveSizeofFieldElement(__int64 a1)
{
  return *(unsigned int *)(a1 + 20);
}
