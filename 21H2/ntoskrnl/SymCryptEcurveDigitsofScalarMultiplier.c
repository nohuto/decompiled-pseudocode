/*
 * XREFs of SymCryptEcurveDigitsofScalarMultiplier @ 0x1404000A8
 * Callers:
 *     SymCryptEckeyCreate @ 0x14040015C (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x14040079C (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1404079EC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x14040844C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x140409DC8 (SymCryptShortWeierstrassFillScratchSpaces.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x140400AB4 (SymCryptDigitsFromBits.c)
 */

__int64 __fastcall SymCryptEcurveDigitsofScalarMultiplier(__int64 a1)
{
  return SymCryptDigitsFromBits((unsigned int)(*(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 64)));
}
