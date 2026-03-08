/*
 * XREFs of ?BeginStatsInstance@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x18000D4C4
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000CC70 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::BeginStatsInstance(CDrawingContext *this, struct IBitmapResource *a2)
{
  (*(void (__fastcall **)(struct IBitmapResource *, unsigned __int64))(*(_QWORD *)a2 + 32LL))(
    a2,
    ((unsigned __int64)this + 164) & -(__int64)(*((_BYTE *)this + 192) != 0));
}
