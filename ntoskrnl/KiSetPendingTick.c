/*
 * XREFs of KiSetPendingTick @ 0x14022AF40
 * Callers:
 *     KiSetClockTickRate @ 0x14022AF70 (KiSetClockTickRate.c)
 *     KeResumeClockTimerFromIdle @ 0x14022E860 (KeResumeClockTimerFromIdle.c)
 *     KePrepareClockTimerForIdle @ 0x1402A9B1C (KePrepareClockTimerForIdle.c)
 *     KiRestoreClockTickRate @ 0x1402D9574 (KiRestoreClockTickRate.c)
 *     KeInitializeClockOtherProcessors @ 0x140A8B0E4 (KeInitializeClockOtherProcessors.c)
 *     KeInitializeClock @ 0x140B67BE8 (KeInitializeClock.c)
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
