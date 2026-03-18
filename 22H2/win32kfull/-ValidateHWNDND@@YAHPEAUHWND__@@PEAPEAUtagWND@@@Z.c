/*
 * XREFs of ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0028D5C
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C0029610 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetShellWindowEx @ 0x1C003A9D0 (NtUserSetShellWindowEx.c)
 *     NtUserSetCoreWindow @ 0x1C00AD610 (NtUserSetCoreWindow.c)
 *     NtUserFlashWindowEx @ 0x1C01CF820 (NtUserFlashWindowEx.c)
 *     NtUserSetCoreWindowPartner @ 0x1C01DB350 (NtUserSetCoreWindowPartner.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateHWNDND(HWND a1, struct tagWND **a2)
{
  struct tagWND *v3; // rcx
  bool result; // al
  int v5; // edx

  v3 = (struct tagWND *)ValidateHwnd(a1);
  *a2 = v3;
  result = 0;
  if ( v3 )
  {
    v5 = *(_WORD *)(*((_QWORD *)v3 + 5) + 42LL) & 0x2FFF;
    if ( v5 != 669 )
      return v5 != 671;
  }
  return result;
}
