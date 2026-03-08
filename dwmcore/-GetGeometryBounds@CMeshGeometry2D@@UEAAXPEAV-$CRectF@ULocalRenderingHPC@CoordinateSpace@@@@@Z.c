/*
 * XREFs of ?GetGeometryBounds@CMeshGeometry2D@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x1802552C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMeshGeometry2D::GetGeometryBounds(__int64 a1, _OWORD *a2)
{
  float *v3; // r8
  unsigned __int64 v4; // rdx
  float v5; // xmm3_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm4_4
  float *v9; // r8
  __int64 v10; // rdx
  float v11; // xmm0_4

  if ( (*(_BYTE *)(a1 + 160) & 1) != 0 )
  {
    v3 = *(float **)(a1 + 88);
    v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*(_QWORD *)(a1 + 96) - (_QWORD)v3) >> 2);
    if ( v4 >= (__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112)) >> 4 )
      LODWORD(v4) = (__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 112)) >> 4;
    if ( (_DWORD)v4 )
    {
      v5 = *v3;
      v6 = v3[1];
      v7 = *v3;
      v8 = v6;
      if ( (unsigned int)v4 > 1 )
      {
        v9 = v3 + 3;
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
          v9 += 3;
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      v7 = 0.0;
      v6 = 0.0;
      v8 = 0.0;
      v5 = 0.0;
    }
    *(float *)(a1 + 172) = v5;
    *(float *)(a1 + 168) = v8;
    *(float *)(a1 + 176) = v6;
    *(float *)(a1 + 164) = v7;
    *(_DWORD *)(a1 + 160) &= ~1u;
  }
  *a2 = *(_OWORD *)(a1 + 164);
}
