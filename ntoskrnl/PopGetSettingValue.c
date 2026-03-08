/*
 * XREFs of PopGetSettingValue @ 0x14073CFC0
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 *     PopFindPowerSettingConfiguration @ 0x14068D434 (PopFindPowerSettingConfiguration.c)
 *     PopMarshalSettingValues @ 0x14073D054 (PopMarshalSettingValues.c)
 */

__int64 __fastcall PopGetSettingValue(_QWORD *a1, __int64 a2, int a3)
{
  int ProcessSessionId; // eax
  __int64 *PowerSettingConfiguration; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  ExAcquireFastMutex(&PopSettingLock);
  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, ProcessSessionId);
  if ( PowerSettingConfiguration )
  {
    v9 = PopMarshalSettingValues(PowerSettingConfiguration, a2 + 4, (unsigned int)(a3 - 4), a2);
    ExReleaseFastMutex(&PopSettingLock);
    return v9;
  }
  else
  {
    ExReleaseFastMutex(&PopSettingLock);
    return 3221225485LL;
  }
}
