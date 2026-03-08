/*
 * XREFs of SymCryptSizeofEcpointEx @ 0x1403F9DF8
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1403FA5AC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x1403FAFEC (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x1403FC95C (SymCryptShortWeierstrassFillScratchSpaces.c)
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
