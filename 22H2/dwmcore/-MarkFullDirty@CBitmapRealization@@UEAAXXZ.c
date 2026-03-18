/*
 * XREFs of ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800E7CEC
 * Callers:
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x180121D60 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FA@EAAXXZ @ 0x180121D80 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FA@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HA@EAAXXZ @ 0x180121DA0 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HA@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@JA@EAAXXZ @ 0x180122100 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@JA@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FI@EAAXXZ @ 0x180122560 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@FI@EAAXXZ.c)
 *     ?MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HI@EAAXXZ @ 0x180122580 (-MarkFullDirty@CBitmapRealization@@$4PPPPPPPM@HI@EAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x1802B24CC (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1802B3564 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x1802B46C0 (-MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800E7D18 (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 */

void __fastcall CBitmapRealization::MarkFullDirty(CBitmapRealization *this)
{
  CD2DBitmapCache *v1; // rbx

  v1 = (CBitmapRealization *)((char *)this - 376);
  CBitmapRealization::InvalidateDecodeBitmap((CBitmapRealization *)((char *)this - 376), 0);
  CD2DBitmapCache::MarkFullInvalid(v1);
}
