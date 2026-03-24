/*
 * XREFs of PopWatchdogInit @ 0x140A72F08
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 */

__int64 PopWatchdogInit()
{
  qword_140C20768 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140C235A0.Header.Lock = 8LL;
  stru_140C235A0.Header.WaitListHead.Blink = &stru_140C235A0.Header.WaitListHead;
  stru_140C235A0.Header.WaitListHead.Flink = &stru_140C235A0.Header.WaitListHead;
  qword_140C23578 = (__int64)PopPowerActionWatchdog;
  qword_140C22FD8 = 0LL;
  qword_140C23558 = 0LL;
  stru_140C235A0.DueTime.QuadPart = 0LL;
  stru_140C235A0.Period = 0;
  stru_140C235A0.Processor = 0;
  dword_140C23560 = 275;
  qword_140C23580 = 0LL;
  qword_140C23598 = 0LL;
  qword_140C23570 = 0LL;
  byte_140C235E0 = 1;
  return PopReleasePolicyLock();
}
