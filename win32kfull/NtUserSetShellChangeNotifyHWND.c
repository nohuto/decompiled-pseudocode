/*
 * XREFs of NtUserSetShellChangeNotifyHWND @ 0x1C00F3D90
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z @ 0x1C00F3DCC (-_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall NtUserSetShellChangeNotifyHWND(HWND a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterSharedCrit(a1, a2, a3);
  v4 = (int)_SetShellChangeNotifyHWND(a1);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
