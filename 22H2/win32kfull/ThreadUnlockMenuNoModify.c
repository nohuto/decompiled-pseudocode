/*
 * XREFs of ThreadUnlockMenuNoModify @ 0x1C01FF9C4
 * Callers:
 *     xxxCalcMenuBar @ 0x1C0064F30 (xxxCalcMenuBar.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00BAA10 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNStartMenu @ 0x1C01FFC8C (xxxMNStartMenu.c)
 *     xxxMenuBarDraw @ 0x1C0235E48 (xxxMenuBarDraw.c)
 *     xxxPaintMenuBar @ 0x1C023668C (xxxPaintMenuBar.c)
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
