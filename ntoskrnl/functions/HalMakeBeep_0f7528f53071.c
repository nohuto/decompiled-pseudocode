char __fastcall HalMakeBeep(unsigned int a1)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // di
  unsigned __int8 v7; // al
  unsigned __int8 v8; // bl
  unsigned __int8 v9; // al
  unsigned __int8 v10; // bl

  result = HalpMiscIsLegacyPcType();
  if ( result )
  {
    v6 = 1;
    HalpAcquireCmosSpinLock(v4, v3, v5);
    v7 = __inbyte(0x61u);
    v8 = v7;
    HalpIoDelay();
    __outbyte(0x61u, v8 & 0xFC);
    HalpIoDelay();
    if ( a1 )
    {
      if ( 0x1234CF / a1 <= 0xFFFF )
      {
        __outbyte(0x43u, 0xB6u);
        HalpIoDelay();
        WRITE_PORT_USHORT_PAIR(66LL, 66LL, (unsigned __int16)(0x1234CF / a1));
        HalpIoDelay();
        v9 = __inbyte(0x61u);
        v10 = v9;
        HalpIoDelay();
        __outbyte(0x61u, v10 | 3);
        HalpIoDelay();
      }
      else
      {
        v6 = 0;
      }
    }
    _InterlockedExchange(&HalpSystemHardwareLock, -1);
    if ( HalpSystemHardwareLockInterruptsEnabled )
      _enable();
    return v6;
  }
  return result;
}
