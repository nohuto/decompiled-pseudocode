/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x14037DF20
 * Callers:
 *     PpmUpdateIdleStates @ 0x14080D6D0 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x14080FA58 (PpmIdleRegisterDefaultStates.c)
 *     PoInitializePrcb @ 0x140A89C00 (PoInitializePrcb.c)
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
