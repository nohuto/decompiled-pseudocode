char __fastcall KsepDsEventPnpStopDevice(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v5; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 *v8; // [rsp+58h] [rbp+7h]
  int v9; // [rsp+60h] [rbp+Fh]
  int v10; // [rsp+64h] [rbp+13h]
  __int64 *v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+70h] [rbp+1Fh]
  int v13; // [rsp+74h] [rbp+23h]
  int *v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  __int64 v18; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+6Fh] BYREF
  __int64 v20; // [rsp+C8h] [rbp+77h] BYREF
  int v21; // [rsp+D0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v21 = a4;
  v20 = a3;
  v19 = a2;
  v18 = a1;
  v5 = KseEtwHandle;
  if ( KseEtwHandle )
  {
    LOBYTE(v4) = EtwEventEnabled(KseEtwHandle, &KseDsEventStopDevice);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      UserData.Ptr = (ULONGLONG)&v18;
      UserData.Size = 8;
      v8 = &v19;
      v11 = &v20;
      v9 = 8;
      v12 = 8;
      v14 = &v21;
      v15 = 4;
      LOBYTE(v4) = EtwWriteEx(v5, &KseDsEventStopDevice, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
