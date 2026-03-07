__int64 __fastcall NtUserRegisterRawInputDevices(void *Src, unsigned int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r13
  SIZE_T v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int *v11; // rdi
  unsigned int v12; // ebx
  unsigned int *v13; // rsi
  __int64 v14; // rcx
  __int128 v16; // [rsp+78h] [rbp-40h] BYREF
  __int64 v17; // [rsp+88h] [rbp-30h]
  char v18; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+20h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
  PsGetCurrentProcessWin32Process(v6);
  v19 = gptiCurrent;
  if ( Src && a2 && a3 == 16 && (v7 = a2, v8 = 16LL * a2, ProbeForRead(Src, v8, 8u), v8 <= 0xFFFFFFFF) )
  {
    v9 = v8;
    v10 = Win32AllocPoolWithQuotaZInit((unsigned int)v8, 1769108309LL);
    v11 = (unsigned int *)v10;
    if ( !v10 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v10, &v16, (__int64)Win32FreePool);
    if ( (unsigned int)v8 >= v8 )
      v9 = 16 * a2;
    memmove(v11, Src, v9);
    v12 = RegisterRawInputDevices(v11, a2, 0LL);
    v13 = v11 + 1;
    do
    {
      EtwTraceAuditApiRegisterRawInputDevices(
        v12,
        *((unsigned __int16 *)v13 - 2),
        *((unsigned __int16 *)v13 - 1),
        *v13,
        *(_QWORD *)(v13 + 1),
        v19,
        *(_QWORD *)(*(_QWORD *)v19 + 1312LL),
        *(_QWORD *)(*(_QWORD *)v19 + 1152LL),
        *(_DWORD *)(*(_QWORD *)v19 + 1232LL));
      v13 += 4;
      --v7;
    }
    while ( v7 );
    if ( v11 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v16);
  }
  else
  {
    v12 = 0;
    UserSetLastError(87);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18);
  UserSessionSwitchLeaveCrit(v14);
  return (int)v12;
}
