/*
 * XREFs of WheapCheckForAndReportErrorsFromPreviousSession @ 0x1403DAA2C
 * Callers:
 *     WheaInitialize @ 0x140AFF910 (WheaInitialize.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140508800 (HalSetEnvironmentVariableEx.c)
 *     WheapReportBootError @ 0x1406433D0 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x140643498 (WheapReportPersistedErrorRecord.c)
 *     WheaPersistBadPageToBcd @ 0x140644D30 (WheaPersistBadPageToBcd.c)
 *     WheaPersistBadPageToRegistry @ 0x140644EEC (WheaPersistBadPageToRegistry.c)
 */

__int64 WheapCheckForAndReportErrorsFromPreviousSession()
{
  int BootErrorPacket; // eax
  ULONG_PTR v1; // rcx
  bool v2; // sf
  __int64 v3; // rax
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF
  int v10; // [rsp+80h] [rbp+28h] BYREF
  ULONG_PTR v11; // [rsp+88h] [rbp+30h] BYREF

  v11 = 0LL;
  v10 = 0;
  v8 = 0;
  BugCheckParameter3 = 0LL;
  BootErrorPacket = PshedGetBootErrorPacket(&v10, &v11);
  v1 = v11;
  v2 = BootErrorPacket < 0;
  v3 = 0LL;
  v7[0] = 0LL;
  if ( v2 )
    v1 = 0LL;
  v11 = v1;
  do
  {
    if ( (int)PshedReadErrorRecord(0LL, v3, v7, &v8, &BugCheckParameter3) < 0 )
      break;
    if ( BugCheckParameter3 )
    {
      if ( *(_DWORD *)BugCheckParameter3 == 1380274243 && *(_DWORD *)(BugCheckParameter3 + 20) <= v8 )
      {
        if ( (unsigned __int8)WheapReportPersistedErrorRecord((void *)BugCheckParameter3) == 1 )
          PshedClearErrorRecord(
            (unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)(BugCheckParameter3 + 108)) >> 8),
            *(_QWORD *)(BugCheckParameter3 + 96));
        ExFreeHeapPool(BugCheckParameter3);
      }
      else
      {
        ExFreeHeapPool(BugCheckParameter3);
        BugCheckParameter3 = 0LL;
      }
    }
    v3 = v7[0];
  }
  while ( v7[0] != -1LL );
  if ( v11 )
  {
    WheapReportBootError();
    ExFreeHeapPool(v11);
    v11 = 0LL;
  }
  v6 = 0LL;
  v9 = 8;
  result = HalGetEnvironmentVariableEx(
             (unsigned int)L"UncorrectedBadMemoryPage",
             (unsigned int)&WheapHardwareErrorGuid,
             (unsigned int)&v6,
             (unsigned int)&v9,
             0LL);
  if ( v9 && (int)result >= 0 )
  {
    if ( WheapPolicyBadPageListLocation == 1 )
    {
      result = WheaPersistBadPageToBcd(v6);
    }
    else
    {
      if ( WheapPolicyBadPageListLocation != 2 )
        return HalSetEnvironmentVariableEx(
                 (unsigned int)L"UncorrectedBadMemoryPage",
                 (unsigned int)&WheapHardwareErrorGuid,
                 0,
                 0,
                 7);
      result = WheaPersistBadPageToRegistry(v6);
    }
    if ( (int)result < 0 )
      return result;
    return HalSetEnvironmentVariableEx(
             (unsigned int)L"UncorrectedBadMemoryPage",
             (unsigned int)&WheapHardwareErrorGuid,
             0,
             0,
             7);
  }
  return result;
}
