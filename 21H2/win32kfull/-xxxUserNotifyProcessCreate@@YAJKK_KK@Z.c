/*
 * XREFs of ?xxxUserNotifyProcessCreate@@YAJKK_KK@Z @ 0x1C007B748
 * Callers:
 *     NtUserNotifyProcessCreate @ 0x1C0079FF0 (NtUserNotifyProcessCreate.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?PushProcessLaunchForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0077A00 (-PushProcessLaunchForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z.c)
 *     LockProcessByClientId @ 0x1C007AC20 (LockProcessByClientId.c)
 *     LockThreadByClientId @ 0x1C007B82C (LockThreadByClientId.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUserNotifyProcessCreate(int a1, int a2, __int64 a3, int a4)
{
  void *v6; // rdi
  __int64 v7; // r14
  __int64 result; // rax
  __int64 ProcessWin32Process; // rax
  __int64 i; // rbx
  __int64 v11; // rax
  struct _KEVENT *v12; // rcx
  PVOID v13; // [rsp+20h] [rbp-20h] BYREF
  PVOID Object[3]; // [rsp+28h] [rbp-18h] BYREF

  Object[0] = 0LL;
  v13 = 0LL;
  v6 = (void *)a1;
  v7 = a2;
  Object[1] = (PVOID)4;
  ForegroundLaunch::PushProcessLaunchForegroundPolicy(a1, 4LL);
  if ( (a4 & 0xB) != 0 )
  {
    result = LockProcessByClientId(v6, (PEPROCESS *)Object);
    if ( (int)result >= 0 )
    {
      xxxSetProcessInitState(Object[0], ((unsigned int)((a4 & 1) == 0) + 1) << 6);
      if ( (a4 & 8) != 0 )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Object[0]);
        if ( ProcessWin32Process )
          *(_DWORD *)(ProcessWin32Process + 12) |= 8u;
      }
      ObfDereferenceObject(Object[0]);
      result = LockThreadByClientId(v7, &v13);
      if ( (int)result >= 0 )
      {
        W32GetThreadWin32Thread((__int64)v13);
LABEL_6:
        ObfDereferenceObject(v13);
        return 0LL;
      }
    }
  }
  else
  {
    if ( a4 != 4 )
      return 0LL;
    for ( i = gpwtiFirst; i; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 8) == (_DWORD)v6 )
      {
        v12 = *(struct _KEVENT **)(i + 32);
        if ( v12 == (struct _KEVENT *)-1LL )
        {
          *(_QWORD *)(i + 32) = 0LL;
        }
        else if ( v12 )
        {
          KeClearEvent(v12);
        }
        goto LABEL_23;
      }
    }
    v11 = Win32AllocPoolWithQuotaZInit(48LL, 1953985365LL);
    i = v11;
    if ( !v11 )
      return 3221225495LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_DWORD *)(v11 + 8) = (_DWORD)v6;
    *(_DWORD *)(v11 + 40) = 0;
    *(_QWORD *)v11 = gpwtiFirst;
    gpwtiFirst = v11;
LABEL_23:
    *(_QWORD *)(i + 16) = a3;
    result = LockThreadByClientId(v7, &v13);
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(i + 24) = (unsigned int)PsGetThreadProcessId((PETHREAD)v13);
      goto LABEL_6;
    }
  }
  return result;
}
