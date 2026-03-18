/*
 * XREFs of VfRandomGetNumber @ 0x140A819C8
 * Callers:
 *     VfPendingShouldForce @ 0x140A910FC (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x140A96B0C (VfFaultsInjectResourceFailure.c)
 *     DifpLwSPProcessPrePoolAlloc @ 0x140AA6E1C (DifpLwSPProcessPrePoolAlloc.c)
 *     ViInitPickRandomTargets @ 0x140B27D40 (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x14036C940 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
