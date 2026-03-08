/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x140861BA4
 * Callers:
 *     PfpParametersWatcher @ 0x14097D180 (PfpParametersWatcher.c)
 *     PfSnBeginBootPhase @ 0x140A859AC (PfSnBeginBootPhase.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( (_DWORD)InitSafeBootMode )
    qword_140C64A70 = 0LL;
}
