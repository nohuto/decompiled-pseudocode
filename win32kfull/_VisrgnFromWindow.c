/*
 * XREFs of _VisrgnFromWindow @ 0x1C007EFB0
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00546FC (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     UserVisrgnFromHwnd @ 0x1C007EF04 (UserVisrgnFromHwnd.c)
 * Callees:
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00255DC (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     IsWindowContentProtected @ 0x1C002E710 (IsWindowContentProtected.c)
 *     CalcVisRgn @ 0x1C00535C0 (CalcVisRgn.c)
 */

__int64 __fastcall VisrgnFromWindow(const struct tagWND *a1, int a2, HRGN *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // r9d

  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) != 0
    && !_GhostWindowFromHungWindow(a1)
    && !(unsigned int)IsWindowContentProtected((__int64)a1) )
  {
    v6 = *((_QWORD *)a1 + 5);
LABEL_11:
    SetRectRgnIndirect(*a3, v6 + 88);
    return 1LL;
  }
  v6 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v6 + 26) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(v6 + 31) & 0x10) == 0 )
      return 0LL;
    goto LABEL_11;
  }
  v7 = (a2 != 0 ? 17409 : 134218753) | 0x10;
  if ( (*(_BYTE *)(v6 + 31) & 4) == 0 )
    v7 = a2 != 0 ? 17409 : 134218753;
  return CalcVisRgn(a3, a1, a1, v7);
}
