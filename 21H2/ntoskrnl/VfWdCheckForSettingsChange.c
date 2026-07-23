/*
 * XREFs of VfWdCheckForSettingsChange @ 0x1409E1BA4
 * Callers:
 *     ViSettingsIoCheckForChanges @ 0x1409E1600 (ViSettingsIoCheckForChanges.c)
 *     VfWdSetCancelTimeout @ 0x1409E1CF0 (VfWdSetCancelTimeout.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140246860 (KeRemoveQueueDpcEx.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
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
        return KiSetTimerEx((__int64)&ViWdIrpTimer, -10000000LL, 0, 0, (__int64)&ViWdIrpTimerDpc);
    }
  }
  return result;
}
