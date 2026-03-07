__int64 __fastcall WIDEPENOBJ::bPenFlatten(struct _POINTFIX **this, struct _POINTFIX *a2)
{
  struct _RECTFX *v4; // r8
  struct _POINTFIX *v5; // r14
  int i; // esi
  struct _POINTFIX *v7; // rdx
  struct _POINTFIX *v8; // r15
  bool v9; // zf
  int v10; // eax
  __int64 result; // rax
  _BYTE v12[168]; // [rsp+20h] [rbp-D8h] BYREF
  int v13; // [rsp+C8h] [rbp-30h]

  if ( !(unsigned int)WIDEPATHOBJ::bGrowPath((WIDEPATHOBJ *)this) )
    return 0LL;
  *(_DWORD *)(*(_QWORD *)&this[1][5] + 16LL) = 1;
  v5 = this[16];
  --this[17];
  this[16] = v5 + 1;
  v5[1] = *a2;
  ++this[16];
  for ( i = 0; i <= 1; ++i )
  {
    BEZIER::vInit((BEZIER *)v12, a2, v4, gpeqErrorLow);
    do
    {
      v7 = this[16];
      if ( v7 > this[17] )
      {
        v8 = v7 - 2;
        *(_DWORD *)(*(_QWORD *)&this[1][5] + 20LL) = ((__int64)&v7[-3] - *(_QWORD *)&this[1][5]) >> 3;
        *(_QWORD *)(*(_QWORD *)&this[1][3] + 8LL) = *(_QWORD *)&this[1][5]
                                                  + 24LL
                                                  + 8LL * *(unsigned int *)(*(_QWORD *)&this[1][5] + 20LL);
        if ( !(unsigned int)WIDEPATHOBJ::bGrowPath((WIDEPATHOBJ *)this) )
          return 0LL;
        *(_DWORD *)(*(_QWORD *)&this[1][5] + 16LL) = 0;
        *this[16]++ = *v8;
        *this[16] = v8[1];
        --this[17];
        v7 = this[16] + 1;
      }
      v9 = v13 == 0;
      this[16] = v7 + 1;
      if ( v9 )
        v10 = BEZIER64::bNext((BEZIER64 *)v12, v7);
      else
        v10 = BEZIER32::bNext((BEZIER32 *)v12, v7);
    }
    while ( v10 );
    a2 += 3;
  }
  v5->x = -this[16][-2].x;
  result = 1LL;
  v5->y = -this[16][-2].y;
  *(_DWORD *)(*(_QWORD *)&this[1][5] + 16LL) |= 2u;
  *(_DWORD *)(*(_QWORD *)&this[1][5] + 20LL) = ((__int64)&this[16][-3] - *(_QWORD *)&this[1][5]) >> 3;
  return result;
}
