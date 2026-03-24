/*
 * XREFs of _VisrgnFromWindow @ 0x1C011CEC8
 * Callers:
 *     UserVisrgnFromHwnd @ 0x1C011CE84 (UserVisrgnFromHwnd.c)
 * Callees:
 *     IsWindowContentProtected @ 0x1C00388B4 (IsWindowContentProtected.c)
 *     _GhostWindowFromHungWindow @ 0x1C003B5B0 (_GhostWindowFromHungWindow.c)
 *     CalcVisRgn @ 0x1C0073950 (CalcVisRgn.c)
 */

__int64 __fastcall VisrgnFromWindow(__int64 a1, int a2, HRGN *a3)
{
  __int64 v6; // rdx
  char v7; // cl
  unsigned int v8; // r9d

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x20) != 0
    && !GhostWindowFromHungWindow(a1)
    && !(unsigned int)IsWindowContentProtected(a1) )
  {
    v6 = *(_QWORD *)(a1 + 40);
LABEL_11:
    SetRectRgnIndirect(*a3, v6 + 88);
    return 1LL;
  }
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_BYTE *)(v6 + 31);
  if ( (*(_BYTE *)(v6 + 26) & 0x20) != 0 )
  {
    if ( (v7 & 0x10) == 0 )
      return 0LL;
    goto LABEL_11;
  }
  v8 = (a2 != 0 ? 17409 : 134218753) | 0x10;
  if ( (v7 & 4) == 0 )
    v8 = a2 != 0 ? 17409 : 134218753;
  return CalcVisRgn(a3, a1, (struct tagWND *)a1, v8);
}
