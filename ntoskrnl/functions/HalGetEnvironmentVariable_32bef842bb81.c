__int64 __fastcall HalGetEnvironmentVariable(const char *a1, unsigned __int16 a2, char *a3)
{
  rsize_t v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int8 v9; // al
  const char *v10; // r8

  v4 = a2;
  if ( HalFirmwareTypeEfi )
    return 7LL;
  if ( stricmp(a1, "LastKnownGood") )
    return 14LL;
  HalpAcquireCmosSpinLock(v7, v6, v8);
  __outbyte(0x70u, 0xBu);
  v9 = __inbyte(0x71u);
  _InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  v10 = "TRUE";
  if ( (v9 & 1) == 0 )
    v10 = "FALSE";
  strncpy_s(a3, v4, v10, v4 - 1);
  return 0LL;
}
