/*
 * XREFs of ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x18024F7EC
 * Callers:
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800108C0 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180076750 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     <none>
 */

void __fastcall CSurfaceDrawListBrush::SetSnapToPixelsReference(
        CSurfaceDrawListBrush *this,
        const struct D2D_VECTOR_2F *a2)
{
  *((_BYTE *)this + 148) = a2 != 0LL;
  if ( a2 )
    *((struct D2D_VECTOR_2F *)this + 17) = *a2;
}
