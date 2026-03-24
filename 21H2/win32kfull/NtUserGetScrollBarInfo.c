/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1C0060C30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C005D0A0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     xxxGetScrollBarInfo @ 0x1C0062A90 (xxxGetScrollBarInfo.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, __int64 a2, ULONG64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  int ScrollBarInfo; // r15d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rcx
  struct _KTHREAD *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 *v24; // rax
  int v25; // esi
  unsigned int v26; // edi
  struct _KTHREAD *v27; // r13
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // rax
  __int64 v33; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // rcx
  int v36; // r14d
  struct _KTHREAD *v37; // r13
  __int64 v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rax
  __int64 v43; // rax
  int v44; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v48; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v50; // rax
  int v51; // ebx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // ebx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // ebx
  __int64 v60; // rcx
  __int64 v61; // rax
  unsigned int v62; // [rsp+20h] [rbp-C8h]
  __int64 v63; // [rsp+38h] [rbp-B0h]
  __int128 v64; // [rsp+50h] [rbp-98h] BYREF
  __int64 v65; // [rsp+60h] [rbp-88h]
  __int128 v66; // [rsp+78h] [rbp-70h] BYREF
  __int128 v67; // [rsp+88h] [rbp-60h]
  __int128 v68; // [rsp+98h] [rbp-50h]
  __int64 v69; // [rsp+A8h] [rbp-40h]
  int v70; // [rsp+B0h] [rbp-38h]

  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0;
  v64 = 0LL;
  v65 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v63 = v6;
  if ( v6 )
  {
    *(_QWORD *)&v64 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v64;
    *((_QWORD *)&v64 + 1) = v6;
    HMLockObject(v6);
    if ( PsGetCurrentProcessWow64Process(v7) )
      v8 = 0LL;
    else
      v8 = 3LL;
    if ( (v8 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[59] = v9[59];
    LODWORD(v66) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo(v6);
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v13)
      || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v48),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 480) + 224LL) & 1) == 0 )
    {
      v19 = KeGetCurrentThread();
      v20 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v18)
        || (v50 = PsGetCurrentProcess(v22, v21, v23),
            v51 = PsGetProcessSessionIdEx(v50),
            v53 = PsGetCurrentThreadProcess(v52),
            v51 == (unsigned int)PsGetProcessSessionIdEx(v53)) )
      {
        v24 = (__int64 *)PsGetThreadWin32Thread(v19);
        if ( v24 )
          v20 = *v24;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v20 + 480) + 224LL) & 0x20) == 0 )
      {
        v62 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
        LOBYTE(v25) = 18;
        v26 = 18;
        v27 = KeGetCurrentThread();
        v28 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v62)
          || (v54 = PsGetCurrentProcess(v30, v29, v31),
              v55 = PsGetProcessSessionIdEx(v54),
              v57 = PsGetCurrentThreadProcess(v56),
              v55 == (unsigned int)PsGetProcessSessionIdEx(v57)) )
        {
          v32 = (__int64 *)PsGetThreadWin32Thread(v27);
          if ( v32 )
            v28 = *v32;
        }
        if ( v28 )
        {
          if ( *(_QWORD *)(v28 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v28);
          if ( *(_DWORD *)(v28 + 340) )
          {
            v26 = *(_DWORD *)(v28 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v33);
            if ( CurrentProcessWin32Process )
              v26 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
          if ( (*(_DWORD *)(v28 + 328) & 4) != 0 && (v26 & 0xF) == 2 && (v26 & 0xF0) == 0x20 )
            v26 |= 0x20000000u;
        }
        if ( (((unsigned __int16)(v62 >> 8) ^ (unsigned __int16)(v26 >> 8)) & 0x1FF) != 0 )
          goto LABEL_50;
        v35 = *(unsigned int *)(*(_QWORD *)(v63 + 40) + 288LL);
        v36 = (*(_DWORD *)(*(_QWORD *)(v63 + 40) + 288LL) & 0xF) == 2 && (v35 & 0x20000000) != 0;
        v37 = KeGetCurrentThread();
        v38 = 0LL;
        if ( !(unsigned __int8)KeIsAttachedProcess(v35)
          || (v58 = PsGetCurrentProcess(v40, v39, v41),
              v59 = PsGetProcessSessionIdEx(v58),
              v61 = PsGetCurrentThreadProcess(v60),
              v59 == (unsigned int)PsGetProcessSessionIdEx(v61)) )
        {
          v42 = (__int64 *)PsGetThreadWin32Thread(v37);
          if ( v42 )
            v38 = *v42;
        }
        if ( v38 )
        {
          if ( *(_QWORD *)(v38 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v38);
          if ( *(_DWORD *)(v38 + 340) )
          {
            v25 = *(_DWORD *)(v38 + 340);
          }
          else
          {
            v43 = PsGetCurrentProcessWin32Process(v18);
            if ( v43 )
              v25 = *(_DWORD *)(v43 + 280);
          }
        }
        v44 = (v25 & 0xF) == 2 && (W32GetCurrentThreadDpiAwarenessContext(v18) & 0x20000000) != 0;
        if ( v36 != v44 )
LABEL_50:
          TransformRectBetweenCoordinateSpaces((char *)&v66 + 4, (char *)&v66 + 4, 0LL, v63);
      }
    }
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = v66;
      *(_OWORD *)(a3 + 16) = v67;
      *(_OWORD *)(a3 + 32) = v68;
      *(_QWORD *)(a3 + 48) = v69;
      *(_DWORD *)(a3 + 56) = v70;
    }
    ThreadUnlock1(v18);
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return ScrollBarInfo;
}
