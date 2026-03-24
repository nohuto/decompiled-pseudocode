/*
 * XREFs of NtUserSetWindowPos @ 0x1C006A5C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ConstrainWindowPos @ 0x1C00669F0 (ConstrainWindowPos.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ConstrainWindowSize @ 0x1C006A18C (ConstrainWindowSize.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006A8E4 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F63B4 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, HWND a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v7; // edi
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // r12d
  __int64 v17; // rcx
  struct tagWND *v18; // rsi
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // ebx
  __int64 v32; // rcx
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v37; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v40; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v42; // rax
  int v43; // ebx
  __int64 v44; // rcx
  __int64 v45; // rax
  struct tagWND *v46; // [rsp+48h] [rbp-41h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-39h]
  __int64 v48; // [rsp+58h] [rbp-31h]
  __int128 v49; // [rsp+60h] [rbp-29h] BYREF
  __int64 v50; // [rsp+70h] [rbp-19h]
  __int128 v51; // [rsp+78h] [rbp-11h] BYREF
  __int64 v52; // [rsp+88h] [rbp-1h]
  int v53; // [rsp+E8h] [rbp+5Fh] BYREF
  int v54; // [rsp+F0h] [rbp+67h] BYREF

  v54 = a4;
  v53 = a3;
  v7 = 0;
  v46 = 0LL;
  v52 = 0LL;
  v50 = 0LL;
  v10 = 1;
  v51 = 0LL;
  v49 = 0LL;
  EnterCrit(0LL, 1LL);
  v11 = ValidateHwnd(a1);
  v13 = v11;
  if ( v11 )
  {
    v12 = (*(_WORD *)(*(_QWORD *)(v11 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v12 & 0xFFFFFFFD) != 0 )
    {
      v48 = gptiCurrent;
      *(_QWORD *)&v49 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v49;
      *((_QWORD *)&v49 + 1) = v11;
      HMLockObject(v11);
      v16 = a7;
      if ( (a7 & 0xFFFC9800) != 0 )
      {
        v37 = 1004LL;
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v46) )
        {
LABEL_29:
          ThreadUnlock1(v17);
          goto LABEL_30;
        }
        if ( *(char *)(*(_QWORD *)(v13 + 40) + 20LL) >= 0 )
        {
          if ( (v16 & 2) == 0 )
            ConstrainWindowPos(&v53, &v54);
          if ( (v16 & 1) == 0 )
            ConstrainWindowSize(&a5, &a6);
          v18 = v46;
          if ( (unsigned __int64)v46 <= 1 || (unsigned __int64)v46 > 0xFFFFFFFFFFFFFFFDuLL )
            v18 = 0LL;
          v19 = 0LL;
          CurrentThread = KeGetCurrentThread();
          if ( !(unsigned __int8)KeIsAttachedProcess(v17)
            || (CurrentProcess = PsGetCurrentProcess(v21, v20, v22),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v40),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v19 = *ThreadWin32Thread;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v19 + 480) + 224LL) & 1) == 0 )
          {
            v25 = 0LL;
            CurrentThread = KeGetCurrentThread();
            if ( !(unsigned __int8)KeIsAttachedProcess(v24)
              || (v42 = PsGetCurrentProcess(v27, v26, v28),
                  v43 = PsGetProcessSessionIdEx(v42),
                  v45 = PsGetCurrentThreadProcess(v44),
                  v43 == (unsigned int)PsGetProcessSessionIdEx(v45)) )
            {
              v29 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( v29 )
                v25 = *v29;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v25 + 480) + 224LL) & 0x20) == 0 )
            {
              v31 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL);
              if ( (((unsigned __int16)(v31 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v30) >> 8)) & 0x1FF) != 0 )
                goto LABEL_44;
              v32 = *(unsigned int *)(*(_QWORD *)(v13 + 40) + 288LL);
              if ( (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL) & 0xF) != 2 || (v33 = 1, (v32 & 0x20000000) == 0) )
                v33 = 0;
              if ( (W32GetCurrentThreadDpiAwarenessContext(v32) & 0xF) != 2
                || (W32GetCurrentThreadDpiAwarenessContext(v34) & 0x20000000) == 0 )
              {
                v10 = 0;
              }
              if ( v33 != v10 )
LABEL_44:
                TransformSWPCoords((struct tagWND *)v13, &v53, &v54, &a5, &a6, v16);
            }
          }
          *(_QWORD *)&v51 = *(_QWORD *)(v48 + 416);
          *(_QWORD *)(v48 + 416) = &v51;
          *((_QWORD *)&v51 + 1) = v18;
          if ( v18 )
            HMLockObject(v18);
          v7 = xxxSetWindowPos((struct tagWND *)v13, a5, a6, v16);
          ThreadUnlock1(v35);
          goto LABEL_29;
        }
        v37 = 87LL;
      }
      UserSetLastError(v37, v14, v15);
      goto LABEL_29;
    }
  }
LABEL_30:
  UserSessionSwitchLeaveCrit(v12);
  return v7;
}
