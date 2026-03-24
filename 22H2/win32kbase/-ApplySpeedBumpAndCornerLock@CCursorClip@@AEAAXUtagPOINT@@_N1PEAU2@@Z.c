/*
 * XREFs of ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C01A2894
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C00706DC (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
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
  struct tagPOINT v7; // r10
  LONG x; // ecx
  LONG v10; // r9d
  LONG y; // eax
  int v12; // ecx
  LONG v13; // r8d
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 v16; // r10
  int v17; // eax

  v5 = 0;
  v7 = a2;
  *a5 = a2;
  if ( a3 )
  {
    if ( a2.y < *((_DWORD *)this + 15) + 6 || a2.y >= *((_DWORD *)this + 17) - 6 )
    {
      a2.x = *((_DWORD *)this + 14);
      x = a2.x;
      if ( v7.x > a2.x )
        x = v7.x;
      if ( x >= *((_DWORD *)this + 16) - 1 )
      {
        a2.x = *((_DWORD *)this + 16) - 1;
      }
      else if ( v7.x > a2.x )
      {
        a2.x = v7.x;
      }
      a5->x = a2.x;
    }
    if ( v7.x < *((_DWORD *)this + 14) + 6 || v7.x >= *((_DWORD *)this + 16) - 6 )
    {
      v10 = *((_DWORD *)this + 15);
      y = a2.y;
      v12 = *((_DWORD *)this + 17) - 1;
      if ( a2.y <= v10 )
        y = *((_DWORD *)this + 15);
      if ( y < v12 )
      {
        v12 = a2.y;
        if ( a2.y <= v10 )
          v12 = *((_DWORD *)this + 15);
      }
      a5->y = v12;
    }
    v5 = __PAIR64__(a5->y, v7.x) != a2;
  }
  if ( a4 && !v5 )
  {
    v13 = *((_DWORD *)this + 14);
    if ( (int)abs32(v7.x - v13) < 6 || (int)abs32(v7.x - *((_DWORD *)this + 16)) < 6 )
    {
      v14 = *((_DWORD *)this + 14);
      if ( v7.x > v13 )
        v14 = v7.x;
      if ( v14 >= *((_DWORD *)this + 16) - 1 )
      {
        v13 = *((_DWORD *)this + 16) - 1;
      }
      else if ( v7.x > v13 )
      {
        v13 = v7.x;
      }
      a5->x = v13;
    }
    v15 = *((_DWORD *)this + 15);
    v16 = HIDWORD(*(unsigned __int64 *)&v7);
    if ( (int)abs32(v16 - v15) < 6 || (int)abs32(v16 - *((_DWORD *)this + 17)) < 6 )
    {
      v17 = v16;
      if ( (int)v16 <= v15 )
        v17 = *((_DWORD *)this + 15);
      if ( v17 >= *((_DWORD *)this + 17) - 1 )
      {
        LODWORD(v16) = *((_DWORD *)this + 17) - 1;
      }
      else if ( (int)v16 <= v15 )
      {
        LODWORD(v16) = *((_DWORD *)this + 15);
      }
      a5->y = v16;
    }
  }
}
