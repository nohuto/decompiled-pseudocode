BOOLEAN __fastcall KsepDsEventIoCreateDevice(__int64 a1, __int64 a2, int a3, int a4, unsigned __int8 a5, char a6)
{
  REGHANDLE v6; // rbx
  BOOLEAN result; // al
  int v8; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v10; // [rsp+68h] [rbp-29h]
  int v11; // [rsp+70h] [rbp-21h]
  int v12; // [rsp+74h] [rbp-1Dh]
  int *v13; // [rsp+78h] [rbp-19h]
  int v14; // [rsp+80h] [rbp-11h]
  int v15; // [rsp+84h] [rbp-Dh]
  int *v16; // [rsp+88h] [rbp-9h]
  int v17; // [rsp+90h] [rbp-1h]
  int v18; // [rsp+94h] [rbp+3h]
  int *v19; // [rsp+98h] [rbp+7h]
  int v20; // [rsp+A0h] [rbp+Fh]
  int v21; // [rsp+A4h] [rbp+13h]
  char *v22; // [rsp+A8h] [rbp+17h]
  int v23; // [rsp+B0h] [rbp+1Fh]
  int v24; // [rsp+B4h] [rbp+23h]
  __int64 v25; // [rsp+E8h] [rbp+57h] BYREF
  __int64 v26; // [rsp+F0h] [rbp+5Fh] BYREF
  int v27; // [rsp+F8h] [rbp+67h] BYREF
  int v28; // [rsp+100h] [rbp+6Fh] BYREF

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v25 = a1;
  v6 = KseEtwHandle;
  result = a5;
  v8 = a5;
  if ( KseEtwHandle )
  {
    result = EtwEventEnabled(KseEtwHandle, &KseDsEventCreateDevice);
    if ( result )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      UserData.Ptr = (ULONGLONG)&v25;
      v10 = &v26;
      v13 = &v27;
      v16 = &v28;
      v19 = &v8;
      UserData.Size = 8;
      v11 = 8;
      v22 = &a6;
      v14 = 4;
      v17 = 4;
      v20 = 4;
      v23 = 4;
      return EtwWriteEx(v6, &KseDsEventCreateDevice, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return result;
}
