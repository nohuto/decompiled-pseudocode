BOOLEAN __fastcall EtwTraceJobServerSiloStateChange(__int64 a1, int a2)
{
  REGHANDLE v2; // rbx
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  __int64 v6; // [rsp+40h] [rbp-30h]
  __int64 v7; // [rsp+48h] [rbp-28h]
  int *v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+88h] [rbp+18h] BYREF

  v10 = a2;
  v2 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &JobServerSiloStateChange);
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 16LL;
    UserData.Ptr = a1 + 1456;
    v7 = 4LL;
    v6 = a1 + 1452;
    v9 = 4LL;
    v8 = &v10;
    return EtwWrite(v2, &JobServerSiloStateChange, 0LL, 3u, &UserData);
  }
  return result;
}
