/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x1403A917C
 * Callers:
 *     PpmUpdateIdleStates @ 0x1407913F0 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x1407914E8 (PpmIdleRegisterDefaultStates.c)
 *     PoInitializePrcb @ 0x14099DBB0 (PoInitializePrcb.c)
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
