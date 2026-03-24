/*
 * XREFs of NtUserInvalidateRect @ 0x1C0072000
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C00722B4 (xxxRedrawWindow.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserInvalidateRect(__int64 a1, __int128 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcess; // rax
  ULONG64 v8; // rcx
  int v9; // edi
  __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v17; // r15
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rcx
  int v25; // ebx
  bool v26; // cf
  int v27; // eax
  struct _KTHREAD *v28; // r15
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 v36; // rax
  int ProcessSessionId; // ebx
  __int64 v38; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v40; // rax
  int v41; // ebx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int128 v48; // [rsp+38h] [rbp-60h] BYREF
  __int64 v49; // [rsp+48h] [rbp-50h]
  __int128 v50; // [rsp+58h] [rbp-40h] BYREF

  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6);
  v9 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    gbValidateHandleForIL = 0;
  if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    if ( !v10 )
      goto LABEL_31;
  }
  else
  {
    v10 = 0LL;
  }
  if ( a2 )
  {
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v50 = *a2;
    if ( v10 )
    {
      CurrentThread = KeGetCurrentThread();
      v12 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(MmUserProbeAddress)
        || (v36 = PsGetCurrentProcess(v14, v13, v15),
            ProcessSessionId = PsGetProcessSessionIdEx(v36),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v38),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v12 = *ThreadWin32Thread;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v12 + 480) + 224LL) & 1) == 0 )
      {
        v17 = KeGetCurrentThread();
        v18 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v8)
          || (v40 = PsGetCurrentProcess(v20, v19, v21),
              v41 = PsGetProcessSessionIdEx(v40),
              v43 = PsGetCurrentThreadProcess(v42),
              v41 == (unsigned int)PsGetProcessSessionIdEx(v43)) )
        {
          v22 = (__int64 *)PsGetThreadWin32Thread(v17);
          if ( v22 )
            v18 = *v22;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v18 + 480) + 224LL) & 0x20) == 0 )
        {
          v23 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL);
          if ( (((unsigned __int16)(v23 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v8) >> 8)) & 0x1FF) != 0 )
            goto LABEL_38;
          v24 = *(unsigned int *)(*(_QWORD *)(v10 + 40) + 288LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL) & 0xF) != 2 || (v25 = 1, (v24 & 0x20000000) == 0) )
            v25 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v24) & 0xF) != 2
            || (v26 = (W32GetCurrentThreadDpiAwarenessContext(v8) & 0x20000000) != 0, v27 = 1, !v26) )
          {
            v27 = 0;
          }
          if ( v25 != v27 )
LABEL_38:
            TransformRectBetweenCoordinateSpaces(&v50, &v50, 0LL, v10);
        }
      }
    }
  }
  v28 = KeGetCurrentThread();
  v29 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v8)
    || (v44 = PsGetCurrentProcess(v31, v30, v32),
        v45 = PsGetProcessSessionIdEx(v44),
        v47 = PsGetCurrentThreadProcess(v46),
        v45 == (unsigned int)PsGetProcessSessionIdEx(v47)) )
  {
    v33 = (__int64 *)PsGetThreadWin32Thread(v28);
    if ( v33 )
      v29 = *v33;
  }
  *(_QWORD *)&v48 = *(_QWORD *)(v29 + 416);
  *(_QWORD *)(v29 + 416) = &v48;
  *((_QWORD *)&v48 + 1) = v10;
  if ( v10 )
    HMLockObject(v10);
  v9 = xxxRedrawWindow((struct tagWND *)v10);
  ThreadUnlock1(v34);
LABEL_31:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
