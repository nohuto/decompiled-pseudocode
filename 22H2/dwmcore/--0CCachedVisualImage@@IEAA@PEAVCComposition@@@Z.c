/*
 * XREFs of ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x1800325E8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z @ 0x1801F229C (-CreateCVI@CVisualSurface@@AEAAJPEAPEAVCCachedVisualImage@@@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801F4B70 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18003E7C0 (--0COcclusionContext@@QEAA@XZ.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::CCachedVisualImage(
        CCachedVisualImage *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CCachedVisualImage *result; // rax

  *((_QWORD *)this + 7) = &CCachedVisualImage::`vbtable'{for `CImageSource'};
  *((_QWORD *)this + 9) = &CCachedVisualImage::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 230) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 233) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 229) = &ISpriteImage::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 230) + 4LL) + 1840) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CImageSource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &ISpriteImage::`vftable'{for `IPixelFormat'};
  *(_QWORD *)this = &CCachedVisualImage::`vftable'{for `CImageSource'};
  *((_QWORD *)this + 8) = &CCachedVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 10) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CCachedVisualImage::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CCachedVisualImage::`vftable'{for `IPixelFormat's `CImageSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 12LL) + 56) = &CCachedVisualImage::`vftable'{for `IPixelFormat's `IBitmapRealization'};
  v3 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 1760;
  v4 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  *(_DWORD *)((char *)this + v4 + 52) = v4 - 1776;
  v5 = *(int *)(*((_QWORD *)this + 7) + 12LL);
  *(_DWORD *)((char *)this + v5 + 52) = v5 - 1800;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  COcclusionContext::COcclusionContext((CCachedVisualImage *)((char *)this + 208));
  *((_QWORD *)this + 224) = 0LL;
  *((_DWORD *)this + 450) = 0;
  result = this;
  *((_DWORD *)this + 42) = 2;
  return result;
}
