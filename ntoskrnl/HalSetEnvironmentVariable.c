/*
 * XREFs of HalSetEnvironmentVariable @ 0x1405029B0
 * Callers:
 *     NtSetSystemEnvironmentValue @ 0x1409FD130 (NtSetSystemEnvironmentValue.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x1402D1A0C (HalpAcquireCmosSpinLock.c)
 *     _stricmp @ 0x1403D3BD0 (_stricmp.c)
 */

__int64 __fastcall HalSetEnvironmentVariable(const char *a1, const char *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int8 v7; // al
  unsigned __int8 v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int8 v12; // al

  if ( HalFirmwareTypeEfi )
    return 7LL;
  if ( stricmp(a1, "LastKnownGood") )
    return 16LL;
  if ( stricmp(a2, "TRUE") )
  {
    if ( !stricmp(a2, "FALSE") )
    {
      HalpAcquireCmosSpinLock(v10, v9, v11);
      __outbyte(0x70u, 0xBu);
      v12 = __inbyte(0x71u);
      v8 = v12 & 0xFE;
      goto LABEL_8;
    }
    return 16LL;
  }
  HalpAcquireCmosSpinLock(v5, v4, v6);
  __outbyte(0x70u, 0xBu);
  v7 = __inbyte(0x71u);
  v8 = v7 | 1;
LABEL_8:
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v8);
  _InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return 0LL;
}
