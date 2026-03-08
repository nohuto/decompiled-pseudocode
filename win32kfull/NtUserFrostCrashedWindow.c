/*
 * XREFs of NtUserFrostCrashedWindow @ 0x1C01D0B20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1C01F5880 (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 */

HWND __fastcall NtUserFrostCrashedWindow(__int64 a1, HWND a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  HWND v7; // rbx
  struct tagWND *v8; // rsi

  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    if ( !a2 || ValidateHwnd(a2) )
      v7 = xxxFrostCrashedWindow(v8, a2);
    else
      UserSetLastError(1400);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
