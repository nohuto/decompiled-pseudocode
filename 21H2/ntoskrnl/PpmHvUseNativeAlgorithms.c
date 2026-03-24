/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x1403AE35C
 * Callers:
 *     PpmUpdateIdleStates @ 0x140796560 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x140796658 (PpmIdleRegisterDefaultStates.c)
 *     PoInitializePrcb @ 0x14099E680 (PoInitializePrcb.c)
 * Callees:
 *     <none>
 */

bool PpmHvUseNativeAlgorithms()
{
  char v0; // cl

  v0 = 0;
  if ( !HvlHypervisorConnected )
    return 1;
  if ( (HvlpFlags & 2) != 0 )
    return (HvlEnlightenments & 0x408) == 0;
  return v0;
}
