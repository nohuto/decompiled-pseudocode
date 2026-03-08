/*
 * XREFs of ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800B8280
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x18021B560 (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 * Callees:
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x1800B81D8 (--0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::CLinearGradientBrush(
        CLinearGradientBrush *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  *((_QWORD *)this + 8) = &CLinearGradientBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 35) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 34) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 35) + 4LL) + 280) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CGradientBrush::CGradientBrush(this, a2);
  *(_QWORD *)this = &CLinearGradientBrush::`vftable';
  *((_QWORD *)this + 11) = &CLinearGradientBrush::`vftable'{for `IAtlasEntryOwner'};
  *((_QWORD *)this + 12) = &CLinearGradientBrush::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CLinearGradientBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CLinearGradientBrush::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 192;
  v4 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 208;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 1065353216LL;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 61) = 0;
  return this;
}
