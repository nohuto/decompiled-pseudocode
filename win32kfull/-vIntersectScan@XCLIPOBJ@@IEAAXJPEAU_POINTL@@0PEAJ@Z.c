void __fastcall XCLIPOBJ::vIntersectScan(XCLIPOBJ *this, int a2, struct _POINTL *a3, struct _POINTL *a4, int *a5)
{
  int v5; // r11d
  struct DDA_CLIPLINE *v6; // rcx

  v5 = 1 - a2;
  v6 = (struct DDA_CLIPLINE *)(*((_QWORD *)this + 18) + 64LL);
  if ( (*(_DWORD *)v6 & 8) == 0 )
    v5 = a2;
  if ( (*(_DWORD *)v6 & 5) != 0 )
    vIntersectVertical(v6, v5, a3, a4, a5);
  else
    vIntersectHorizontal(v6, v5, a3, a4, a5);
}
