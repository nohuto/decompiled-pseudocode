/*
 * XREFs of ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C002583C
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C0024310 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0025580 (NtUserSetWindowPos.c)
 *     NtUserSetWindowBand @ 0x1C009D860 (NtUserSetWindowBand.c)
 * Callees:
 *     ValidateHwndIAM @ 0x1C0022C00 (ValidateHwndIAM.c)
 */

__int64 __fastcall ValidateHWNDIA(struct tagWND *a1, struct tagWND **a2)
{
  unsigned int v3; // ebx
  struct tagWND *v5; // rax

  v3 = 1;
  if ( (unsigned __int64)a1 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    v5 = (struct tagWND *)ValidateHwndIAM((__int64)a1);
    *a2 = v5;
    if ( !v5 || (((*(_WORD *)(*((_QWORD *)v5 + 5) + 42LL) & 0x2FFF) - 669) & 0xFFFFFFFD) == 0 )
      return 0;
  }
  else
  {
    *a2 = a1;
  }
  return v3;
}
