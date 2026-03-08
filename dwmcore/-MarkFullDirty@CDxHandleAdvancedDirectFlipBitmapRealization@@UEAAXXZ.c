/*
 * XREFs of ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x1802AED4C
 * Callers:
 *     ?MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAXXZ @ 0x18011E9F0 (-MarkFullDirty@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAXXZ.c)
 * Callees:
 *     ?ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x1802AED78 (-ResetOverdrawRegion@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::MarkFullDirty(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  CDxHandleAdvancedDirectFlipBitmapRealization::ResetOverdrawRegion((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 512));
  CBitmapRealization::MarkFullDirty((CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 136));
}
