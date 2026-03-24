/*
 * XREFs of NtUserGetMenuBarInfo @ 0x1C00FBBD0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     xxxGetMenuBarInfo @ 0x1C008AAD8 (xxxGetMenuBarInfo.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, int a2, int a3, ULONG64 a4)
{
  int v8; // r15d
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  _BYTE *v11; // rdx
  int MenuBarInfo; // edi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rcx
  struct _KTHREAD *v21; // r12
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // rax
  unsigned int v27; // ebx
  __int64 v28; // rcx
  int v29; // ebx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v33; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v35; // rax
  int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int128 v39; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-90h]
  __int128 v41; // [rsp+60h] [rbp-78h] BYREF
  __int128 v42; // [rsp+70h] [rbp-68h]
  __int128 v43; // [rsp+80h] [rbp-58h]

  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    *(_QWORD *)&v39 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v39;
    *((_QWORD *)&v39 + 1) = v10;
    HMLockObject(v10);
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (_BYTE *)a4;
    if ( a4 >= MmUserProbeAddress )
      v11 = (_BYTE *)MmUserProbeAddress;
    *v11 = *v11;
    v11[47] = v11[47];
    LODWORD(v41) = *(_DWORD *)a4;
    MenuBarInfo = xxxGetMenuBarInfo(v10, a2, a3, (__int64)&v41);
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v15)
      || (CurrentProcess = PsGetCurrentProcess(v17, v16, v18),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v33),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v14 + 480) + 224LL) & 1) == 0 )
    {
      v21 = KeGetCurrentThread();
      v22 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v20)
        || (v35 = PsGetCurrentProcess(v24, v23, v25),
            v36 = PsGetProcessSessionIdEx(v35),
            v38 = PsGetCurrentThreadProcess(v37),
            v36 == (unsigned int)PsGetProcessSessionIdEx(v38)) )
      {
        v26 = (__int64 *)PsGetThreadWin32Thread(v21);
        if ( v26 )
          v22 = *v26;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v22 + 480) + 224LL) & 0x20) == 0 )
      {
        v27 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL);
        if ( (((unsigned __int16)(v27 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v20) >> 8)) & 0x1FF) != 0 )
          goto LABEL_24;
        v28 = *(unsigned int *)(*(_QWORD *)(v10 + 40) + 288LL);
        v29 = (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL) & 0xF) == 2 && (v28 & 0x20000000) != 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v28) & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext(v20) & 0x20000000) == 0 )
        {
          v8 = 0;
        }
        if ( v29 != v8 )
LABEL_24:
          TransformRectBetweenCoordinateSpaces((char *)&v41 + 4, (char *)&v41 + 4, 0LL, v10);
      }
    }
    if ( MenuBarInfo )
    {
      DWORD1(v42) = 0;
      HIDWORD(v43) = 0;
      *(_OWORD *)a4 = v41;
      *(_OWORD *)(a4 + 16) = v42;
      *(_OWORD *)(a4 + 32) = v43;
    }
    ThreadUnlock1(v20);
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v9);
  return MenuBarInfo;
}
