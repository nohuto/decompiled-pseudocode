/*
 * XREFs of PopCoalescingInitialize @ 0x140B53A80
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     PoRegisterCoalescingCallback @ 0x140819500 (PoRegisterCoalescingCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1408197EC (PopUpdateDiskIdleTimeoutSetting.c)
 */

__int64 PopCoalescingInitialize()
{
  __int64 result; // rax

  PopCoalescingState &= 0xF0u;
  PopCoalescingCallbackWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopCoalescingCallbackWorker;
  PopCoalescingCallbackWorkItem.Parameter = 0LL;
  PopCoalescingCallbackWorkItem.List.Flink = 0LL;
  result = PoRegisterCoalescingCallback((__int64)xHalTimerWatchdogStop, 0, &PopCoalescingRegistration, 0LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&PopCoalescingTimer.Header.Lock = 8LL;
    PopCoalescingTimer.Header.WaitListHead.Blink = &PopCoalescingTimer.Header.WaitListHead;
    PopCoalescingTimer.Header.WaitListHead.Flink = &PopCoalescingTimer.Header.WaitListHead;
    qword_140C3E4F8 = (__int64)PopCoalesingTimerDpcCallback;
    PopCoalescingTimer.DueTime.QuadPart = 0LL;
    PopCoalescingTimer.Period = 0;
    PopCoalescingTimer.Processor = 0;
    PopCoalescingTimerDpc = 275;
    qword_140C3E500 = 0LL;
    qword_140C3E518 = 0LL;
    qword_140C3E4F0 = 0LL;
    return PopUpdateDiskIdleTimeoutSetting();
  }
  return result;
}
