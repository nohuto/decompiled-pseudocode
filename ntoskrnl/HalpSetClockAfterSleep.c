/*
 * XREFs of HalpSetClockAfterSleep @ 0x140508AF0
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A93580 (HalpAcpiPostSleep.c)
 *     HalpDpPostReplace @ 0x140A94408 (HalpDpPostReplace.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x1402D1A0C (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall HalpSetClockAfterSleep(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // cl
  char v4; // cl
  __int64 result; // rax

  HalpAcquireCmosSpinLock(a1, a2, a3);
  v3 = HalpRtcRegA;
  __outbyte(0x70u, 0xAu);
  __outbyte(0x71u, v3);
  v4 = HalpRtcRegB & 0xDF;
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v4 | 2);
  __outbyte(0x70u, 0xCu);
  __inbyte(0x71u);
  __outbyte(0x70u, 0xDu);
  __inbyte(0x71u);
  result = (unsigned int)_InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return result;
}
