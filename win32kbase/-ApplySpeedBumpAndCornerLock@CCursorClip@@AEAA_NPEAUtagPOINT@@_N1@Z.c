bool __fastcall CCursorClip::ApplySpeedBumpAndCornerLock(CCursorClip *this, struct tagPOINT *a2, char a3, char a4)
{
  __int64 v4; // r10
  bool result; // al
  LONG *v9; // r9
  int v10; // ebx
  LONG v11; // r8d
  int v12; // ecx
  LONG v13; // eax
  LONG v14; // ecx
  int *v15; // rbx
  int x; // r8d
  int v17; // ecx
  int v18; // r9d
  LONG v19; // eax
  LONG v20; // edx

  v4 = (__int64)*a2;
  result = 0;
  if ( a3 )
  {
    v9 = (LONG *)*((_QWORD *)this + 31);
    v10 = v9[1];
    if ( SHIDWORD(v4) < v10 + 6 || SHIDWORD(v4) >= v9[3] - 6 )
    {
      v11 = *v9;
      v12 = *v9;
      if ( (int)v4 > *v9 )
        v12 = (int)*a2;
      if ( v12 >= v9[2] - 1 )
      {
        v11 = v9[2] - 1;
      }
      else if ( (int)v4 > v11 )
      {
        v11 = (LONG)*a2;
      }
      a2->x = v11;
    }
    if ( (int)v4 < *v9 + 6 || (int)v4 >= v9[2] - 6 )
    {
      v13 = HIDWORD(v4);
      v14 = v9[3] - 1;
      if ( SHIDWORD(v4) <= v10 )
        v13 = v10;
      if ( v13 < v14 )
      {
        v14 = HIDWORD(v4);
        if ( SHIDWORD(v4) <= v10 )
          v14 = v10;
      }
      a2->y = v14;
    }
    result = *a2 != v4;
  }
  if ( a4 && !result )
  {
    v15 = (int *)*((_QWORD *)this + 31);
    x = *v15;
    if ( (int)abs32(v4 - *v15) < 6 || (int)abs32(v4 - v15[2]) < 6 )
    {
      v17 = *v15;
      if ( (int)v4 > x )
        v17 = v4;
      if ( v17 >= v15[2] - 1 )
      {
        x = v15[2] - 1;
      }
      else if ( (int)v4 > x )
      {
        x = v4;
      }
      a2->x = x;
    }
    else
    {
      x = a2->x;
    }
    v18 = v15[1];
    if ( (int)abs32(HIDWORD(v4) - v18) < 6 || (int)abs32(HIDWORD(v4) - v15[3]) < 6 )
    {
      v19 = HIDWORD(v4);
      v20 = v15[3] - 1;
      if ( SHIDWORD(v4) <= v18 )
        v19 = v15[1];
      if ( v19 < v20 )
      {
        v20 = HIDWORD(v4);
        if ( SHIDWORD(v4) <= v18 )
          v20 = v15[1];
      }
      a2->y = v20;
    }
    return __PAIR64__(a2->y, x) != v4;
  }
  return result;
}
