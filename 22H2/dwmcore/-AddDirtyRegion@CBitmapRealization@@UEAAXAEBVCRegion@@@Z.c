/*
 * XREFs of ?AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1800E2580
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x180121A80 (-AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@FA@EAAXAEBVCRegion@@@Z @ 0x180121AA0 (-AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@FA@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@HA@EAAXAEBVCRegion@@@Z @ 0x180121AC0 (-AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@HA@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@FI@EAAXAEBVCRegion@@@Z @ 0x1801221A0 (-AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@FI@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@HI@EAAXAEBVCRegion@@@Z @ 0x1801221C0 (-AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@HI@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802B0C1C (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802B1ECC (-AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802B31DC (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBitmapRealization::AddDirtyRegion(CBitmapRealization *this, const struct CRegion *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this - 11);
  if ( v2 )
    *(_BYTE *)(v2 + 152) = 0;
  CD2DBitmapCache::AddInvalidRegion((CBitmapRealization *)((char *)this - 376), a2);
}
