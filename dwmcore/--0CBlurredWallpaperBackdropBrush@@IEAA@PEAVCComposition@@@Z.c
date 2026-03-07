CBlurredWallpaperBackdropBrush *__fastcall CBlurredWallpaperBackdropBrush::CBlurredWallpaperBackdropBrush(
        CBlurredWallpaperBackdropBrush *this,
        struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CBlurredWallpaperBackdropBrush *result; // rax

  *((_QWORD *)this + 8) = &CWindowBackdropBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 15) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 14) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 15) + 4LL) + 120) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)v2 = &CBlurredWallpaperBackdropBrush::`vftable';
  v3 = *(_QWORD *)(v2 + 64);
  *(_BYTE *)(v2 + 80) = 0;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 64) = &CBlurredWallpaperBackdropBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CBlurredWallpaperBackdropBrush::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 32;
  v5 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  result = (CBlurredWallpaperBackdropBrush *)v2;
  *(_DWORD *)(v5 + v2 + 60) = v5 - 48;
  return result;
}
