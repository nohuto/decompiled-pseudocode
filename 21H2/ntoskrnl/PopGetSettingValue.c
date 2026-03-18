/*
 * XREFs of PopGetSettingValue @ 0x1406C0510
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PopMarshalSettingValues @ 0x1406C05A4 (PopMarshalSettingValues.c)
 *     PopFindPowerSettingConfiguration @ 0x140751880 (PopFindPowerSettingConfiguration.c)
 */

__int64 __fastcall PopGetSettingValue(__int64 a1, __int64 a2, int a3)
{
  unsigned int ProcessSessionId; // eax
  __int64 PowerSettingConfiguration; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  ExAcquireFastMutex(&PopSettingLock);
  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, ProcessSessionId);
  if ( PowerSettingConfiguration )
  {
    v9 = PopMarshalSettingValues(PowerSettingConfiguration, a2 + 4, (unsigned int)(a3 - 4), a2);
    KeReleaseGuardedMutex(&PopSettingLock);
    return v9;
  }
  else
  {
    KeReleaseGuardedMutex(&PopSettingLock);
    return 3221225485LL;
  }
}
