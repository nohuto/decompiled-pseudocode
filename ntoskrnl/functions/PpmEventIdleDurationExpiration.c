void __fastcall PpmEventIdleDurationExpiration(unsigned __int16 *a1)
{
  unsigned __int16 v2; // r10
  unsigned __int16 v3; // dx
  unsigned __int16 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  ULONG UserDataCount; // r8d
  _OWORD *v8; // r9
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int16 v12; // [rsp+40h] [rbp-638h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[65]; // [rsp+50h] [rbp-628h] BYREF
  _QWORD v14[64]; // [rsp+460h] [rbp-218h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_IDLE_DURATION_EXPIRATION) )
  {
    v2 = *a1;
    v3 = 0;
    v4 = 0;
    v12 = 0;
    do
    {
      v5 = 2LL * v3;
      *(_OWORD *)&v14[v5] = 0LL;
      LOWORD(v14[v5 + 1]) = v4;
      if ( v4 < v2 )
      {
        v6 = *(_QWORD *)&a1[4 * v4 + 4];
        v14[2 * v3] = v6;
        if ( v6 )
          ++v3;
      }
      ++v4;
    }
    while ( v4 < 0x20u );
    v12 = v3;
    UserData[0].Ptr = (ULONGLONG)&v12;
    *(_QWORD *)&UserData[0].Size = 2LL;
    UserDataCount = 1;
    if ( v3 )
    {
      v8 = v14;
      v9 = v3;
      do
      {
        v10 = UserDataCount;
        UserData[v10].Ptr = (ULONGLONG)v8 + 8;
        *(_QWORD *)&UserData[v10].Size = 2LL;
        v11 = UserDataCount + 1;
        UserDataCount += 2;
        UserData[v11].Ptr = (ULONGLONG)v8++;
        *(_QWORD *)&UserData[v11].Size = 8LL;
        --v9;
      }
      while ( v9 );
    }
    EtwWriteEx(PpmEtwHandle, &PPM_ETW_IDLE_DURATION_EXPIRATION, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  }
}
