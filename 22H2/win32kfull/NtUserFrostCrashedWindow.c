/*
 * XREFs of NtUserFrostCrashedWindow @ 0x1C01CFAD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1C01F4680 (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 */

HWND __fastcall NtUserFrostCrashedWindow(__int64 a1, HWND a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  HWND v10; // rbx
  struct tagWND *v11; // rsi

  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v10 = 0LL;
  v11 = (struct tagWND *)v5;
  if ( v5 )
  {
    if ( !a2 || ValidateHwnd(a2) )
      v10 = xxxFrostCrashedWindow(v11, a2);
    else
      UserSetLastError(1400);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
