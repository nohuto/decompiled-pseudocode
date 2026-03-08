/*
 * XREFs of ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801D3B28
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18000A894 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800B3440 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?GetTransparentBlackEffectInput@CDrawingContext@@QEBA?AUEffectInput@@AEBUD2D_SIZE_F@@@Z @ 0x1801D2CE0 (-GetTransparentBlackEffectInput@CDrawingContext@@QEBA-AUEffectInput@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::SetEffectInputToTransparentBlack(
        CD3DDevice **this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  *((_WORD *)a3 + 22) = 257;
  *((_QWORD *)a3 + 3) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_QWORD *)a3 + 6) = 1065353216LL;
  *((_QWORD *)a3 + 8) = 1065353216LL;
  *((_QWORD *)a3 + 7) = 0LL;
  *((_QWORD *)a3 + 9) = 0LL;
  *((_DWORD *)a3 + 20) = 1065353216;
  *((float *)a3 + 12) = 1.0 / a2->width;
  *((float *)a3 + 16) = 1.0 / a2->height;
  *(_QWORD *)((char *)a3 + 84) = 0LL;
  *((_DWORD *)a3 + 23) = 1065353216;
  *((_DWORD *)a3 + 24) = 1065353216;
  return CDrawListBitmap::SetTransparent(a3, this);
}
