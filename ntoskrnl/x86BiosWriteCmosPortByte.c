/*
 * XREFs of x86BiosWriteCmosPortByte @ 0x140506350
 * Callers:
 *     x86BiosWriteCmosPort @ 0x1405062D8 (x86BiosWriteCmosPort.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x1402D1A0C (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall x86BiosWriteCmosPortByte(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // bl
  __int64 result; // rax

  v3 = a2;
  if ( (a1 & 1) != 0 )
  {
    HalpAcquireCmosSpinLock(a1, a2, a3);
    __outbyte(0x70u, XmCmosAddress);
    __outbyte(0x71u, v3);
    result = (unsigned int)_InterlockedExchange(&HalpSystemHardwareLock, -1);
    if ( HalpSystemHardwareLockInterruptsEnabled )
      _enable();
  }
  else
  {
    XmCmosAddress = a2;
  }
  return result;
}
