__int64 __fastcall bGlyphOutOfBounds(struct ESTROBJ *a1, struct _GLYPHPOS *a2, struct _RECTL *a3, unsigned int a4)
{
  LONG y; // ebx
  unsigned int v5; // r10d
  bool v6; // zf
  struct _RECTL *v7; // r11
  LONG x; // r8d
  GLYPHDEF *pgdf; // rax
  GLYPHBITS *pgb; // rdx
  LONG v12; // ecx
  LONG v13; // r8d
  LONG v15; // [rsp+30h] [rbp+8h] BYREF
  LONG v16; // [rsp+34h] [rbp+Ch]

  y = a2->ptl.y;
  v5 = 0;
  v6 = (*((_DWORD *)a1 + 58) & 0x1400) == 0;
  v7 = a3;
  x = a2->ptl.x;
  v15 = x;
  v16 = y;
  if ( v6 && a4 && *((_DWORD *)a1 + 2) )
  {
    vGetPosInfo(a1, a4, &v15);
    y = v16;
    x = v15;
  }
  pgdf = a2->pgdf;
  pgb = pgdf->pgb;
  v12 = x + pgdf->pgb->ptlOrigin.x;
  v13 = y + pgdf->pgb->ptlOrigin.y;
  if ( v12 < v7->left || pgb->sizlBitmap.cx + v12 > v7->right || v13 < v7->top || v13 + pgb->sizlBitmap.cy > v7->bottom )
    return 1;
  return v5;
}
