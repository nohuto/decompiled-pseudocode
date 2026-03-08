/*
 * XREFs of ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800E711C
 * Callers:
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x18011DBB0 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FA@EAAXXZ @ 0x18011DBD0 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FA@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HA@EAAXXZ @ 0x18011DBF0 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HA@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@JA@EAAXXZ @ 0x18011DF50 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@JA@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FI@EAAXXZ @ 0x18011E3B0 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FI@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HI@EAAXXZ @ 0x18011E3D0 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HI@EAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x1802AED4C (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1802AFDE4 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x1802B0F40 (-MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800E7148 (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 */

void __fastcall CBitmapRealization::MarkFullDirty(CBitmapRealization *this)
{
  CD2DBitmapCache *v1; // rbx

  v1 = (CBitmapRealization *)((char *)this - 376);
  CBitmapRealization::InvalidateDecodeBitmap((CBitmapRealization *)((char *)this - 376), 0);
  CD2DBitmapCache::MarkFullInvalid(v1);
}
