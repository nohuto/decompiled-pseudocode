/*
 * XREFs of ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00244BC
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C0024310 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetCoreWindow @ 0x1C009AB40 (NtUserSetCoreWindow.c)
 *     NtUserSetShellWindowEx @ 0x1C00F1190 (NtUserSetShellWindowEx.c)
 *     NtUserFlashWindowEx @ 0x1C01F3300 (NtUserFlashWindowEx.c)
 *     NtUserSetCoreWindowPartner @ 0x1C01FCC60 (NtUserSetCoreWindowPartner.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateHWNDND(HWND a1, struct tagWND **a2)
{
  struct tagWND *v3; // rax

  v3 = (struct tagWND *)ValidateHwnd(a1);
  *a2 = v3;
  return v3 && (((*(_WORD *)(*((_QWORD *)v3 + 5) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0;
}
