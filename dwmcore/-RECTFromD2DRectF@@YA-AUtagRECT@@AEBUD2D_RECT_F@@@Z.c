/*
 * XREFs of ?RECTFromD2DRectF@@YA?AUtagRECT@@AEBUD2D_RECT_F@@@Z @ 0x180013A78
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180013830 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x1802B5EC8 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall RECTFromD2DRectF(struct tagRECT *__return_ptr retstr, const struct D2D_RECT_F *a2)
{
  float v2; // xmm0_4
  float v3; // eax
  double top; // xmm0_8
  int v5; // eax
  double right; // xmm0_8
  int v7; // eax
  float v9; // [rsp+8h] [rbp+8h]

  v2 = a2->left + 6291456.25;
  v3 = v2;
  top = a2->top;
  retstr->left = (int)(LODWORD(v3) << 10) >> 11;
  *(float *)&top = top + 6291456.25;
  v5 = LODWORD(top);
  right = a2->right;
  retstr->top = v5 << 10 >> 11;
  *(float *)&right = right + 6291456.25;
  v7 = LODWORD(right);
  *(FLOAT *)&right = a2->bottom;
  retstr->right = v7 << 10 >> 11;
  v9 = *(float *)&right + 6291456.25;
  retstr->bottom = (int)(LODWORD(v9) << 10) >> 11;
  return retstr;
}
