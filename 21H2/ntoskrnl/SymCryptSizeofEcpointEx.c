/*
 * XREFs of SymCryptSizeofEcpointEx @ 0x14040721C
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 *     SymCryptOfflinePrecomputation @ 0x140406784 (SymCryptOfflinePrecomputation.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140407254 (SymCryptSizeofEcpointFromCurve.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1404079EC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x14040844C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x140409DC8 (SymCryptShortWeierstrassFillScratchSpaces.c)
 * Callees:
 *     SymCryptFatal @ 0x14056AF38 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptSizeofEcpointEx(int a1, unsigned int a2)
{
  if ( a2 > 4 )
    SymCryptFatal(1701015604LL);
  return a2 * a1 + 32;
}
