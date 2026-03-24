/*
 * XREFs of VfRandomGetNumber @ 0x1409C62A0
 * Callers:
 *     VfPendingShouldForce @ 0x1409D59CC (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x1409DC83C (VfFaultsInjectResourceFailure.c)
 *     ViInitPickRandomTargets @ 0x140A6FC9C (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x1403572D0 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
