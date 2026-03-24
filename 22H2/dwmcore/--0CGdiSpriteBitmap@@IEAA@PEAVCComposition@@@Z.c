/*
 * XREFs of ??0CGdiSpriteBitmap@@IEAA@PEAVCComposition@@@Z @ 0x180036228
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CGdiSpriteBitmap *__fastcall CGdiSpriteBitmap::CGdiSpriteBitmap(CGdiSpriteBitmap *this, struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  *((_QWORD *)this + 8) = &CGdiSpriteBitmap::`vbtable'{for `ISpriteImage'};
  *((_QWORD *)this + 68) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 67) = &ISpriteImage::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 68) + 4LL) + 544) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CResource::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 7) = &ISpriteImage::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &ISpriteImage::`vftable'{for `IPixelFormat'};
  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 9) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CGdiSpriteBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CGdiSpriteBitmap::`vftable'{for `IPixelFormat'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 456;
  v4 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v4 + 60) = v4 - 472;
  *((_QWORD *)this + 23) = (char *)this + 216;
  *((_QWORD *)this + 24) = (char *)this + 216;
  *((_DWORD *)this + 50) = 1;
  *(_QWORD *)((char *)this + 204) = 1LL;
  *((_QWORD *)this + 28) = (char *)this + 232;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 37) = &CRegionShape::`vftable';
  *((_QWORD *)this + 39) = (char *)this + 320;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 102) = 1065353216;
  *((_DWORD *)this + 103) = 1065353216;
  *((_DWORD *)this + 104) = 1065353216;
  *(_QWORD *)((char *)this + 420) = 1065353216LL;
  *(_QWORD *)((char *)this + 428) = 0LL;
  *((_DWORD *)this + 109) = 0;
  *((_BYTE *)this + 440) = 0;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_DWORD *)this + 24) = 87;
  *((_DWORD *)this + 26) = 0;
  return this;
}
