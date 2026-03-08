/*
 * XREFs of ?IsOpaqueRect@CBlurredWallpaperBackdropBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1801056E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBlurredWallpaperBackdropBrush::IsOpaqueRect(
        CBlurredWallpaperBackdropBrush *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_RECT_F *a3)
{
  FLOAT width; // xmm0_4
  bool result; // al
  FLOAT height; // xmm1_4

  width = a2->width;
  result = 1;
  height = a2->height;
  a3->left = 0.0;
  a3->top = 0.0;
  a3->right = width;
  a3->bottom = height;
  return result;
}
