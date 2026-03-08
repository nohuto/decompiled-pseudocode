/*
 * XREFs of ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x1800F6154
 * Callers:
 *     ?HitTest@CCompositionSkyBoxBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800F610C (-HitTest@CCompositionSkyBoxBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18012E634 (-HitTest@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180220508 (-HitTest@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18024A0F4 (-HitTest@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Contains(const struct D2D_RECT_F *a1, const struct D2D_POINT_2F *a2)
{
  float y; // xmm1_4
  bool result; // al

  result = 0;
  if ( a2->x >= a1->left && a1->right > a2->x )
  {
    y = a2->y;
    if ( y >= a1->top && a1->bottom > y )
      return 1;
  }
  return result;
}
