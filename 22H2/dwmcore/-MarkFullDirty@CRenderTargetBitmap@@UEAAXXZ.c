/*
 * XREFs of ?MarkFullDirty@CRenderTargetBitmap@@UEAAXXZ @ 0x18029DC90
 * Callers:
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXXZ @ 0x180122920 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXXZ @ 0x1801235E0 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXXZ.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXXZ @ 0x180123AE0 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXXZ.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXXZ @ 0x180123E20 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::MarkFullDirty(CRenderTargetBitmap *this)
{
  CD2DBitmapCache::MarkFullInvalid((CRenderTargetBitmap *)((char *)this - 240));
}
