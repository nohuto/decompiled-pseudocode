char __fastcall DCEInverseTransform(
        const struct tagRECT *a1,
        const struct _D3DVERTEX *a2,
        const struct _SUBPIXELS *a3,
        struct tagPOINT *a4)
{
  float v4; // xmm0_4
  float x; // xmm1_4
  const struct tagRECT *v6; // r10
  float v7; // xmm3_4
  float v8; // xmm7_4
  float y; // xmm8_4
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm10_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  float v20; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm4_4
  float v24; // xmm3_4

  x = a2->x;
  v6 = a1;
  v7 = a2[1].x - a2->x;
  v8 = a2[2].x - a2->x;
  y = a2->y;
  v10 = a2[1].y - y;
  v11 = a2[2].y - y;
  if ( a3 )
    FixedPointSubPixel(*(int *)a3);
  else
    v4 = 0.0;
  v12 = (float)((float)a4->x + v4) - x;
  if ( a3 )
    FixedPointSubPixel(*((int *)a3 + 1));
  else
    v4 = 0.0;
  LODWORD(v13) = LODWORD(v7) & _xmm;
  v14 = (float)((float)a4->y + v4) - y;
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) <= 0.00000011920929 )
  {
    v15 = v7;
    v16 = v10;
    v7 = v8;
    v10 = v11;
    v8 = v15;
    v11 = v16;
  }
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) <= 0.00000011920929 )
    return 0;
  v17 = (float)(v11 * v7) - (float)(v8 * v10);
  if ( COERCE_FLOAT(LODWORD(v17) & _xmm) <= 0.00000011920929 )
    return 0;
  v18 = (float)((float)(v14 * v7) - (float)(v12 * v10)) / v17;
  v19 = (float)(v12 - (float)(v18 * v8)) / v7;
  if ( v13 <= 0.00000011920929 )
  {
    v20 = v19;
    v19 = v18;
    v18 = v20;
  }
  v21 = (float)((float)((float)((float)((float)(a2[1].tu - a2->tu) * v19) + a2->tu)
                      + (float)((float)(a2[2].tu - a2->tu) * v18))
              * (float)(v6->right - v6->left))
      + (float)v6->left;
  v22 = (float)((float)((float)((float)((float)(a2[1].tv - a2->tv) * v19) + a2->tv)
                      + (float)((float)(a2[2].tv - a2->tv) * v18))
              * (float)(v6->bottom - v6->top))
      + (float)v6->top;
  if ( v21 < 0.0 )
    v23 = v21 - 0.5;
  else
    v23 = v21 + 0.5;
  a4->x = (int)v23;
  if ( v22 < 0.0 )
    v24 = v22 - 0.5;
  else
    v24 = v22 + 0.5;
  a4->y = (int)v24;
  return 1;
}
