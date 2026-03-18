/*
 * XREFs of ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x1802B24CC
 * Callers:
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x180122BA0 (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 * Callees:
 *     ?ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x1802B24F8 (-ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::MarkFullDirty(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  CDxHandleAdvancedDirectFlipBitmapRealization::ResetOverdrawRegion((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 512));
  CBitmapRealization::MarkFullDirty((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 136));
}
