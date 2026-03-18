/*
 * XREFs of PopWatchdogInit @ 0x140B74C74
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 PopWatchdogInit()
{
  qword_140C39F18 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140C3CF80.Header.Lock = 8LL;
  stru_140C3CF80.Header.WaitListHead.Blink = &stru_140C3CF80.Header.WaitListHead;
  stru_140C3CF80.Header.WaitListHead.Flink = &stru_140C3CF80.Header.WaitListHead;
  qword_140C3CF58 = (__int64)PopPowerActionWatchdog;
  qword_140C3C9F8 = 0LL;
  qword_140C3CF38 = 0LL;
  stru_140C3CF80.DueTime.QuadPart = 0LL;
  stru_140C3CF80.Period = 0;
  stru_140C3CF80.Processor = 0;
  dword_140C3CF40 = 275;
  qword_140C3CF60 = 0LL;
  qword_140C3CF78 = 0LL;
  qword_140C3CF50 = 0LL;
  byte_140C3CFC0 = 1;
  return PopReleasePolicyLock();
}
