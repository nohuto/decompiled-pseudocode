/*
 * XREFs of HalGetEnvironmentVariable @ 0x140502810
 * Callers:
 *     NtQuerySystemEnvironmentValue @ 0x1409FC7C0 (NtQuerySystemEnvironmentValue.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x1402D1A0C (HalpAcquireCmosSpinLock.c)
 *     _stricmp @ 0x1403D3BD0 (_stricmp.c)
 *     strncpy_s @ 0x1403D9EA0 (strncpy_s.c)
 */

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
