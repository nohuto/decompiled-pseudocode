/*
 * XREFs of NtUserInheritWindowMonitor @ 0x1C014A870
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 */

__int64 __fastcall NtUserInheritWindowMonitor(__int64 a1, __int64 a2)
{
  int v4; // edi
  ShellWindowManagement *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  ShellWindowManagement *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v4 = 0;
  v16 = 0LL;
  v5 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = (ShellWindowManagement *)v6;
  if ( v6 )
  {
    v7 = (*(_WORD *)(*(_QWORD *)(v6 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v15;
      *((_QWORD *)&v15 + 1) = v6;
      HMLockObject(v6);
      if ( PsGetCurrentProcessWin32Process(v9) == *(_QWORD *)(*((_QWORD *)v8 + 2) + 424LL) )
      {
        if ( !a2 || (v5 = (ShellWindowManagement *)ValidateHwnd(a2)) != 0LL )
          v4 = xxxInheritWindowMonitor(v8, v5, 1);
      }
      else
      {
        UserSetLastError(5LL, v10);
      }
      ThreadUnlock1(v12, v11, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
