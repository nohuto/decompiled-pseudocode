BOOLEAN EtwTiLogMapExecView(__int64 a1, char a2, ...)
{
  BOOLEAN result; // al
  __int64 v5; // rcx
  _KPROCESS *Process; // rsi
  const EVENT_DESCRIPTOR *v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // r9d
  int v11; // eax
  int v12; // r9d
  unsigned int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  REGHANDLE v18; // rcx
  unsigned __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[18]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va; // [rsp+1B0h] [rbp+B0h]
  __int64 v24; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va1; // [rsp+1B8h] [rbp+B8h]
  __int64 v26; // [rsp+1C0h] [rbp+C0h] BYREF
  va_list va2; // [rsp+1C0h] [rbp+C0h]
  va_list va3; // [rsp+1C8h] [rbp+C8h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  result = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xF00uLL);
  if ( result )
  {
    v5 = 0LL;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process == (_KPROCESS *)a1 )
      v5 = 8LL;
    v7 = *(const EVENT_DESCRIPTOR **)((char *)off_140006CA0 + (a2 != 0 ? 0 : 0x10) + v5);
    result = EtwEventEnabled(EtwThreatIntProvRegHandle, v7);
    if ( result )
    {
      v8 = EtwpTiFillProcessIdentity(UserData, (__int64)Process, &v19);
      v9 = EtwpTiFillThreadIdentity((__int64)&UserData[v8], (__int64)KeGetCurrentThread());
      v11 = EtwpTiFillProcessIdentity(&UserData[v9 + v10].Ptr, a1, &v20);
      v13 = v11 + v12;
      v14 = v13;
      *(&UserData[0].Reserved + 1 * v14) = 0;
      UserData[v14].Ptr = (ULONGLONG)va;
      UserData[v14].Size = 8;
      v15 = v13 + 1;
      *(&UserData[0].Reserved + 1 * v15) = 0;
      UserData[v15].Ptr = (ULONGLONG)va1;
      UserData[v15].Size = 8;
      v16 = v13 + 2;
      v13 += 3;
      v16 *= 2LL;
      *(&UserData[0].Reserved + 2 * v16) = 0;
      *(&UserData[0].Ptr + v16) = (ULONGLONG)va2;
      *(&UserData[0].Size + 2 * v16) = 4;
      v17 = v13;
      *(&UserData[0].Reserved + 1 * v17) = 0;
      UserData[v17].Ptr = (ULONGLONG)va3;
      v18 = EtwThreatIntProvRegHandle;
      UserData[v17].Size = 4;
      return EtwWrite(v18, v7, 0LL, v13 + 1, UserData);
    }
  }
  return result;
}
