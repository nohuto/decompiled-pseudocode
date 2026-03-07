char PpmEventParkNodePreference(__int16 a1, __int64 a2, char a3, ...)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-51h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-41h]
  int v8; // [rsp+60h] [rbp-39h]
  int v9; // [rsp+64h] [rbp-35h]
  char *v10; // [rsp+68h] [rbp-31h]
  int v11; // [rsp+70h] [rbp-29h]
  int v12; // [rsp+74h] [rbp-25h]
  va_list v13; // [rsp+78h] [rbp-21h]
  int v14; // [rsp+80h] [rbp-19h]
  int v15; // [rsp+84h] [rbp-15h]
  va_list v16; // [rsp+88h] [rbp-11h]
  int v17; // [rsp+90h] [rbp-9h]
  int v18; // [rsp+94h] [rbp-5h]
  va_list v19; // [rsp+98h] [rbp-1h]
  int v20; // [rsp+A0h] [rbp+7h]
  int v21; // [rsp+A4h] [rbp+Bh]
  va_list v22; // [rsp+A8h] [rbp+Fh]
  int v23; // [rsp+B0h] [rbp+17h]
  int v24; // [rsp+B4h] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+47h] BYREF
  __int16 v26; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v27; // [rsp+F0h] [rbp+57h] BYREF
  char v28; // [rsp+F8h] [rbp+5Fh] BYREF
  __int64 v29; // [rsp+100h] [rbp+67h] BYREF
  va_list va; // [rsp+100h] [rbp+67h]
  __int64 v31; // [rsp+108h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+108h] [rbp+6Fh]
  __int64 v33; // [rsp+110h] [rbp+77h] BYREF
  va_list va2; // [rsp+110h] [rbp+77h]
  va_list va3; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v29 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v31 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v33 = va_arg(va3, _QWORD);
  v3 = &retaddr;
  v28 = a3;
  v27 = a2;
  v26 = a1;
  if ( PpmEtwRegistered )
  {
    v4 = PpmEtwHandle;
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_PARKING_PREFERENCE);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      UserData.Ptr = (ULONGLONG)&v26;
      v7 = &v27;
      v10 = &v28;
      va_copy(v13, va);
      va_copy(v16, va1);
      va_copy(v19, va2);
      va_copy(v22, va3);
      v8 = 8;
      v14 = 8;
      v17 = 8;
      v20 = 8;
      v23 = 8;
      UserData.Size = 2;
      v11 = 1;
      LOBYTE(v3) = EtwWriteEx(v4, &PPM_ETW_PLATFORM_PARKING_PREFERENCE, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
  return (char)v3;
}
