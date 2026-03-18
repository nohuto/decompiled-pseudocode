/*
 * XREFs of ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C0233DC4
 * Callers:
 *     xxxMNInvertItem @ 0x1C0235660 (xxxMNInvertItem.c)
 *     xxxMenuBarDraw @ 0x1C0235E48 (xxxMenuBarDraw.c)
 * Callees:
 *     RevalidateDCE @ 0x1C008F0E0 (RevalidateDCE.c)
 */

void __fastcall RecalcDCVisRgn(HDC a1)
{
  __int64 v2; // rax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v2 = LookupDC(a1, 1LL);
  if ( v2 )
    RevalidateDCE(v2);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
