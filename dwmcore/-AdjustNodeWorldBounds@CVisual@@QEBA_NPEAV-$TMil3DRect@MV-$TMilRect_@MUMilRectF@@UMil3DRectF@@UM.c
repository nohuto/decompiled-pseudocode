/*
 * XREFs of ?AdjustNodeWorldBounds@CVisual@@QEBA_NPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800DADA4
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisual::AdjustNodeWorldBounds(__int64 a1, float *a2, char a3)
{
  float v3; // xmm4_4
  bool v4; // zf
  _DWORD *v5; // rax
  char v6; // r8
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm1_4

  v3 = a2[2];
  if ( v3 <= *a2 || a2[3] <= a2[1] )
    return 0;
  v4 = a3 == 0;
  v5 = (_DWORD *)(a1 + 96);
  v6 = 1;
  if ( !v4 || (*v5 & 0x200) != 0 )
  {
    v7 = FLOAT_4_0;
  }
  else if ( (*v5 & 0x800) != 0 )
  {
    v7 = FLOAT_0_5;
  }
  else
  {
    v7 = 0.0;
  }
  if ( (*v5 & 0x1000) != 0 )
    v7 = v7 + 0.5;
  if ( v7 != 0.0 )
  {
    v8 = *a2 - v7;
    v9 = a2[1] - v7;
    v10 = v3 + v7;
    v11 = v7 + a2[3];
    *a2 = v8;
    a2[1] = v9;
    v12 = a2[4];
    a2[3] = v11;
    v13 = a2[5] + 0.0;
    a2[2] = v10;
    a2[4] = v12 - 0.0;
    a2[5] = v13;
  }
  return v6;
}
