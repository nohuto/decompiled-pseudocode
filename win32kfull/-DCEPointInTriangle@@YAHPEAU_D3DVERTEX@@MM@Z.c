__int64 __fastcall DCEPointInTriangle(struct _D3DVERTEX *a1, D3DVALUE a2, float a3)
{
  float y; // xmm3_4
  char v4; // dl
  int v6; // r8d
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // r10
  __int64 v13; // r9
  float v14; // xmm0_4
  float v15; // xmm6_4
  float v16; // xmm3_4
  float v17; // xmm7_4

  y = a1->y;
  v4 = 0;
  if ( y == a1[1].y && y == a3 && a2 >= a1->x && a1[1].x >= a2 )
    return 1LL;
  v6 = -1;
  v7 = 3LL;
  if ( (float)(y - a3) >= 0.0 )
    v6 = 1;
  v8 = 0LL;
  do
  {
    v9 = 0LL;
    v10 = v8 + 1;
    if ( v8 + 1 < 3 )
      v9 = v8 + 1;
    v11 = -1;
    v12 = v9;
    if ( (float)(a1[v12].y - a3) >= 0.0 )
      v11 = 1;
    if ( v6 != v11 )
    {
      v13 = v8;
      v14 = a1[v12].x - a2;
      v15 = a1[v13].x - a2;
      if ( v15 <= 0.0 )
      {
        if ( v14 <= 0.0 )
        {
LABEL_21:
          v6 = v11;
          goto LABEL_22;
        }
      }
      else if ( v14 > 0.0 )
      {
LABEL_20:
        ++v4;
        goto LABEL_21;
      }
      v16 = a1[v13].y;
      v17 = a1[v12].y - v16;
      if ( COERCE_FLOAT(LODWORD(v17) & _xmm) <= 0.00000011920929
        || (float)(v15 - (float)((float)((float)(a1[v12].x - a1[v13].x) * (float)(v16 - a3)) / v17)) <= 0.0 )
      {
        goto LABEL_21;
      }
      goto LABEL_20;
    }
LABEL_22:
    v8 = v10;
    --v7;
  }
  while ( v7 );
  return v4 & 1;
}
