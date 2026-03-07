void __fastcall BEZIER64::vInit(struct _RECTFX *this, struct _POINTFIX *a2, struct _RECTFX *a3, const __int64 *a4)
{
  struct _RECTFX *v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax

  this[10].yTop = 0;
  this[10].xLeft = 1;
  HFDBASIS64::vInit((HFDBASIS64 *)&this[4], a2->x, a2[1].x, a2[2].x, a2[3].x);
  HFDBASIS64::vInit((HFDBASIS64 *)&this[6], a2->y, a2[1].y, a2[2].y, a2[3].y);
  *(_QWORD *)&this[8].xLeft = *a4;
  if ( a3 )
  {
    v8 = this + 9;
    this[9] = *a3;
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)&this[8].xRight = v8;
  v9 = *(_QWORD *)&this[7].xLeft;
  v10 = *(_QWORD *)&this[7].xRight;
  while ( 1 )
  {
    v11 = *(_QWORD *)&this[5].xLeft;
    v12 = *(_QWORD *)&this[5].xRight;
    v13 = -v11;
    v14 = -v12;
    if ( v11 >= 0 )
      v13 = *(_QWORD *)&this[5].xLeft;
    if ( v12 >= 0 )
      v14 = *(_QWORD *)&this[5].xRight;
    if ( v13 <= v14 )
    {
      v13 = *(_QWORD *)&this[5].xRight;
      if ( v12 < 0 )
        v13 = -*(_QWORD *)&this[5].xRight;
    }
    if ( v13 <= 0x300000000000LL )
    {
      v15 = -v9;
      v16 = -v10;
      if ( v9 >= 0 )
        v15 = v9;
      if ( v10 >= 0 )
        v16 = v10;
      if ( v15 <= v16 )
      {
        v15 = v10;
        if ( v10 < 0 )
          v15 = -v10;
      }
      if ( v15 <= 0x300000000000LL )
        break;
    }
    v17 = *(_QWORD *)&this[4].xRight;
    this[10].xLeft *= 2;
    v18 = (v11 + v12) >> 3;
    v9 = (v10 + v9) >> 3;
    *(_QWORD *)&this[4].xRight = (v17 - v18) >> 1;
    v19 = (*(_QWORD *)&this[6].xRight - v9) >> 1;
    v10 >>= 2;
    *(_QWORD *)&this[7].xRight = v10;
    *(_QWORD *)&this[5].xLeft = v18;
    *(_QWORD *)&this[5].xRight = v12 >> 2;
    *(_QWORD *)&this[7].xLeft = v9;
    *(_QWORD *)&this[6].xRight = v19;
  }
}
