/*
 * XREFs of PopWatchdogInit @ 0x140A72F08
 * Callers:
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

__int64 PopWatchdogInit()
{
  qword_140C20758 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140C23BA0.Header.Lock = 8LL;
  stru_140C23BA0.Header.WaitListHead.Blink = &stru_140C23BA0.Header.WaitListHead;
  stru_140C23BA0.Header.WaitListHead.Flink = &stru_140C23BA0.Header.WaitListHead;
  qword_140C23B78 = (__int64)PopPowerActionWatchdog;
  qword_140C235D8 = 0LL;
  qword_140C23B58 = 0LL;
  stru_140C23BA0.DueTime.QuadPart = 0LL;
  stru_140C23BA0.Period = 0;
  stru_140C23BA0.Processor = 0;
  dword_140C23B60 = 275;
  qword_140C23B80 = 0LL;
  qword_140C23B98 = 0LL;
  qword_140C23B70 = 0LL;
  byte_140C23BE0 = 1;
  return PopReleasePolicyLock();
}
