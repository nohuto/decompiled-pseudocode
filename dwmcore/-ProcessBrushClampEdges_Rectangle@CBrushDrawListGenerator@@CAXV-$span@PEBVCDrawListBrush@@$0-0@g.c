/*
 * XREFs of ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x1800D438C
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180060AB0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800D45A4 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

char __fastcall CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(
        __int64 *a1,
        float *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  __int64 *v3; // rbx
  int v4; // esi
  _DWORD *p_m11; // r15
  __int64 v7; // rax
  __int64 *i; // r14
  __int64 v9; // rbp
  float v10; // xmm6_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  float v15; // xmm6_4
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  float v19; // xmm0_4
  int v20; // edx

  v3 = (__int64 *)a1[1];
  v4 = 0;
  p_m11 = (_DWORD *)&a3->m11;
  v7 = *a1;
  for ( i = &v3[*a1]; v3 != i; ++v3 )
  {
    v9 = *v3;
    if ( *v3
      && *(_BYTE *)(v9 + 52)
      && (COERCE_FLOAT(*(_DWORD *)(v9 + 12) & _xmm) < 0.000081380211
       && COERCE_FLOAT(*(_DWORD *)(v9 + 16) & _xmm) < 0.000081380211
       || COERCE_FLOAT(*(_DWORD *)(v9 + 8) & _xmm) < 0.000081380211
       && COERCE_FLOAT(*(_DWORD *)(v9 + 20) & _xmm) < 0.000081380211) )
    {
      LODWORD(v7) = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
                      (D2DMatrixHelper *)*(unsigned int *)(v9 + 48),
                      v9 + 8,
                      a3);
      a3 = (const struct D2D_MATRIX_3X2_F *)(unsigned int)v7;
      if ( (_DWORD)v7 != v4 )
      {
        v10 = (float)((float)(*(float *)(v9 + 36) * *(float *)(v9 + 20))
                    + (float)(*(float *)(v9 + 32) * *(float *)(v9 + 12)))
            + *(float *)(v9 + 28);
        v11 = (float)((float)(*(float *)(v9 + 36) * *(float *)(v9 + 16))
                    + (float)(*(float *)(v9 + 32) * *(float *)(v9 + 8)))
            + *(float *)(v9 + 24);
        v12 = (float)((float)(*(float *)(v9 + 44) * *(float *)(v9 + 16))
                    + (float)(*(float *)(v9 + 40) * *(float *)(v9 + 8)))
            + *(float *)(v9 + 24);
        v13 = (float)((float)(*(float *)(v9 + 44) * *(float *)(v9 + 20))
                    + (float)(*(float *)(v9 + 40) * *(float *)(v9 + 12)))
            + *(float *)(v9 + 28);
        v14 = fminf(v10, v13);
        v15 = fmaxf(v10, v13);
        v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*a2 - fminf(v11, v12)) & _xmm) <= 0.0000011920929 ? 0x3000000 : 0;
        v17 = v16 | 0x300;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2[2] - fmaxf(v11, v12)) & _xmm) > 0.0000011920929 )
          v17 = v16;
        v18 = v17 | 3;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2[1] - v14) & _xmm) > 0.0000011920929 )
          v18 = v17;
        LODWORD(v19) = COERCE_UNSIGNED_INT(a2[3] - v15) & _xmm;
        LOBYTE(v7) = v19 <= 0.0000011920929;
        v20 = v18 | 0x30000;
        if ( v19 > 0.0000011920929 )
          v20 = v18;
        if ( v20 )
        {
          v4 |= (unsigned int)a3 & v20;
          if ( v4 == 50529027 )
            break;
        }
      }
    }
  }
  *p_m11 = v4;
  return v7;
}
