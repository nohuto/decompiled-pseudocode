/*
 * XREFs of NtUserIsClipboardFormatAvailable @ 0x1C0030280
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C021EDA8 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall NtUserIsClipboardFormatAvailable(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *ThreadWin32Thread; // rax
  int v9; // eax
  __int64 v10; // rbp
  BOOL v11; // r15d
  struct _KTHREAD *v12; // r12
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // r14
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // rax
  __int64 v20; // rcx
  struct _KTHREAD *v21; // r15
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // rax
  __int64 v27; // rbx
  int v28; // eax
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v31; // r8d
  _DWORD *v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v40; // rax
  int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  NTSTATUS v45; // ecx
  ULONG v46; // eax
  __int64 v47; // rax
  int v48; // ebx
  __int64 v49; // rax
  __int64 v51; // rax
  int v52; // [rsp+68h] [rbp+10h] BYREF
  int v53; // [rsp+6Ch] [rbp+14h]
  __int64 v54; // [rsp+70h] [rbp+18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v9 = *(_DWORD *)(v4 + 488);
  v10 = 0LL;
  v11 = (v9 & 8) != 0;
  v12 = KeGetCurrentThread();
  ThreadProcess = PsGetThreadProcess(v12);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v15 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v40 = PsGetCurrentProcess(v17, v16, v18),
        v41 = PsGetProcessSessionIdEx(v40),
        v42 = PsGetCurrentThreadProcess(),
        v41 == (unsigned int)PsGetProcessSessionIdEx(v42)) )
  {
    v19 = (__int64 *)PsGetThreadWin32Thread(v12);
    if ( v19 )
      v15 = *v19;
  }
  if ( !ProcessWin32Process )
    goto LABEL_44;
  if ( v11
    && v15
    && (v43 = *(_QWORD *)(v15 + 456)) != 0
    && *(_QWORD *)(ProcessWin32Process + 664) != *(_QWORD *)(v43 + 40)
    || (v10 = *(_QWORD *)(ProcessWin32Process + 664)) == 0 )
  {
    if ( v15 )
    {
      v44 = *(_QWORD *)(v15 + 456);
      if ( v44 )
      {
        v10 = *(_QWORD *)(v44 + 40);
        if ( !(unsigned int)AccessCheckObject(v10, 4LL, 0LL, WinStaMapping) )
          goto LABEL_47;
      }
    }
    if ( v10 )
      goto LABEL_11;
LABEL_44:
    v45 = -1073741275;
LABEL_45:
    v46 = RtlNtStatusToDosError(v45);
    UserSetLastError(v46);
    goto LABEL_23;
  }
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(ProcessWin32Process + 680), 4u) )
  {
    UserSetLastError(5LL);
LABEL_47:
    v45 = -1073741790;
    goto LABEL_45;
  }
LABEL_11:
  if ( !gbLockScreenActive )
  {
    v21 = KeGetCurrentThread();
    v22 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v47 = PsGetCurrentProcess(v24, v23, v25),
          v48 = PsGetProcessSessionIdEx(v47),
          v49 = PsGetCurrentThreadProcess(),
          v48 == (unsigned int)PsGetProcessSessionIdEx(v49)) )
    {
      v26 = (__int64 *)PsGetThreadWin32Thread(v21);
      if ( v26 )
        v22 = *v26;
    }
    if ( *(PVOID *)(v22 + 456) != grpdeskLogon )
    {
      if ( a1 )
      {
        v27 = *(_QWORD *)(v10 + 128);
        if ( v27 )
        {
          v28 = *(_DWORD *)(v10 + 136);
          if ( v28 )
          {
            while ( 1 )
            {
              --v28;
              if ( *(_DWORD *)v27 == a1 )
                break;
              v27 += 32LL;
              if ( !v28 )
                goto LABEL_21;
            }
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v20);
            v31 = 0;
            v32 = &unk_1C032B048;
            v33 = *(_QWORD *)(CurrentProcessWin32Process + 880);
            v34 = *(_QWORD *)(v27 + 20);
            v54 = v33;
            do
            {
              if ( (unsigned int)v34 >= *v32 && (unsigned int)v34 < *((_DWORD *)&gaClipILDef + 6 * v31 + 8) )
                break;
              ++v31;
              v32 += 6;
            }
            while ( v31 < 5 );
            if ( v31 > 4 )
            {
LABEL_51:
              v52 = dword_1C032B0C0;
              v36 = dword_1C032B0C4;
            }
            else
            {
              while ( 1 )
              {
                v35 = v31 + 1;
                if ( *((_DWORD *)&gaClipILDef + 6 * v35 + 5) )
                  break;
                ++v31;
                if ( (unsigned int)v35 >= 5 )
                  goto LABEL_51;
              }
              v52 = *((_DWORD *)&gaClipILDef + 6 * v31 + 2);
              v36 = *((_DWORD *)&gaClipILDef + 6 * v31 + 3);
            }
            v53 = v36;
            if ( (unsigned __int8)CheckAccess(&v52, &v54) )
              goto LABEL_22;
            if ( !(unsigned int)IsFmtBlocked(a1) )
              goto LABEL_22;
            v51 = PsGetCurrentProcessWin32Process(v20);
            EtwTraceUIPIClipboardError(0LL, v51, a1, *(_QWORD *)(v27 + 20));
          }
        }
      }
LABEL_21:
      v27 = 0LL;
LABEL_22:
      LOBYTE(v3) = v27 != 0;
    }
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v20);
  return v3;
}
