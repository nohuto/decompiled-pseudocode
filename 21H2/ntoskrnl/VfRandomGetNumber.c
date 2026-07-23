/*
 * XREFs of VfRandomGetNumber @ 0x1409C7290
 * Callers:
 *     VfPendingShouldForce @ 0x1409D69BC (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x1409DD82C (VfFaultsInjectResourceFailure.c)
 *     ViInitPickRandomTargets @ 0x140A70C9C (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x1402970C0 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
