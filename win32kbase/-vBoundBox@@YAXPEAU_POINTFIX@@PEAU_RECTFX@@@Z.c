void __fastcall vBoundBox(struct _POINTFIX *a1, struct _RECTFX *a2)
{
  FIX x; // ecx
  FIX v4; // eax
  FIX v5; // r9d
  FIX v6; // r10d
  FIX v7; // eax
  FIX v8; // ecx
  FIX y; // r10d
  FIX v10; // eax
  FIX v11; // ecx
  FIX v12; // r9d
  FIX v13; // eax
  FIX v14; // ecx

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
      v13 = a1[2].y;
    }
    else
    {
      if ( y >= v11 )
        y = a1[2].y;
      a2->yTop = y;
      v13 = a1[3].y;
    }
    v14 = a1[1].y;
  }
  else
  {
    if ( v11 < v12 )
    {
      if ( v10 >= v11 )
        v10 = a1[2].y;
      a2->yTop = v10;
      v13 = a1[3].y;
    }
    else
    {
      if ( v10 >= v12 )
        v10 = a1[3].y;
      a2->yTop = v10;
      v13 = a1[2].y;
    }
    v14 = a1->y;
  }
  if ( v14 <= v13 )
    v14 = v13;
  a2->yBottom = v14;
}
