/*
 * XREFs of ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C009A010
 * Callers:
 *     NtUserSetWindowBand @ 0x1C00999F0 (NtUserSetWindowBand.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0099C50 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     ValidateHwndIAM @ 0x1C009A070 (ValidateHwndIAM.c)
 */

__int64 __fastcall ValidateHWNDIA(struct tagWND *a1, struct tagWND **a2)
{
  unsigned int v3; // ebx
  struct tagWND *v5; // rax

  v3 = 1;
  if ( (unsigned __int64)a1 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    v5 = (struct tagWND *)ValidateHwndIAM(a1);
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
