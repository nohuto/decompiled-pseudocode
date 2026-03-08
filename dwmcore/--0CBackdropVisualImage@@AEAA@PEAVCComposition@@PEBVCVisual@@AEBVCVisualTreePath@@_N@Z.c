/*
 * XREFs of ??0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z @ 0x1800A5C94
 * Callers:
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x1800A5BA4 (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180087890 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z @ 0x1800B5BC8 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CBackdropVisualImage *__fastcall CBackdropVisualImage::CBackdropVisualImage(
        CBackdropVisualImage *this,
        struct CComposition *a2,
        const struct CVisual *a3,
        const struct CVisualTreePath *a4,
        bool a5)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 *v11; // rdi
  __int128 *v12; // rbx
  char *v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // rdx
  CBackdropVisualImage *result; // rax

  *((_QWORD *)this + 8) = &CBackdropVisualImage::`vbtable'{for `CImageSource'};
  *((_QWORD *)this + 10) = &CBackdropVisualImage::`vbtable'{for `IBitmapRealization'};
  *((_QWORD *)this + 253) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 256) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 252) = &IBitmapResource::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 253) + 4LL) + 2024) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CCachedVisualImage::CCachedVisualImage(this, a2, 0);
  *(_QWORD *)this = &CBackdropVisualImage::`vftable'{for `CImageSource'};
  *((_QWORD *)this + 9) = &CBackdropVisualImage::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 11) = &CCachedVisualImage::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CBackdropVisualImage::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CBackdropVisualImage::`vftable'{for `IPixelFormat's `CImageSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 12LL) + 64) = &CBackdropVisualImage::`vftable'{for `IPixelFormat's `IBitmapRealization'};
  v8 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v8 + 60) = v8 - 1936;
  v9 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v9 + 60) = v9 - 1952;
  v10 = *(int *)(*((_QWORD *)this + 8) + 12LL);
  *(_DWORD *)((char *)this + v10 + 60) = v10 - 1976;
  *((_QWORD *)this + 223) = a3;
  *((_QWORD *)this + 224) = (char *)this + 1816;
  *((_QWORD *)this + 225) = (char *)this + 1816;
  *((_QWORD *)this + 226) = (char *)this + 1848;
  v11 = (__int128 *)*((_QWORD *)a4 + 1);
  v12 = *(__int128 **)a4;
  v13 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
          (CBackdropVisualImage *)((char *)this + 1792),
          0LL,
          ((__int64)v11 - *(_QWORD *)a4) >> 4);
  while ( v12 != v11 )
  {
    v14 = *v12++;
    *(_OWORD *)v13 = v14;
    v13 += 16;
  }
  *(_OWORD *)((char *)this + 1848) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_DWORD *)this + 466) = 1065353216;
  *((_DWORD *)this + 467) = 1065353216;
  *((_DWORD *)this + 468) = 2048;
  *((_DWORD *)this + 469) = 1065353216;
  *((_DWORD *)this + 470) = 1065353216;
  *((_QWORD *)this + 237) = GetCurrentFrameId();
  *((_QWORD *)this + 236) = this;
  *((_QWORD *)this + 238) = 2LL;
  *((_BYTE *)this + 1912) = 0;
  *(_QWORD *)((char *)this + 1916) = v15;
  *(_QWORD *)((char *)this + 1924) = 0LL;
  *(_QWORD *)((char *)this + 1932) = v15;
  *(_QWORD *)((char *)this + 1940) = 0LL;
  *((_DWORD *)this + 487) = v15;
  *((_BYTE *)this + 1953) = a5;
  result = this;
  *((_BYTE *)this + 1952) = 0;
  *((_QWORD *)this + 245) = 0LL;
  *((_QWORD *)this + 246) = 0LL;
  *((_QWORD *)this + 247) = 0LL;
  *((_QWORD *)this + 248) = 0LL;
  return result;
}
