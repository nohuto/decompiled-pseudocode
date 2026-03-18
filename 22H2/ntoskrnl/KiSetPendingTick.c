/*
 * XREFs of KiSetPendingTick @ 0x1402C2830
 * Callers:
 *     KiSetClockTickRate @ 0x1402C2860 (KiSetClockTickRate.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C7030 (KeResumeClockTimerFromIdle.c)
 *     KiRestoreClockTickRate @ 0x140340810 (KiRestoreClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x140346E44 (KePrepareClockTimerForIdle.c)
 *     KeInitializeClockOtherProcessors @ 0x140A9195C (KeInitializeClockOtherProcessors.c)
 *     KeInitializeClock @ 0x140B6BA78 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall KiSetPendingTick(char a1)
{
  char v1; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 result; // al
  __int64 v4; // rcx

  v1 = a1 & 1;
  if ( KiClockTimerPerCpu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = v1 | CurrentPrcb->PendingTickFlags & 0xFE;
    CurrentPrcb->PendingTickFlags = result;
  }
  else
  {
    v4 = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    result = v1 | *(_BYTE *)(v4 + 34) & 0xFE;
    *(_BYTE *)(v4 + 34) = result;
  }
  return result;
}
