_BOOL8 __fastcall bIsTriangleInBounds(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIANGLEDATA *a4)
{
  LONG x; // r10d
  LONG v5; // r11d
  LONG y; // ecx
  LONG v7; // eax
  LONG v8; // edx
  LONG v9; // eax

  x = a1->x;
  if ( a1->x >= a2->x )
  {
    v5 = a2->x;
    if ( x > a2->x )
      goto LABEL_5;
  }
  else
  {
    v5 = a1->x;
  }
  x = a2->x;
LABEL_5:
  y = a1->y;
  v7 = a2->y;
  if ( y >= v7 )
  {
    v8 = a2->y;
    if ( y > v7 )
      goto LABEL_9;
  }
  else
  {
    v8 = y;
  }
  y = v7;
LABEL_9:
  if ( v5 >= a3->x )
    v5 = a3->x;
  if ( x <= a3->x )
    x = a3->x;
  v9 = a3->y;
  if ( v8 >= v9 )
    v8 = a3->y;
  if ( y <= v9 )
    y = a3->y;
  return v5 < *((_DWORD *)a4 + 2) && x > *(_DWORD *)a4 && v8 < *((_DWORD *)a4 + 3) && y > *((_DWORD *)a4 + 1);
}
