__int64 WheapCheckForAndReportErrorsFromPreviousSession()
{
  int BootErrorPacket; // eax
  PVOID v1; // rcx
  bool v2; // sf
  __int64 v3; // rax
  __int64 result; // rax
  PVOID P; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+70h] [rbp+18h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF
  int v10; // [rsp+80h] [rbp+28h] BYREF
  PVOID v11; // [rsp+88h] [rbp+30h] BYREF

  v11 = 0LL;
  v10 = 0;
  v8 = 0;
  P = 0LL;
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
    if ( (int)PshedReadErrorRecord(0LL, v3, v7, &v8, &P) < 0 )
      break;
    if ( P )
    {
      if ( *(_DWORD *)P == 1380274243 && *((_DWORD *)P + 5) <= v8 )
      {
        if ( (unsigned __int8)WheapReportPersistedErrorRecord(P) == 1 )
          PshedClearErrorRecord(
            (unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)((char *)P + 108)) >> 8),
            *((_QWORD *)P + 12));
        ExFreePoolWithTag(P, 0x44485350u);
      }
      else
      {
        ExFreePoolWithTag(P, 0x44485350u);
        P = 0LL;
      }
    }
    v3 = v7[0];
  }
  while ( v7[0] != -1LL );
  if ( v11 )
  {
    WheapReportBootError();
    ExFreePoolWithTag(v11, 0x44485350u);
    v11 = 0LL;
  }
  v6 = 0LL;
  v9 = 8;
  result = HalGetEnvironmentVariableEx(
             L"UncorrectedBadMemoryPage",
             (int)&WheapHardwareErrorGuid,
             (__int64)&v6,
             &v9,
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
