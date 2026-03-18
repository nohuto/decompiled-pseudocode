/*
 * XREFs of ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C00FF018
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 *     SetTimerCoalescingTolerance @ 0x1C00FEF70 (SetTimerCoalescingTolerance.c)
 * Callees:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0074D40 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     InternalSetTimer @ 0x1C0075120 (InternalSetTimer.c)
 *     SetRITTimer @ 0x1C0078D60 (SetRITTimer.c)
 */

void __fastcall ConfigureRITDelayableTimers(int a1)
{
  __int64 v1; // rax

  if ( !a1 )
  {
    v1 = SetRITTimer(
           gnRITdaemonTimerId,
           0x3E8u,
           (__int64)lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_::_lambda_invoker_cdecl_,
           0);
LABEL_8:
    gnRITdaemonTimerId = v1;
    return;
  }
  if ( !gnRITdaemonTimerId )
  {
    if ( a1 != 1 )
      return;
    goto LABEL_5;
  }
  if ( a1 != 1 )
  {
    v1 = InternalSetTimer(
           0LL,
           gnRITdaemonTimerId,
           gdwRITdaemonTimerPowerSaveElapse,
           (__int64)lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_::_lambda_invoker_cdecl_,
           gdwRITdaemonTimerPowerSaveCoalescing,
           4);
    goto LABEL_8;
  }
  gnRITdaemonTimerId = SetRITTimer(
                         gnRITdaemonTimerId,
                         0x3E8u,
                         (__int64)lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_::_lambda_invoker_cdecl_,
                         0);
LABEL_5:
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    gdwLastAniTick = 0;
    zzzAnimateCursor(0LL, 0LL, 0LL);
  }
}
