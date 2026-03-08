/*
 * XREFs of ?HitTest@CCompositionSkyBoxBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800F610C
 * Callers:
 *     ?HitTest@CColorBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180117990 (-HitTest@CColorBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x1800F6154 (-Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::HitTest(
        CCompositionSkyBoxBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  bool v6; // al
  bool *v7; // r9
  struct D2D_RECT_F v9; // [rsp+20h] [rbp-18h] BYREF

  width = a2->width;
  height = a2->height;
  v9.left = 0.0;
  v9.top = 0.0;
  v9.right = width;
  v9.bottom = height;
  v6 = Contains(&v9, a3);
  *v7 = v6;
  return 0LL;
}
