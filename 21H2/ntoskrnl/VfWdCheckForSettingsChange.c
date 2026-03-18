/*
 * XREFs of VfWdCheckForSettingsChange @ 0x140A9CF88
 * Callers:
 *     ViSettingsIoCheckForChanges @ 0x140A9B158 (ViSettingsIoCheckForChanges.c)
 *     VfWdSetCancelTimeout @ 0x140A9D0D0 (VfWdSetCancelTimeout.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 */

__int64 __fastcall VfWdCheckForSettingsChange(char a1)
{
  __int64 result; // rax

  if ( !VfSafeMode )
  {
    _InterlockedExchange(&ViWdCancelling, 1);
    KeCancelTimer(&ViWdIrpTimer);
    KeRemoveQueueDpcEx((__int64)&ViWdIrpTimerDpc, 1);
    result = (unsigned int)_InterlockedExchange(&ViWdCancelling, 0);
    if ( (a1 & 0x10) != 0 )
    {
      result = (unsigned int)VfWdCancelTimeoutTicks;
      if ( VfWdCancelTimeoutTicks )
        return KiSetTimerEx((unsigned __int64)&ViWdIrpTimer, -10000000LL, 0, 0, (__int64)&ViWdIrpTimerDpc);
    }
  }
  return result;
}
