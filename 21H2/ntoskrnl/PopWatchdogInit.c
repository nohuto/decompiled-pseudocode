/*
 * XREFs of PopWatchdogInit @ 0x140B2FDC0
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 PopWatchdogInit()
{
  qword_140C1F5A8 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140C22920.Header.Lock = 8LL;
  stru_140C22920.Header.WaitListHead.Blink = &stru_140C22920.Header.WaitListHead;
  stru_140C22920.Header.WaitListHead.Flink = &stru_140C22920.Header.WaitListHead;
  qword_140C228F8 = (__int64)PopPowerActionWatchdog;
  qword_140C22378 = 0LL;
  qword_140C228D8 = 0LL;
  stru_140C22920.DueTime.QuadPart = 0LL;
  stru_140C22920.Period = 0;
  stru_140C22920.Processor = 0;
  dword_140C228E0 = 275;
  qword_140C22900 = 0LL;
  qword_140C22918 = 0LL;
  qword_140C228F0 = 0LL;
  byte_140C22960 = 1;
  return PopReleasePolicyLock();
}
