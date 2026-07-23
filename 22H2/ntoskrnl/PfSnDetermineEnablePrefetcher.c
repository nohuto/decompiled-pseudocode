/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x1407D5550
 * Callers:
 *     PfpParametersWatcher @ 0x1408E0C50 (PfpParametersWatcher.c)
 *     PfSnBeginBootPhase @ 0x14099B274 (PfSnBeginBootPhase.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_140C50120 = 0LL;
}
