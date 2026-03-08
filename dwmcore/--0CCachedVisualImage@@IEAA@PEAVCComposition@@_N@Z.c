/*
 * XREFs of ??0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z @ 0x1800B5BC8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z @ 0x1800A5C94 (--0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z.c)
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B06AC (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??0CDebugVisualImage@@AEAA@PEAVCComposition@@@Z @ 0x180214EE8 (--0CDebugVisualImage@@AEAA@PEAVCComposition@@@Z.c)
 *     ?EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ @ 0x18021BBA4 (-EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180253ADC (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18003904C (--0COcclusionContext@@QEAA@XZ.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::CCachedVisualImage(
        CCachedVisualImage *this,
        struct CComposition *a2,
        char a3,
        int a4)
{
  char *v4; // r10
  CCachedVisualImage *result; // rax

  v4 = (char *)this + 64;
  if ( a4 )
  {
    *(_QWORD *)v4 = &CCachedVisualImage::`vbtable'{for `CImageSource'};
    *((_QWORD *)this + 10) = &CCachedVisualImage::`vbtable'{for `IBitmapRealization'};
    *((_QWORD *)this + 227) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 230) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 226) = &IBitmapResource::`vftable'{for `IPixelFormat'};
    *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 227) + 4LL) + 1816) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  }
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CImageSource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v4 + 4LL) + 64) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v4 + 8LL) + 64) = &IBitmapResource::`vftable'{for `IPixelFormat'};
  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `CImageSource'};
  *((_QWORD *)this + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v4 + 4LL) + 64) = &CCachedVisualImage::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v4 + 8LL) + 64) = &CCachedVisualImage::`vftable'{for `IPixelFormat's `CImageSource'};
  *(_QWORD *)((char *)this + *(int *)(*(_QWORD *)v4 + 12LL) + 64) = &CCachedVisualImage::`vftable'{for `IPixelFormat's `IBitmapRealization'};
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v4 + 4LL) + 60) = *(_DWORD *)(*(_QWORD *)v4 + 4LL) - 1728;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v4 + 8LL) + 60) = *(_DWORD *)(*(_QWORD *)v4 + 8LL) - 1744;
  *(_DWORD *)((char *)this + *(int *)(*(_QWORD *)v4 + 12LL) + 60) = *(_DWORD *)(*(_QWORD *)v4 + 12LL) - 1768;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  COcclusionContext::COcclusionContext((CCachedVisualImage *)((char *)this + 216));
  *((_QWORD *)this + 221) = 0LL;
  *((_DWORD *)this + 444) = 0;
  result = this;
  *((_BYTE *)this + 1780) = a3;
  *((_DWORD *)this + 44) = 2;
  return result;
}
