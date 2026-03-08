/*
 * XREFs of ?SetTransform@CNineGridBrush@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18012F350
 * Callers:
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z @ 0x1802457FC (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CNineGridBrush::SetTransform(CNineGridBrush *this, const struct D2D_MATRIX_3X2_F *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  *(struct D2D_MATRIX_3X2_F *)((char *)this + 128) = *a2;
  (*(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(v2 + 72))(this, 6LL, this);
}
