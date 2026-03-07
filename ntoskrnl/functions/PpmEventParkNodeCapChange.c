char __fastcall PpmEventParkNodeCapChange(__int16 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v5; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-9h] BYREF
  __int64 *v8; // [rsp+48h] [rbp+7h]
  int v9; // [rsp+50h] [rbp+Fh]
  int v10; // [rsp+54h] [rbp+13h]
  char *v11; // [rsp+58h] [rbp+17h]
  int v12; // [rsp+60h] [rbp+1Fh]
  int v13; // [rsp+64h] [rbp+23h]
  char *v14; // [rsp+68h] [rbp+27h]
  int v15; // [rsp+70h] [rbp+2Fh]
  int v16; // [rsp+74h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  __int16 v18; // [rsp+A8h] [rbp+67h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+6Fh] BYREF
  char v20; // [rsp+B8h] [rbp+77h] BYREF
  char v21; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v21 = a4;
  v20 = a3;
  v19 = a2;
  v18 = a1;
  if ( PpmEtwRegistered )
  {
    v5 = PpmEtwHandle;
    LOBYTE(v4) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_CAP_CHANGE);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      UserData.Ptr = (ULONGLONG)&v18;
      v8 = &v19;
      v11 = &v20;
      v12 = 1;
      v14 = &v21;
      v15 = 1;
      UserData.Size = 2;
      v9 = 8;
      LOBYTE(v4) = EtwWrite(v5, &PPM_ETW_PARK_NODE_CAP_CHANGE, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
