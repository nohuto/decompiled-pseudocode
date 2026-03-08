/*
 * XREFs of ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180013B58
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180013830 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall D2DMatrixHelper::TransformRectConservative(
        D2DMatrixHelper *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  float bottom; // xmm3_4
  float v7; // xmm4_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  int v11; // xmm0_4
  float *v12; // rcx
  float v13; // xmm6_4
  float v14; // xmm3_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  int v18; // [rsp+0h] [rbp-38h]
  _DWORD v19[2]; // [rsp+4h] [rbp-34h] BYREF
  int v20; // [rsp+Ch] [rbp-2Ch]
  float v21; // [rsp+10h] [rbp-28h]
  int v22; // [rsp+14h] [rbp-24h]
  __int64 v23; // [rsp+18h] [rbp-20h] BYREF

  v4 = *((float *)this + 1);
  v5 = *(float *)this;
  bottom = a2->bottom;
  v7 = (float)(a2->right * v4) + (float)(a2->left * *(float *)this);
  *(float *)v19 = v4;
  v8 = a2->top * v5;
  v9 = v7 + a2[1].left;
  v20 = *((_DWORD *)this + 3);
  v10 = (float)(bottom * v4) + v8;
  v21 = v5;
  v11 = *((_DWORD *)this + 2);
  v12 = (float *)v19;
  v18 = v11;
  v19[1] = v11;
  v13 = v9;
  v22 = v20;
  v14 = v10 + a2[1].top;
  v15 = v14;
  do
  {
    v16 = (float)((float)(a2->left * *(v12 - 1)) + (float)(a2->right * *v12)) + a2[1].left;
    v17 = (float)((float)(a2->top * *(v12 - 1)) + (float)(a2->bottom * *v12)) + a2[1].top;
    if ( v16 <= v9 )
      v9 = (float)((float)(a2->left * *(v12 - 1)) + (float)(a2->right * *v12)) + a2[1].left;
    if ( v17 <= v14 )
      v14 = (float)((float)(a2->top * *(v12 - 1)) + (float)(a2->bottom * *v12)) + a2[1].top;
    if ( v13 <= v16 )
      v13 = (float)((float)(a2->left * *(v12 - 1)) + (float)(a2->right * *v12)) + a2[1].left;
    if ( v15 <= v17 )
      v15 = (float)((float)(a2->top * *(v12 - 1)) + (float)(a2->bottom * *v12)) + a2[1].top;
    v12 += 2;
  }
  while ( v12 - 1 != (float *)&v23 );
  a3->m11 = v9;
  a3->m12 = v14;
  a3->m21 = v13;
  a3->m22 = v15;
}
