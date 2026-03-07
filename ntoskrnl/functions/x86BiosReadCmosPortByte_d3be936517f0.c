char __fastcall x86BiosReadCmosPortByte(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  unsigned __int8 v4; // dl

  if ( (a1 & 1) == 0 )
    return XmCmosAddress;
  HalpAcquireCmosSpinLock(a1, a2, a3);
  __outbyte(0x70u, XmCmosAddress);
  v3 = __inbyte(0x71u);
  v4 = v3;
  _InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return v4;
}
