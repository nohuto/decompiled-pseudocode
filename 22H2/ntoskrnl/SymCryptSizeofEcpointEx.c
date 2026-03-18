/*
 * XREFs of SymCryptSizeofEcpointEx @ 0x1403FF318
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1403FFACC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x14040050C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x140401E7C (SymCryptShortWeierstrassFillScratchSpaces.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSizeofEcpointEx(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) > 3 )
    return 0LL;
  else
    return (unsigned int)(a2 * a1 + 32);
}
