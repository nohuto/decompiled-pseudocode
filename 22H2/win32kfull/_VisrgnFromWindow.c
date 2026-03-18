/*
 * XREFs of _VisrgnFromWindow @ 0x1C005AC9C
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0034764 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     UserVisrgnFromHwnd @ 0x1C005ABF0 (UserVisrgnFromHwnd.c)
 * Callees:
 *     CalcVisRgn @ 0x1C0033320 (CalcVisRgn.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C005F03C (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     IsWindowContentProtected @ 0x1C00CF0C0 (IsWindowContentProtected.c)
 */

__int64 __fastcall VisrgnFromWindow(const struct tagWND *a1, int a2, HRGN *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // r9

  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 2) != 0
    && !_GhostWindowFromHungWindow(a1)
    && !(unsigned int)IsWindowContentProtected(a1) )
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
  v7 = a2 != 0 ? 17409 : 134218753;
  v8 = v7 | 0x10;
  if ( (*(_BYTE *)(v6 + 31) & 4) == 0 )
    v8 = v7;
  return CalcVisRgn(a3, a1, a1, v8);
}
