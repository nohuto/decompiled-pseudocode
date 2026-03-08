/*
 * XREFs of ?Cursor_DaemonTimeRateChanged@@YAXW4RitTimerRate@@@Z @ 0x1C00F5260
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0061410 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 */

void __fastcall Cursor_DaemonTimeRateChanged(int a1)
{
  if ( WPP_MAIN_CB.DeviceQueue.Lock )
  {
    if ( a1 == 1 )
    {
      gdwLastAniTick = 0;
      zzzAnimateCursor(0LL, 0LL, 0LL);
    }
  }
}
