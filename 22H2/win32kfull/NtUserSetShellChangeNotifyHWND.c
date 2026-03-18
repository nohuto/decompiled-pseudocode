/*
 * XREFs of NtUserSetShellChangeNotifyHWND @ 0x1C00BC160
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z @ 0x1C00BC19C (-_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall NtUserSetShellChangeNotifyHWND(HWND a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterSharedCrit(a1, a2, a3);
  v4 = (int)_SetShellChangeNotifyHWND(a1);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
