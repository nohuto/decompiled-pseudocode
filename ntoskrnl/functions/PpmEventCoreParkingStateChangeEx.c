char __fastcall PpmEventCoreParkingStateChangeEx(__int64 a1, char a2)
{
  _UNKNOWN **v2; // rax
  REGHANDLE v5; // rbx
  __int16 v7; // [rsp+48h] [rbp-9h] BYREF
  BOOL v8; // [rsp+4Ch] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  __int16 *v10; // [rsp+68h] [rbp+17h]
  int v11; // [rsp+70h] [rbp+1Fh]
  int v12; // [rsp+74h] [rbp+23h]
  __int64 v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  BOOL *v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  v2 = &retaddr;
  if ( PpmEtwRegistered )
  {
    v5 = PpmEtwHandle;
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_CORE);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v7 = *(unsigned __int8 *)(a1 + 208);
      v10 = &v7;
      v13 = a1 + 209;
      v17 = 4;
      UserData.Size = 8;
      v11 = 2;
      v18 = 0;
      v8 = a2 != 0;
      v14 = 1;
      v16 = &v8;
      LOBYTE(v2) = EtwWriteEx(v5, &PPM_ETW_PARK_CORE, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v2;
}
