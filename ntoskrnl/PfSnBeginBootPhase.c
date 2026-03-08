/*
 * XREFs of PfSnBeginBootPhase @ 0x140A859AC
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1407E2E70 (PfSnSetPrefetcherInformation.c)
 *     PfPowerActionNotify @ 0x140A9CD7C (PfPowerActionNotify.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     PfSnUpdatePrefetcherFlags @ 0x140300F30 (PfSnUpdatePrefetcherFlags.c)
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x14085F238 (PfSnQueueEnablePrefetcherTimer.c)
 *     PfSnDetermineEnablePrefetcher @ 0x140861BA4 (PfSnDetermineEnablePrefetcher.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140A8EC40 (PfSnAllocateEnablePrefetcherTimer.c)
 */

__int64 __fastcall PfSnBeginBootPhase(unsigned int a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  int v4; // ecx
  unsigned int v6; // ecx
  __int64 EnablePrefetcherTimer; // rdi
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 >= 5 )
    return (unsigned int)-1073741811;
  v1 = 0;
  if ( !a1 )
  {
    EtwRegister(&MS_Kernel_Prefetch_Provider, 0LL, 0LL, &qword_140C6A388);
    PfSnDetermineEnablePrefetcher();
    PfSnUpdatePrefetcherFlags(3, 1);
    v8 = -3000000000LL;
    PfSnQueueEnablePrefetcherTimer(&v8);
    return v1;
  }
  v2 = a1 - 1;
  if ( !v2 )
    goto LABEL_8;
  v3 = v2 - 1;
  if ( !v3 )
  {
    PfSnUpdatePrefetcherFlags(4, 1);
    v4 = 17;
LABEL_6:
    PfSnUpdatePrefetcherFlags(v4, 0);
    return v1;
  }
  v6 = v3 - 1;
  if ( !v6 )
  {
    if ( (PfSnUpdatePrefetcherFlags(8, 1) & 4) == 0 )
      return v1;
LABEL_8:
    v4 = 1;
    goto LABEL_6;
  }
  if ( v6 == 1 )
  {
    EnablePrefetcherTimer = PfSnAllocateEnablePrefetcherTimer(16LL);
    if ( EnablePrefetcherTimer )
    {
      PfSnUpdatePrefetcherFlags(16, 1);
      KiSetTimerEx(EnablePrefetcherTimer, -600000000LL, 0, 0, EnablePrefetcherTimer + 64);
    }
  }
  return v1;
}
