/*
 * XREFs of ThreadLockMenuNoModify @ 0x1C01024BC
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1BE0 (xxxDrawMenuBarUnderlines.c)
 *     xxxPaintMenuBar @ 0x1C0101DB0 (xxxPaintMenuBar.c)
 *     xxxCalcMenuBar @ 0x1C0102164 (xxxCalcMenuBar.c)
 *     xxxMNStartMenu @ 0x1C0222080 (xxxMNStartMenu.c)
 *     xxxMenuBarDraw @ 0x1C024CF54 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall ThreadLockMenuNoModify(__int64 a1, _QWORD *a2)
{
  __int64 ThreadWin32Thread; // rax

  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) |= 0x200u;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *a2 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = a2;
  a2[1] = a1;
  return HMLockObject(a1);
}
