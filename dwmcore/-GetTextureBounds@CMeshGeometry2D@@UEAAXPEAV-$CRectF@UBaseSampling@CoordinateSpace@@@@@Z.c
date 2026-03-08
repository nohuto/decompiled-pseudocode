/*
 * XREFs of ?GetTextureBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@UBaseSampling@CoordinateSpace@@@@@Z @ 0x180255450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMeshGeometry2D::GetTextureBounds(__int64 a1, _OWORD *a2)
{
  double *v3; // r8
  unsigned __int64 v4; // rdx
  double v5; // xmm1_8
  double v6; // xmm2_8
  double v7; // xmm3_8
  double v8; // xmm4_8
  double *v9; // r8
  __int64 v10; // rdx
  double v11; // xmm0_8
  float v12; // xmm0_4
  float v13; // xmm5_4
  float v14; // xmm3_4
  float v15; // xmm2_4

  if ( (*(_BYTE *)(a1 + 160) & 2) != 0 )
  {
    v3 = *(double **)(a1 + 112);
    v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 2);
    if ( v4 >= (__int64)(*(_QWORD *)(a1 + 120) - (_QWORD)v3) >> 4 )
      LODWORD(v4) = (__int64)(*(_QWORD *)(a1 + 120) - (_QWORD)v3) >> 4;
    if ( (_DWORD)v4 )
    {
      v5 = *v3;
      v6 = v3[1];
      v7 = *v3;
      v8 = v6;
      if ( (unsigned int)v4 > 1 )
      {
        v9 = v3 + 2;
        v10 = (unsigned int)(v4 - 1);
        do
        {
          if ( *v9 <= v7 )
            v7 = *v9;
          if ( v5 <= *v9 )
            v5 = *v9;
          v11 = v9[1];
          if ( v11 <= v8 )
            v8 = v9[1];
          if ( v6 <= v11 )
            v6 = v9[1];
          v9 += 2;
          --v10;
        }
        while ( v10 );
      }
      v12 = v7;
      v13 = v6;
      v14 = v5;
      v15 = v8;
    }
    else
    {
      v12 = 0.0;
      v13 = 0.0;
      v14 = 0.0;
      v15 = 0.0;
    }
    *(float *)(a1 + 184) = v15;
    *(float *)(a1 + 188) = v14;
    *(float *)(a1 + 192) = v13;
    *(float *)(a1 + 180) = v12;
    *(_DWORD *)(a1 + 160) &= ~2u;
  }
  *a2 = *(_OWORD *)(a1 + 180);
}
