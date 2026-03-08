/*
 * XREFs of HalpSetClockBeforeSleep @ 0x140508B74
 * Callers:
 *     HalpAcpiPreSleep @ 0x140A93820 (HalpAcpiPreSleep.c)
 *     HalpDpPreReplace @ 0x140A94700 (HalpDpPreReplace.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x1402D1A0C (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall HalpSetClockBeforeSleep(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  unsigned __int8 v4; // al
  __int64 result; // rax

  HalpAcquireCmosSpinLock(a1, a2, a3);
  __outbyte(0x70u, 0xAu);
  v3 = __inbyte(0x71u);
  HalpRtcRegA = v3;
  __outbyte(0x70u, 0xBu);
  v4 = __inbyte(0x71u);
  HalpRtcRegB = v4;
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v4 & 0xBD | 2);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  result = (unsigned int)_InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return result;
}
