/*
 * XREFs of ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x1800FBA04
 * Callers:
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800FB7A8 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800B6654 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800D4790 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800D4F0C (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 */

void __fastcall CSurfaceDrawListBrush::ComputeLocalToSourceTransform(CSurfaceDrawListBrush *this, struct Matrix3x3 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r9d
  float *v7; // rax
  float *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-29h] BYREF
  float v10[10]; // [rsp+28h] [rbp-21h] BYREF
  float v11[9]; // [rsp+50h] [rbp+7h] BYREF
  float v12[11]; // [rsp+74h] [rbp+2Bh] BYREF

  *(_DWORD *)a2 = *((_DWORD *)this + 2);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 5) = 0;
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
  *((_DWORD *)a2 + 8) = 1065353216;
  if ( Matrix3x3::TryInvert(a2, a2) )
  {
    if ( *((_BYTE *)this + 144) == (_BYTE)v5 )
    {
      CDrawListBitmap::GetSize((CSurfaceDrawListBrush *)((char *)this + 56), &v9);
      v10[1] = 0.0;
      v10[2] = 0.0;
      v10[3] = 0.0;
      v10[5] = 0.0;
      v10[0] = (float)(int)v9;
      v10[4] = (float)SHIDWORD(v9);
      v10[6] = 0.0 - (float)((float)(int)v9 * 0.0);
      LODWORD(v10[8]) = (_DWORD)FLOAT_1_0;
      v10[7] = 0.0 - (float)((float)SHIDWORD(v9) * 0.0);
      v7 = Matrix3x3::operator*((float *)a2, v11, (float *)this + 21);
      v8 = Matrix3x3::operator*(v7, v12, v10);
      *(_OWORD *)a2 = *(_OWORD *)v8;
      *((_OWORD *)a2 + 1) = *((_OWORD *)v8 + 1);
      *((float *)a2 + 8) = v8[8];
    }
  }
  else
  {
    *(_QWORD *)v4 = 2139095040LL;
    *(_QWORD *)(v4 + 8) = v5;
    *(_QWORD *)(v4 + 16) = 2139095040LL;
    *(_QWORD *)(v4 + 24) = v5;
    *(_DWORD *)(v4 + 32) = v6;
  }
}
