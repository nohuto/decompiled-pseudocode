/*
 * XREFs of PfSnQueueEnablePrefetcherTimer @ 0x14085F238
 * Callers:
 *     PfSnBeginBootPhase @ 0x140A859AC (PfSnBeginBootPhase.c)
 * Callees:
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140A8EC40 (PfSnAllocateEnablePrefetcherTimer.c)
 */

__int64 __fastcall PfSnQueueEnablePrefetcherTimer(__int64 *a1)
{
  __int64 EnablePrefetcherTimer; // rax
  unsigned int v3; // ebx

  EnablePrefetcherTimer = PfSnAllocateEnablePrefetcherTimer(1LL);
  v3 = 0;
  if ( EnablePrefetcherTimer )
    KiSetTimerEx(EnablePrefetcherTimer, *a1, 0, 0, EnablePrefetcherTimer + 64);
  else
    return (unsigned int)-1073741670;
  return v3;
}
