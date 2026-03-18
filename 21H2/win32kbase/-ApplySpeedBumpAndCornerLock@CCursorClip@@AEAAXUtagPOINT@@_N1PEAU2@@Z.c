/*
 * XREFs of ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C01DB73C
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C006D400 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCursorClip::ApplySpeedBumpAndCornerLock(
        CCursorClip *this,
        struct tagPOINT a2,
        char a3,
        char a4,
        struct tagPOINT *a5)
{
  bool v5; // al
  int *v8; // rdx
  int v9; // r8d
  LONG x; // ecx
  LONG v11; // ebx
  LONG y; // eax
  int v13; // ecx
  int *v14; // r9
  int v15; // r8d
  LONG v16; // ecx
  int v17; // ecx
  unsigned __int64 v18; // r10
  int v19; // eax

  v5 = 0;
  *a5 = a2;
  if ( a3 )
  {
    v8 = (int *)*((_QWORD *)this + 31);
    if ( a2.y < v8[1] + 6 || a2.y >= v8[3] - 6 )
    {
      v9 = *v8;
      x = *v8;
      if ( a2.x > *v8 )
        x = a2.x;
      if ( x >= v8[2] - 1 )
      {
        v9 = v8[2] - 1;
      }
      else if ( a2.x > v9 )
      {
        v9 = a2.x;
      }
      a5->x = v9;
      v8 = (int *)*((_QWORD *)this + 31);
    }
    else
    {
      v9 = a2.x;
    }
    if ( a2.x < *v8 + 6 || a2.x >= v8[2] - 6 )
    {
      v11 = v8[1];
      y = a2.y;
      v13 = v8[3] - 1;
      if ( a2.y <= v11 )
        y = v8[1];
      if ( y < v13 )
      {
        v13 = a2.y;
        if ( a2.y <= v11 )
          v13 = v8[1];
      }
      a5->y = v13;
    }
    v5 = __PAIR64__(a5->y, v9) != a2;
  }
  if ( a4 && !v5 )
  {
    v14 = (int *)*((_QWORD *)this + 31);
    v15 = *v14;
    if ( (int)abs32(a2.x - *v14) < 6 || (int)abs32(a2.x - v14[2]) < 6 )
    {
      v16 = *v14;
      if ( a2.x > v15 )
        v16 = a2.x;
      if ( v16 >= v14[2] - 1 )
      {
        v15 = v14[2] - 1;
      }
      else if ( a2.x > v15 )
      {
        v15 = a2.x;
      }
      a5->x = v15;
      v14 = (int *)*((_QWORD *)this + 31);
    }
    v17 = v14[1];
    v18 = HIDWORD(*(unsigned __int64 *)&a2);
    if ( (int)abs32(v18 - v17) < 6 || (int)abs32(v18 - v14[3]) < 6 )
    {
      v19 = v18;
      if ( (int)v18 <= v17 )
        v19 = v14[1];
      if ( v19 >= v14[3] - 1 )
      {
        LODWORD(v18) = v14[3] - 1;
      }
      else if ( (int)v18 <= v17 )
      {
        LODWORD(v18) = v14[1];
      }
      a5->y = v18;
    }
  }
}
