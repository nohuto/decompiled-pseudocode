/*
 * XREFs of ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180264ABC
 * Callers:
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x1800F8750 (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x180043FEC (-AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x18019B718 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::AddDirtyRegion(
        CDxHandleStereoBitmapRealization *this,
        const struct CRegion *a2)
{
  CBitmapRealization::AddDirtyRegion((CDxHandleStereoBitmapRealization *)((char *)this - 192), a2);
  if ( *((_QWORD *)this - 21) )
    CD2DBitmapCache::AddInvalidRegion(
      (CDxHandleStereoBitmapRealization *)((char *)this - 160),
      (const struct FastRegion::Internal::CRgnData **)a2);
}
