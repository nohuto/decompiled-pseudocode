void __fastcall D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
        D2DMatrixHelper *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v7; // xmm6_4

  v4 = (float)((float)(a2->left * *(float *)this) + (float)(a2->right * *((float *)this + 1))) + a2[1].left;
  v5 = (float)((float)(a2->top * *(float *)this) + (float)(a2->bottom * *((float *)this + 1))) + a2[1].top;
  v6 = (float)((float)(a2->top * *((float *)this + 2)) + (float)(a2->bottom * *((float *)this + 3))) + a2[1].top;
  v7 = (float)((float)(a2->left * *((float *)this + 2)) + (float)(a2->right * *((float *)this + 3))) + a2[1].left;
  a3->m11 = fminf(v4, v7);
  a3->m12 = fminf(v5, v6);
  a3->m21 = fmaxf(v4, v7);
  a3->m22 = fmaxf(v5, v6);
}
