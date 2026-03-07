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
