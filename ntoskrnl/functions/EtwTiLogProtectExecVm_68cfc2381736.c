void EtwTiLogProtectExecVm(_KPROCESS *a1, char a2, ...)
{
  int v4; // esi
  __int64 v5; // rdx
  _KPROCESS *Process; // r12
  _KPROCESS *v7; // r13
  const EVENT_DESCRIPTOR *v8; // r15
  bool v9; // zf
  REGHANDLE v10; // rbx
  REGHANDLE v11; // rcx
  ULONGLONG v12; // r8
  BOOLEAN v13; // di
  int v14; // eax
  int v15; // eax
  int v16; // r11d
  int v17; // eax
  int v18; // r11d
  int v19; // eax
  int v20; // r11d
  __int64 v21; // rax
  unsigned int v22; // r11d
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // r11d
  int v27; // eax
  int v28; // r11d
  PVOID v29; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v30[56]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h]
  PVOID v32; // [rsp+80h] [rbp-88h]
  unsigned __int64 v33; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v34; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[31]; // [rsp+A8h] [rbp-60h] BYREF
  void *v37; // [rsp+2F8h] [rbp+1F0h] BYREF
  va_list va; // [rsp+2F8h] [rbp+1F0h]
  __int64 v39; // [rsp+300h] [rbp+1F8h] BYREF
  va_list va1; // [rsp+300h] [rbp+1F8h]
  __int64 v41; // [rsp+308h] [rbp+200h] BYREF
  va_list va2; // [rsp+308h] [rbp+200h]
  va_list va3; // [rsp+310h] [rbp+208h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v37 = va_arg(va1, void *);
  va_copy(va2, va1);
  v39 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v41 = va_arg(va3, _QWORD);
  v31 = 0LL;
  LODWORD(v32) = 0;
  v4 = 0;
  memset(&v30[8], 0, 48);
  if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xF0uLL) )
  {
    v5 = 0LL;
    Process = KeGetCurrentThread()->ApcState.Process;
    v7 = KeGetCurrentThread()->Process;
    if ( Process == a1 )
      v5 = 8LL;
    v8 = *(const EVENT_DESCRIPTOR **)((char *)&off_14000AFF8 + (a2 == 0 ? 0x10 : 0) + v5);
    if ( Process == a1 )
    {
      v9 = a2 == 0;
      v12 = 0x800000000LL;
      v10 = EtwThreatIntProvRegHandle;
      v11 = EtwThreatIntProvRegHandle;
      if ( !v9 )
        v12 = 0x400000000LL;
    }
    else
    {
      v9 = a2 == 0;
      v10 = EtwThreatIntProvRegHandle;
      v11 = EtwThreatIntProvRegHandle;
      if ( v9 )
        v12 = 0x2000000000LL;
      else
        v12 = 0x1000000000LL;
    }
    v13 = EtwProviderEnabled(v11, 0, v12);
    if ( EtwEventEnabled(v10, v8) )
    {
      if ( v13 )
      {
        v29 = v37;
        v4 = EtwpTiQueryVad((__int64)&v30[8], a1, &v29, 1u, 1);
      }
      v14 = EtwpTiFillProcessIdentity(UserData, (__int64)Process, &v33);
      v15 = EtwpTiFillThreadIdentity((__int64)&UserData[v14], (__int64)KeGetCurrentThread());
      v17 = EtwpTiFillProcessIdentity(&UserData[v15 + v16].Ptr, (__int64)a1, &v34);
      v19 = EtwpTiFillProcessIdentity(&UserData[v17 + v18].Ptr, (__int64)v7, &v35);
      v21 = (unsigned int)(v19 + v20);
      v22 = v21 + 1;
      v21 *= 2LL;
      *(&UserData[0].Ptr + v21) = (ULONGLONG)va;
      *((_QWORD *)&UserData[0].Size + v21) = 8LL;
      v23 = v22;
      UserData[v23].Ptr = (ULONGLONG)va1;
      *(_QWORD *)&UserData[v23].Size = 8LL;
      v24 = v22 + 1;
      UserData[v24].Ptr = (ULONGLONG)va2;
      *(_QWORD *)&UserData[v24].Size = 4LL;
      v25 = v22 + 2;
      v26 = v22 + 3;
      v25 *= 2LL;
      *(&UserData[0].Ptr + v25) = (ULONGLONG)va3;
      *((_QWORD *)&UserData[0].Size + v25) = 4LL;
      if ( v13 && v4 )
        v27 = EtwpTiFillVad((__int64)&UserData[v26], (__int64)&v30[8]);
      else
        v27 = EtwpTiFillZeroVad(&UserData[v26].Ptr);
      EtwWrite(EtwThreatIntProvRegHandle, v8, 0LL, v27 + v28, UserData);
      if ( v4 )
      {
        if ( v32 )
          ExFreePoolWithTag(v32, 0);
      }
    }
  }
}
