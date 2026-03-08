/*
 * XREFs of ?AddDirtyRegion@CBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1800E19B0
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z @ 0x18011D8D0 (-AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@A@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@FA@EAAXAEBVCRegion@@@Z @ 0x18011D8F0 (-AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@FA@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@HA@EAAXAEBVCRegion@@@Z @ 0x18011D910 (-AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@HA@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@FI@EAAXAEBVCRegion@@@Z @ 0x18011DFF0 (-AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@FI@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@HI@EAAXAEBVCRegion@@@Z @ 0x18011E010 (-AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@HI@EAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802AD49C (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802AE74C (-AddDirtyRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z @ 0x1802AFA5C (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAXAEBVCRegion@@@Z.c)
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
