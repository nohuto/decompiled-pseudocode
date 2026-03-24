/*
 * XREFs of ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0032378
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C0004E60 (NtUserSetCoreWindowPartner.c)
 *     NtUserSetCoreWindow @ 0x1C0012C70 (NtUserSetCoreWindow.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0032160 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetShellWindowEx @ 0x1C00D6DF0 (NtUserSetShellWindowEx.c)
 *     NtUserFlashWindowEx @ 0x1C01F8A00 (NtUserFlashWindowEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateHWNDND(HWND a1, struct tagWND **a2)
{
  __int64 v3; // rax

  v3 = ValidateHwnd(a1);
  *a2 = (struct tagWND *)v3;
  return v3 && (((*(_WORD *)(*(_QWORD *)(v3 + 40) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0;
}
