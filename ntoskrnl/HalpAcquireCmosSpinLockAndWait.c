/*
 * XREFs of HalpAcquireCmosSpinLockAndWait @ 0x1402D19D8
 * Callers:
 *     HalpReadCmosTime @ 0x1402D181C (HalpReadCmosTime.c)
 *     HalpSetWakeAlarm @ 0x140508C04 (HalpSetWakeAlarm.c)
 *     HalpWriteCmosTime @ 0x1405133BC (HalpWriteCmosTime.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x1402D1A0C (HalpAcquireCmosSpinLock.c)
 */

char HalpAcquireCmosSpinLockAndWait()
{
  int v0; // ebx
  char result; // al

  HalpAcquireCmosSpinLock();
  v0 = 0;
  while ( 1 )
  {
    __outbyte(0x70u, 0xAu);
    result = __inbyte(0x71u);
    if ( result >= 0 )
      break;
    if ( ++v0 == 100 )
    {
      _InterlockedExchange(&HalpSystemHardwareLock, -1);
      v0 = 0;
      if ( HalpSystemHardwareLockInterruptsEnabled )
        _enable();
      HalpAcquireCmosSpinLock();
    }
  }
  return result;
}
