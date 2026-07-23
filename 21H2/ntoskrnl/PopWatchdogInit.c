/*
 * XREFs of PopWatchdogInit @ 0x140A73F08
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 PopWatchdogInit()
{
  qword_140C20758 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140C23BC0.Header.Lock = 8LL;
  stru_140C23BC0.Header.WaitListHead.Blink = &stru_140C23BC0.Header.WaitListHead;
  stru_140C23BC0.Header.WaitListHead.Flink = &stru_140C23BC0.Header.WaitListHead;
  qword_140C23B98 = (__int64)PopPowerActionWatchdog;
  qword_140C23598 = 0LL;
  qword_140C23B78 = 0LL;
  stru_140C23BC0.DueTime.QuadPart = 0LL;
  stru_140C23BC0.Period = 0;
  stru_140C23BC0.Processor = 0;
  dword_140C23B80 = 275;
  qword_140C23BA0 = 0LL;
  qword_140C23BB8 = 0LL;
  qword_140C23B90 = 0LL;
  byte_140C23C00 = 1;
  return PopReleasePolicyLock();
}
