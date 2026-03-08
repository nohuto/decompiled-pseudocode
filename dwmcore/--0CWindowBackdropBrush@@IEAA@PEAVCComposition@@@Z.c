/*
 * XREFs of ??0CWindowBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800FFF88
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CWindowBackdropBrush *__fastcall CWindowBackdropBrush::CWindowBackdropBrush(
        CWindowBackdropBrush *this,
        struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CWindowBackdropBrush *result; // rax

  *((_QWORD *)this + 8) = &CWindowBackdropBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 15) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 14) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 15) + 4LL) + 120) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)v2 = &CWindowBackdropBrush::`vftable';
  v3 = *(_QWORD *)(v2 + 64);
  *(_BYTE *)(v2 + 80) = 0;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 64) = &CBlurredWallpaperBackdropBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CBlurredWallpaperBackdropBrush::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 32;
  v5 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  result = (CWindowBackdropBrush *)v2;
  *(_DWORD *)(v5 + v2 + 60) = v5 - 48;
  return result;
}
