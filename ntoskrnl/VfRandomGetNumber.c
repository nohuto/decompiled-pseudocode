/*
 * XREFs of VfRandomGetNumber @ 0x140ABF358
 * Callers:
 *     VfPendingShouldForce @ 0x140ACEA8C (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD2FAC (VfFaultsInjectResourceFailure.c)
 *     DifpLwSPProcessPrePoolAlloc @ 0x140AE4BEC (DifpLwSPProcessPrePoolAlloc.c)
 *     ViInitPickRandomTargets @ 0x140B49F94 (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x1402A6210 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
