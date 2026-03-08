/*
 * XREFs of ?GetLayoutParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800F7140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualSurfaceRenderStrategy::GetLayoutParameters(
        CVisualSurfaceRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5,
        struct D2D_MATRIX_3X2_F *a6)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  float v8; // xmm3_4
  float v9; // xmm1_4
  __int64 result; // rax
  struct D2D_RECT_F v11; // [rsp+0h] [rbp-18h]

  v6 = *((_QWORD *)a2 + 13);
  *(_QWORD *)&v11.left = 0LL;
  v7 = *(_BYTE *)(v6 + 200) != 0 ? 8 : 0;
  v8 = *(float *)(v7 + v6 + 88);
  v9 = *(float *)(v7 + v6 + 92);
  a4->width = v8;
  a4->height = v9;
  result = 0LL;
  v11.right = v8 + 0.0;
  v11.bottom = v9 + 0.0;
  *a5 = v11;
  *(_QWORD *)&a6->m11 = 1065353216LL;
  a6->m21 = 0.0;
  *(_QWORD *)&a6->m[1][1] = 1065353216LL;
  a6->dy = 0.0;
  return result;
}
