/*
 * XREFs of ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E7E0
 * Callers:
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x180020830 (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18003D934 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18003E810 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A53E0 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800A55E0 (-LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800A5970 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A6E28 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800A712C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A7380 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x1800A7514 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800A8320 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1800B7BC4 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x1800EE034 (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800F81B4 (-Update@CSecondarySysmemBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x180109FB4 (-EnsureBitmapDest@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     _lambda_05398b4549421d065ab404e0dbeea144_::operator() @ 0x18024EBB0 (_lambda_05398b4549421d065ab404e0dbeea144_--operator().c)
 *     IsSolidColorSurface @ 0x180273504 (IsSolidColorSurface.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x18028138C (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x1802814A0 (-HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z.c)
 *     ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x180281640 (-HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x180281958 (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x18028258C (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 *     ?GetResourceSize@CD3DSurface@@MEBAIXZ @ 0x18029C4A0 (-GetResourceSize@CD3DSurface@@MEBAIXZ.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18029F2A0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x1802B0E80 (-EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ.c)
 *     ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802B7B60 (-CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rect.c)
 *     ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802BBB40 (-CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1802BF9F0 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall GetPixelFormatSize(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx

  if ( a1 <= 57 )
  {
    if ( a1 != 57 )
    {
      v6 = a1 - 2;
      if ( !v6 )
        return 0x80;
      v7 = v6 - 4;
      if ( !v7 )
        return 96;
      v8 = v7 - 4;
      if ( !v8 )
        return 64;
      v9 = v8 - 1;
      if ( !v9 )
        return 64;
      v10 = v9 - 5;
      if ( !v10 )
        return 64;
      v11 = v10 - 8;
      if ( !v11 )
        return 32;
      v12 = v11 - 4;
      if ( !v12 )
        return 32;
      v13 = v12 - 14;
      if ( !v13 )
        return 32;
      if ( v13 != 7 )
        return 0;
    }
    return 16;
  }
  v1 = a1 - 61;
  if ( !v1 )
    return 8;
  v2 = v1 - 4;
  if ( !v2 )
    return 8;
  v3 = v2 - 22;
  if ( !v3 )
    return 32;
  v5 = v3 - 1;
  if ( !v5 )
    return 32;
  v14 = v5 - 3;
  if ( !v14 )
    return 32;
  v15 = v14 - 12;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( !v16 )
      return 48;
    if ( (unsigned int)(v16 - 2) >= 2 )
      return 0;
  }
  return 12;
}
