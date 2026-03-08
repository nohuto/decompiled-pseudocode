/*
 * XREFs of ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800E7148
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800149C0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800E711C (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x1802AF6A0 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ @ 0x1802B0F40 (-MarkFullDirty@CDxHandleYUVBitmapRealization@@UEAAXXZ.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802B0FC0 (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802B1068 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18003C8F4 (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 */

void __fastcall CBitmapRealization::InvalidateDecodeBitmap(CBitmapRealization *this, char a2)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)this + 36);
  if ( v2 )
  {
    if ( a2 )
      CRenderTargetBitmap::ReleaseDeviceTarget(*((CRenderTargetBitmap **)this + 36));
    *(_BYTE *)(v2 + 152) = 0;
  }
}
