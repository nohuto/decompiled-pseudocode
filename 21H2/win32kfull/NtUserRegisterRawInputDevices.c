/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C0107D50
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     _RegisterRawInputDevices @ 0x1C0108350 (_RegisterRawInputDevices.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(void *Src, unsigned int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r13
  SIZE_T v10; // r14
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int *v13; // rdi
  unsigned int v14; // ebx
  unsigned int *v15; // rsi
  __int64 v16; // rcx
  _BYTE v18[8]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v19; // [rsp+78h] [rbp-70h] BYREF
  __int64 v20; // [rsp+88h] [rbp-60h]
  SIZE_T v21; // [rsp+90h] [rbp-58h]
  __int128 v22; // [rsp+A0h] [rbp-48h]
  __int64 v23; // [rsp+B0h] [rbp-38h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  PsGetCurrentProcessWin32Process(v6);
  if ( Src && a2 && a3 == 16 && (v9 = a2, v10 = 16LL * a2, ProbeForRead(Src, v10, 8u), v21 = v10, v10 <= 0xFFFFFFFF) )
  {
    v11 = v10;
    v12 = Win32AllocPoolWithQuota((unsigned int)v10, 1769108309LL);
    v13 = (unsigned int *)v12;
    if ( !v12 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v12, &v19, (__int64)Win32FreePool);
    if ( (unsigned int)v10 >= v10 )
      v11 = 16 * a2;
    memmove(v13, Src, v11);
    v22 = gObjDummyLock;
    v23 = *((_QWORD *)&gObjDummyLock + 2);
    v14 = RegisterRawInputDevices(v13, a2, 0LL);
    v15 = v13 + 1;
    do
    {
      EtwTraceAuditApiRegisterRawInputDevices(
        v14,
        *((unsigned __int16 *)v15 - 2),
        *((unsigned __int16 *)v15 - 1),
        *v15,
        *(_QWORD *)(v15 + 1),
        gptiCurrent,
        *(_QWORD *)(*gptiCurrent + 1232LL),
        *(_QWORD *)(*gptiCurrent + 1072LL),
        *(_DWORD *)(*gptiCurrent + 1152LL));
      v15 += 4;
      --v9;
    }
    while ( v9 );
    if ( v13 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v19);
  }
  else
  {
    v14 = 0;
    UserSetLastError(87LL, v7, v8);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  UserSessionSwitchLeaveCrit(v16);
  return (int)v14;
}
