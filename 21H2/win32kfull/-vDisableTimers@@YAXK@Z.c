/*
 * XREFs of ?vDisableTimers@@YAXK@Z @ 0x1C0113640
 * Callers:
 *     vDisableSynchronize @ 0x1C0113580 (vDisableSynchronize.c)
 *     ?vDisableSynchronizeNKAPC@@YAXPEAX00@Z @ 0x1C029D590 (-vDisableSynchronizeNKAPC@@YAXPEAX00@Z.c)
 * Callees:
 *     UserKillTimer @ 0x1C0243A90 (UserKillTimer.c)
 */

void __fastcall vDisableTimers(char a1)
{
  if ( (a1 & 0x40) != 0 )
    --gcSynchronizeFlush;
  if ( a1 < 0 && --gcSynchronizeTimer < 0 )
  {
    if ( gidSynchronizeTimer )
    {
      UserKillTimer();
      gidSynchronizeTimer = 0LL;
    }
  }
}
