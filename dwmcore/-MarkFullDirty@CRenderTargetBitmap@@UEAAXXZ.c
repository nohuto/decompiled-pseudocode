/*
 * XREFs of ?MarkFullDirty@CRenderTargetBitmap@@UEAAXXZ @ 0x18029A510
 * Callers:
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXXZ @ 0x18011E770 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXXZ @ 0x18011F430 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXXZ.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXXZ @ 0x18011F930 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXXZ.c)
 *     ?MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXXZ @ 0x18011FC70 (-MarkFullDirty@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::MarkFullDirty(CRenderTargetBitmap *this)
{
  CD2DBitmapCache::MarkFullInvalid((CRenderTargetBitmap *)((char *)this - 240));
}
