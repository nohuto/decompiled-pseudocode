/*
 * XREFs of ?GetStockTransparentBitmap@CD3DDevice@@QEAAPEAVIBitmapRealization@@XZ @ 0x1800199FC
 * Callers:
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z @ 0x180019998 (-SetTransparent@CDrawListBitmap@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x1800A6298 (-ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 * Callees:
 *     ?EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ @ 0x180019A54 (-EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ.c)
 */

struct IBitmapRealization *__fastcall CD3DDevice::GetStockTransparentBitmap(CD3DDevice *this)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = 0LL;
  if ( !*((_QWORD *)this + 135) && (int)CD3DDevice::EnsureBlackBitmapTargets(this) < 0 )
    return 0LL;
  v3 = *((_QWORD *)this + 135);
  if ( v3 )
    return (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v3 + 8) + 16LL) + v3 + 8);
  return (struct IBitmapRealization *)v1;
}
