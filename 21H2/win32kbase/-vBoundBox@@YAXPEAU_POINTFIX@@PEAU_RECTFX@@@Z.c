/*
 * XREFs of ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0092930
 * Callers:
 *     ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0092660 (-bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C016DA00 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vBoundBox(struct _POINTFIX *a1, struct _RECTFX *a2)
{
  FIX x; // ecx
  FIX v4; // eax
  FIX v5; // r9d
  FIX v6; // r10d
  FIX v7; // eax
  FIX v8; // ecx
  FIX y; // ecx
  FIX v10; // eax
  FIX v11; // r9d
  FIX v12; // r10d
  FIX v13; // ecx
  FIX v14; // eax

  x = a1->x;
  v4 = a1[1].x;
  v5 = a1[2].x;
  v6 = a1[3].x;
  if ( x < v4 )
  {
    if ( v5 > v6 )
    {
      if ( x >= v6 )
        x = a1[3].x;
      a2->xLeft = x;
      v7 = a1[2].x;
    }
    else
    {
      if ( x >= v5 )
        x = a1[2].x;
      a2->xLeft = x;
      v7 = a1[3].x;
    }
    v8 = a1[1].x;
  }
  else
  {
    if ( v5 < v6 )
    {
      if ( v4 >= v5 )
        v4 = a1[2].x;
      a2->xLeft = v4;
      v7 = a1[3].x;
    }
    else
    {
      if ( v4 >= v6 )
        v4 = a1[3].x;
      a2->xLeft = v4;
      v7 = a1[2].x;
    }
    v8 = a1->x;
  }
  if ( v8 <= v7 )
    v8 = v7;
  a2->xRight = v8;
  y = a1->y;
  v10 = a1[1].y;
  v11 = a1[2].y;
  v12 = a1[3].y;
  if ( y < v10 )
  {
    if ( v11 > v12 )
    {
      if ( y >= v12 )
        y = a1[3].y;
      a2->yTop = y;
      v13 = a1[1].y;
      goto LABEL_14;
    }
    if ( y >= v11 )
      y = a1[2].y;
    a2->yTop = y;
    v13 = a1[1].y;
  }
  else
  {
    if ( v11 >= v12 )
    {
      if ( v10 >= v12 )
        v10 = a1[3].y;
      a2->yTop = v10;
      v13 = a1->y;
LABEL_14:
      v14 = a1[2].y;
      goto LABEL_15;
    }
    if ( v10 >= v11 )
      v10 = a1[2].y;
    a2->yTop = v10;
    v13 = a1->y;
  }
  v14 = a1[3].y;
LABEL_15:
  if ( v13 <= v14 )
    v13 = v14;
  a2->yBottom = v13;
}
