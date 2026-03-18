/*
 * XREFs of NtUserSetWindowDisplayAffinity @ 0x1C01FE560
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     SetDisplayAffinity @ 0x1C02439D4 (SetDisplayAffinity.c)
 */

__int64 __fastcall NtUserSetWindowDisplayAffinity(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  struct tagWND *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 424LL) != PsGetCurrentProcessWin32Process(v5) )
    {
      v9 = 5LL;
LABEL_14:
      UserSetLastError(v9, v8);
      goto LABEL_15;
    }
    v10 = *((_QWORD *)v7 + 13);
    if ( v10 && (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 1256LL) & 0x40000) != 0 )
      v7 = (struct tagWND *)*((_QWORD *)v7 + 13);
    if ( !IsTopLevelWindow((__int64)v7) || a2 && (a2 & 0x11) == 0 )
    {
      v9 = 87LL;
      goto LABEL_14;
    }
    if ( !(unsigned int)SetDisplayAffinity(v7) )
    {
      v9 = 8LL;
      goto LABEL_14;
    }
    v6 = 1LL;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
