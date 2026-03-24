/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006F670
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068290 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C006F5C4 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 */

_BOOL8 __fastcall ValidateWindowPos(struct tagCVR *a1, struct tagWND *a2)
{
  unsigned __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  __int64 DesktopWindow; // rax
  struct tagWND *v16; // rdx
  struct tagWND *v17; // rdi
  __int64 v18; // rax
  struct tagWND *v19; // rbp
  char v20; // r8
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r10
  char v25; // r11
  __int64 v26; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v29; // rcx
  __int64 CurrentThreadProcess; // rax

  v2 = *(_QWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v7, v6, v8),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v29),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    PsGetThreadWin32Thread(CurrentThread);
  }
  if ( (unsigned __int64)(unsigned __int16)v2 < *(_QWORD *)(gpsi + 8LL) )
  {
    v9 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v2 * LODWORD(gSharedInfo[2]);
    v10 = v2 >> 16;
    v12 = (_QWORD *)HMPkheFromPhe(v9);
    if ( ((_WORD)v10 == *(_WORD *)(v9 + 26)
       || (_WORD)v10 == 0xFFFF
       || !(_WORD)v10 && PsGetCurrentProcessWow64Process(v11))
      && (*(_BYTE *)(v9 + 25) & 1) == 0
      && *(_BYTE *)(v9 + 24) == 1 )
    {
      v13 = (_QWORD *)*v12;
      if ( *v12 )
      {
        *((_QWORD *)a1 + 13) = v13[2];
        if ( (*((_DWORD *)a1 + 8) & 4) != 0 )
          return 1LL;
        DesktopWindow = GetDesktopWindow(v13);
        v16 = (struct tagWND *)v13[13];
        v17 = (struct tagWND *)DesktopWindow;
        v18 = v13[5];
        v19 = v16;
        v20 = *(_BYTE *)(v18 + 19);
        if ( v20 >= 0 )
        {
          v21 = *((_QWORD *)a1 + 1);
          if ( v21 > 0xFFFFFFFFFFFFFFFDuLL )
          {
            if ( v16 != v17 )
              return 0LL;
            return !a2 || a2 == v16;
          }
          if ( v21 )
          {
            if ( v21 == 1 )
              return !a2 || a2 == v16;
            LOBYTE(v16) = 1;
            v22 = (_QWORD *)HMValidateHandleNoSecure(v21, v16);
            if ( !v22 || (v24 = v22[5], v25 = *(_BYTE *)(v24 + 19), v25 < 0) )
            {
              UserSetLastError(6LL, v23, (__int64)v22);
              return 0LL;
            }
            if ( v13 == v22 )
              return 0LL;
            v16 = (struct tagWND *)v13[13];
            if ( v16 != (struct tagWND *)v22[13] )
              return 0LL;
            if ( !a2 )
              return 1LL;
            if ( v19 != v17 )
              return !a2 || a2 == v16;
            if ( ((*(_BYTE *)(v13[5] + 19LL) & 4 ^ (*(unsigned __int8 *)(v13[5] + 24LL) >> 1) & 4) & 0xFFFFFFFC) != 0 )
            {
              if ( ((v25 & 4 ^ (*(unsigned __int8 *)(v24 + 24) >> 1) & 4) & 0xFFFFFFFC) == 0 )
                return 0LL;
              return !a2 || a2 == v16;
            }
            v26 = v22[11];
          }
          else
          {
            if ( !a2 )
              return 1LL;
            if ( v16 != v17 || ((v20 & 4 ^ (*(unsigned __int8 *)(v18 + 24) >> 1) & 4) & 0xFFFFFFFC) != 0 )
              return !a2 || a2 == v16;
            v26 = *((_QWORD *)a2 + 14);
          }
          if ( v26
            && ((*(_BYTE *)(*(_QWORD *)(v26 + 40) + 19LL) & 4 ^ (*(unsigned __int8 *)(*(_QWORD *)(v26 + 40) + 24LL) >> 1) & 4) & 0xFFFFFFFC) != 0 )
          {
            return 0LL;
          }
          return !a2 || a2 == v16;
        }
      }
    }
  }
  return 0LL;
}
