_BOOL8 __fastcall OverlapCheck(_DWORD *a1, HRGN a2)
{
  BOOL v4; // ebx
  HANDLE RectRgn; // rdi
  struct tagSIZE v6; // rax
  INT bottom; // r10d
  _DWORD *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = a1;
  v4 = 0;
  RectRgn = EngCreateRectRgn(0, 0, 0, 0);
  if ( RectRgn )
  {
    PDEVOBJ::sizl((PDEVOBJ *)&v9);
    v6 = PDEVOBJ::sizl((PDEVOBJ *)&v9);
    if ( EngSetRectRgn(RectRgn, a1[640], a1[641], a1[640] + *(_DWORD *)v6.cx, bottom) )
      v4 = (unsigned int)EngCombineRgn(RectRgn, RectRgn, a2, 1) > 1;
    EngDeleteRgn(RectRgn);
  }
  return v4;
}
