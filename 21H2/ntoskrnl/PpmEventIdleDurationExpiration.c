/*
 * XREFs of PpmEventIdleDurationExpiration @ 0x140579BF4
 * Callers:
 *     PoExecuteIdleCheck @ 0x1402CC750 (PoExecuteIdleCheck.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall PpmEventIdleDurationExpiration(unsigned __int16 *a1)
{
  unsigned __int16 v2; // r10
  unsigned __int16 v3; // cx
  unsigned __int16 v4; // dx
  __int64 v5; // r8
  __int64 v6; // r9
  ULONG UserDataCount; // r8d
  _OWORD *v8; // r9
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int16 v12; // [rsp+40h] [rbp-3F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[41]; // [rsp+50h] [rbp-3E8h] BYREF
  _QWORD v14[40]; // [rsp+2E0h] [rbp-158h] BYREF

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
      if ( v4 >= v2 )
        v6 = 0LL;
      else
        v6 = *(_QWORD *)&a1[4 * v4 + 4];
      v14[2 * v3] = v6;
      if ( v6 )
        ++v3;
      ++v4;
    }
    while ( v4 < 0x14u );
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
