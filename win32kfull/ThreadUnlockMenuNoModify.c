/*
 * XREFs of ThreadUnlockMenuNoModify @ 0x1C0202554
 * Callers:
 *     xxxCalcMenuBar @ 0x1C00A4B90 (xxxCalcMenuBar.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00F268C (xxxDrawMenuBarUnderlines.c)
 *     xxxMNStartMenu @ 0x1C0202834 (xxxMNStartMenu.c)
 *     xxxMenuBarDraw @ 0x1C0238AB0 (xxxMenuBarDraw.c)
 *     xxxPaintMenuBar @ 0x1C02392F4 (xxxPaintMenuBar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadUnlockMenuNoModify(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
  *(_DWORD *)(v3 + 40) &= ~0x200u;
  return ThreadUnlock1(v3, a2, a3);
}
