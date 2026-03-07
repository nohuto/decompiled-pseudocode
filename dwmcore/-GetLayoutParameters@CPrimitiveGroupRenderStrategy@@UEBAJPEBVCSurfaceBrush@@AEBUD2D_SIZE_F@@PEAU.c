__int64 __fastcall CPrimitiveGroupRenderStrategy::GetLayoutParameters(
        CPrimitiveGroupRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5,
        struct D2D_MATRIX_3X2_F *a6)
{
  FLOAT v6; // xmm0_4
  FLOAT v7; // xmm1_4
  FLOAT v8; // xmm2_4
  FLOAT v9; // xmm0_4
  FLOAT v10; // xmm3_4
  FLOAT v11; // xmm1_4
  __int64 result; // rax

  v6 = *((float *)a2 + 41) - *((float *)a2 + 39);
  a4->width = *((float *)a2 + 40) - *((float *)a2 + 38);
  a4->height = v6;
  v7 = *((float *)a2 + 39);
  v8 = *((float *)a2 + 40);
  v9 = *((float *)a2 + 41);
  a5->left = *((FLOAT *)a2 + 38);
  a5->top = v7;
  a5->right = v8;
  a5->bottom = v9;
  LODWORD(v10) = *((_DWORD *)a2 + 38) ^ _xmm;
  LODWORD(v11) = *((_DWORD *)a2 + 39) ^ _xmm;
  *(_QWORD *)&a6->m11 = 1065353216LL;
  a6->m21 = 0.0;
  a6->m22 = 1.0;
  result = 0LL;
  a6->dx = v10;
  a6->dy = v11;
  return result;
}
