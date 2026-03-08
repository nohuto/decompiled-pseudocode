/*
 * XREFs of NtUserAllowSetForegroundWindow @ 0x1C0099BD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1C009B4EC (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 */

__int64 __fastcall NtUserAllowSetForegroundWindow(unsigned int a1)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v7; // ecx

  EnterCrit(0LL, 0LL);
  v2 = IAMThreadAccessGranted(gptiCurrent);
  v3 = _AllowSetForegroundWindow(a1, v2 != 0 ? 3 : 0) - 2;
  if ( !v3 )
  {
    v7 = 5;
LABEL_6:
    UserSetLastError(v7);
    v5 = 0LL;
    goto LABEL_4;
  }
  if ( v3 == 1 )
  {
    v7 = 87;
    goto LABEL_6;
  }
  v5 = 1LL;
LABEL_4:
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
