/*
 * XREFs of WakeRITForShutdown @ 0x1C00FCFF0
 * Callers:
 *     NtUserWakeRITForShutdown @ 0x1C00FCFB0 (NtUserWakeRITForShutdown.c)
 * Callees:
 *     WakeRIT @ 0x1C00FD22C (WakeRIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall WakeRITForShutdown(__int64 a1, __int64 a2)
{
  if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS || !gpkeRITEvent )
    return 3221225473LL;
  gdwHydraHint |= 0x2000000u;
  WakeRIT(2LL);
  return 0LL;
}
