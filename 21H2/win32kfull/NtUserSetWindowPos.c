/*
 * XREFs of NtUserSetWindowPos @ 0x1C0025580
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C002583C (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ConstrainWindowSize @ 0x1C002589C (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1C00258D4 (ConstrainWindowPos.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z @ 0x1C006A110 (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEBUtagWND@@K@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1C010DB58 (-ExtendedBehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F10CC (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 */

__int64 __fastcall NtUserSetWindowPos(__int64 a1, HWND a2, int a3, int a4, int a5, int a6, unsigned int a7)
{
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  struct tagWND *v12; // rsi
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct tagWND *v17; // r14
  __int64 v18; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v29; // r8d
  __int64 v30; // rcx
  bool v31; // al
  __int64 v32; // rdx
  int v33; // r8d
  struct tagWND *v34; // [rsp+58h] [rbp-21h] BYREF
  __int128 v35; // [rsp+60h] [rbp-19h] BYREF
  __int64 v36; // [rsp+70h] [rbp-9h]
  __int128 v37; // [rsp+78h] [rbp-1h] BYREF
  __int64 v38; // [rsp+88h] [rbp+Fh]
  int v39; // [rsp+D8h] [rbp+5Fh] BYREF
  int v40; // [rsp+E0h] [rbp+67h] BYREF

  v40 = a4;
  v39 = a3;
  v38 = 0LL;
  v36 = 0LL;
  v9 = 0;
  v34 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v12 = (struct tagWND *)v10;
  if ( v10 )
  {
    v11 = (*(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v11 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v35 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v35;
      *((_QWORD *)&v35 + 1) = v10;
      HMLockObject(v10);
      v13 = a7;
      if ( (a7 & 0xFFFC9800) != 0 )
      {
        v30 = 1004LL;
      }
      else
      {
        if ( !(unsigned int)ValidateHWNDIA(a2, &v34) )
        {
LABEL_24:
          ThreadUnlock1(v15, v14, v16);
          goto LABEL_25;
        }
        if ( *(char *)(*((_QWORD *)v12 + 5) + 20LL) >= 0 )
        {
          if ( (v13 & 2) == 0 )
            ConstrainWindowPos(&v39, &v40);
          if ( (v13 & 1) == 0 )
            ConstrainWindowSize(&a5, &a6);
          v17 = v34;
          if ( (unsigned __int64)v34 <= 1 || (unsigned __int64)v34 > 0xFFFFFFFFFFFFFFFDuLL )
            v17 = 0LL;
          v18 = 0LL;
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( ThreadWin32Thread )
            v18 = *ThreadWin32Thread;
          if ( (*(_BYTE *)(*(_QWORD *)(v18 + 480) + 224LL) & 1) == 0 )
          {
            v21 = 0LL;
            v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v22 )
              v21 = *v22;
            if ( (*(_BYTE *)(*(_QWORD *)(v21 + 480) + 224LL) & 0x20) == 0 )
            {
              v24 = *(_DWORD *)(*((_QWORD *)v12 + 5) + 288LL);
              if ( (((unsigned __int16)(v24 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                       v23,
                                                                                       v20) >> 8)) & 0x1FF) != 0 )
                TransformSWPCoords(v12, &v39, &v40, &a5, &a6, v13);
            }
          }
          if ( (v13 & 0x43) == 0x43
            && (*(_BYTE *)(*((_QWORD *)v12 + 5) + 31LL) & 0x10) == 0
            && ShellWindowManagement::ExtendedBehaviorEnabled((ShellWindowManagement *)0x1000000, v20)
            && (v31 = ShellWindowManagement::WindowSubjectToBehavior(v12, (const struct tagWND *)1, v29)) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
              || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v32) = 0;
            }
            if ( (_BYTE)v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v32,
                v33,
                10,
                4,
                22,
                10,
                (__int64)&WPP_1a1985ee69fe3ed3820bb61b1edf259e_Traceguids,
                (char)v12);
            }
            LOBYTE(v32) = 5;
            xxxShowWindowEx(v12, v32, 0LL);
            v9 = 1;
          }
          else
          {
            *(_QWORD *)&v37 = *(_QWORD *)(gptiCurrent + 416LL);
            *(_QWORD *)(gptiCurrent + 416LL) = &v37;
            *((_QWORD *)&v37 + 1) = v17;
            if ( v17 )
              HMLockObject(v17);
            v9 = xxxSetWindowPos(v12, a5, a6, v13);
            ThreadUnlock1(v26, v25, v27);
          }
          goto LABEL_24;
        }
        v30 = 87LL;
      }
      UserSetLastError(v30);
      goto LABEL_24;
    }
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v11);
  return v9;
}
