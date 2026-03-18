/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x1403C1E10
 * Callers:
 *     PpmIdleRegisterDefaultStates @ 0x14082975C (PpmIdleRegisterDefaultStates.c)
 *     PpmUpdateIdleStates @ 0x140829930 (PpmUpdateIdleStates.c)
 *     PoInitializePrcb @ 0x140A59654 (PoInitializePrcb.c)
 * Callees:
 *     <none>
 */

bool PpmHvUseNativeAlgorithms()
{
  char v0; // dl

  v0 = 0;
  if ( !HvlHypervisorConnected )
    return 1;
  if ( (HvlpFlags & 2) != 0 )
    return (HvlEnlightenments & 0x400) == 0;
  return v0;
}
