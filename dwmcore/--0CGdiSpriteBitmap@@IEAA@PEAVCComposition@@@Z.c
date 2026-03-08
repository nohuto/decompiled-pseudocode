/*
 * XREFs of ??0CGdiSpriteBitmap@@IEAA@PEAVCComposition@@@Z @ 0x1800AA1D8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CGdiSpriteBitmap *__fastcall CGdiSpriteBitmap::CGdiSpriteBitmap(CGdiSpriteBitmap *this, struct CComposition *a2)
{
  __int64 v3; // rcx
  CGdiSpriteBitmap *result; // rax

  *((_QWORD *)this + 13) = &CGdiSpriteBitmap::`vbtable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CResource::`vftable';
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 12) = &IBitmapResource::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 13) + 4LL) + 104) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>'};
  *((_QWORD *)this + 12) = &CGdiSpriteBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 14) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 13) + 4LL) + 104) = &CGdiSpriteBitmap::`vftable'{for `IUnknown'};
  v3 = *(int *)(*((_QWORD *)this + 13) + 4LL);
  *(_DWORD *)((char *)this + v3 + 100) = v3 - 376;
  *((_QWORD *)this + 21) = (char *)this + 176;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 30) = &CRegionShape::`vftable';
  *((_QWORD *)this + 32) = (char *)this + 264;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 92) = 1065353216;
  *((_DWORD *)this + 93) = 1065353216;
  *((_DWORD *)this + 94) = 1065353216;
  *(_QWORD *)((char *)this + 380) = 1065353216LL;
  result = this;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *(_QWORD *)((char *)this + 388) = 0LL;
  *((_DWORD *)this + 99) = 0;
  *((_BYTE *)this + 400) = 0;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 32) = 87;
  *((_DWORD *)this + 34) = 0;
  return result;
}
