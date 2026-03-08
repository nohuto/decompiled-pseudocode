/*
 * XREFs of NtUserSetWindowDisplayAffinity @ 0x1C01DE220
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     SetDisplayAffinity @ 0x1C022FAFC (SetDisplayAffinity.c)
 */

__int64 __fastcall NtUserSetWindowDisplayAffinity(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // rdx
  struct tagWND *v12; // rcx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) != v9 )
    {
      v10 = 5;
LABEL_16:
      UserSetLastError(v10);
      goto LABEL_17;
    }
    v11 = *(_QWORD *)(v7 + 104);
    if ( v11 && (*(_DWORD *)(*(_QWORD *)(v11 + 16) + 1272LL) & 0x40000) != 0 )
      v7 = *(_QWORD *)(v7 + 104);
    if ( !IsTopLevelWindow(v7) || a2 && (a2 & 0x11) == 0 )
    {
      v10 = 87;
      goto LABEL_16;
    }
    if ( !(unsigned int)SetDisplayAffinity(v12) )
    {
      v10 = 8;
      goto LABEL_16;
    }
    v6 = 1LL;
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
