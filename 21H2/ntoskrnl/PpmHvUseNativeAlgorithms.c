/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x1403AE4AC
 * Callers:
 *     PpmUpdateIdleStates @ 0x140796760 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x140796858 (PpmIdleRegisterDefaultStates.c)
 *     PoInitializePrcb @ 0x14099F5B0 (PoInitializePrcb.c)
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
