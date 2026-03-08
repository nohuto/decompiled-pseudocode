/*
 * XREFs of WakeRITForShutdown @ 0x1C00DB3C0
 * Callers:
 *     NtUserWakeRITForShutdown @ 0x1C00DB220 (NtUserWakeRITForShutdown.c)
 * Callees:
 *     WakeRIT @ 0x1C00DB568 (WakeRIT.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall WakeRITForShutdown(__int64 a1, __int64 a2, __int64 a3)
{
  if ( PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS || !WPP_MAIN_CB.Dpc.DeferredContext )
    return 3221225473LL;
  gdwHydraHint |= 0x2000000u;
  WakeRIT(2LL);
  ShutdownImWorker();
  return 0LL;
}
