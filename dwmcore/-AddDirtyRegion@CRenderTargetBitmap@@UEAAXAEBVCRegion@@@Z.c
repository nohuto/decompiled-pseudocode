/*
 * XREFs of ?AddDirtyRegion@CRenderTargetBitmap@@UEAAXAEBVCRegion@@@Z @ 0x1800E199C
 * Callers:
 *     ?AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x18011E590 (-AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXAEBVCRegion@@@Z @ 0x18011F250 (-AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXAEBVCRegion@@@Z @ 0x18011F6D0 (-AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXAEBVCRegion@@@Z @ 0x18011FAB0 (-AddDirtyRegion@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::AddDirtyRegion(CRenderTargetBitmap *this, const struct CRegion *a2)
{
  CD2DBitmapCache::AddInvalidRegion((CRenderTargetBitmap *)((char *)this - 240), a2);
}
