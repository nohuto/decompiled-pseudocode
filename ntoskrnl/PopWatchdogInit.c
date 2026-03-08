/*
 * XREFs of PopWatchdogInit @ 0x140B70B70
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 PopWatchdogInit()
{
  qword_140C39B28 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock();
  *(_QWORD *)&stru_140C3CEC0.Header.Lock = 8LL;
  stru_140C3CEC0.Header.WaitListHead.Blink = &stru_140C3CEC0.Header.WaitListHead;
  stru_140C3CEC0.Header.WaitListHead.Flink = &stru_140C3CEC0.Header.WaitListHead;
  qword_140C3CE98 = (__int64)PopPowerActionWatchdog;
  qword_140C3C618 = 0LL;
  qword_140C3CE78 = 0LL;
  stru_140C3CEC0.DueTime.QuadPart = 0LL;
  stru_140C3CEC0.Period = 0;
  stru_140C3CEC0.Processor = 0;
  dword_140C3CE80 = 275;
  qword_140C3CEA0 = 0LL;
  qword_140C3CEB8 = 0LL;
  qword_140C3CE90 = 0LL;
  byte_140C3CF00 = 1;
  return PopReleasePolicyLock();
}
