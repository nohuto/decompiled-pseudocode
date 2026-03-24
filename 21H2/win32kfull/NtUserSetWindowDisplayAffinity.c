/*
 * XREFs of NtUserSetWindowDisplayAffinity @ 0x1C0202F20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     SetDisplayAffinity @ 0x1C0248120 (SetDisplayAffinity.c)
 */

__int64 __fastcall NtUserSetWindowDisplayAffinity(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 424LL) != PsGetCurrentProcessWin32Process(v5) )
    {
      v10 = 5LL;
LABEL_14:
      UserSetLastError(v10, v8, v9);
      goto LABEL_15;
    }
    v11 = *(_QWORD *)(v7 + 104);
    if ( v11 && (*(_DWORD *)(*(_QWORD *)(v11 + 16) + 1232LL) & 0x40000) != 0 )
      v7 = *(_QWORD *)(v7 + 104);
    if ( !(unsigned int)IsTopLevelWindow(v7) || a2 && (a2 & 0x11) == 0 )
    {
      v10 = 87LL;
      goto LABEL_14;
    }
    if ( !(unsigned int)SetDisplayAffinity((struct tagWND *)v7) )
    {
      v10 = 8LL;
      goto LABEL_14;
    }
    v6 = 1LL;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
