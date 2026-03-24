/*
 * XREFs of ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0044688
 * Callers:
 *     xxxMenuDraw @ 0x1C0043668 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C004470C (xxxDrawMenuItem.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C00456F4 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

void __fastcall MNDrawInsertionBar(HDC a1, struct tagITEM *a2)
{
  int v2; // ebx

  v2 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  if ( v2 < 0 || (v2 & 0x40000000) != 0 )
    GrePolyPatBlt(a1);
}
