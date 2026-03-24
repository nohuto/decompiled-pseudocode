/*
 * XREFs of ??0CHwndBitmap@@IEAA@PEAVCComposition@@@Z @ 0x1801C3E74
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F484 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CHwndBitmap *__fastcall CHwndBitmap::CHwndBitmap(CHwndBitmap *this, struct CComposition *a2)
{
  CHwndBitmap *v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx
  CHwndBitmap *result; // rax

  *((_QWORD *)this + 7) = &CCompositionTextLine::`vbtable'{for `CContent'};
  *((_QWORD *)this + 9) = &CHwndBitmap::`vbtable';
  *((_QWORD *)this + 18) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 17) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 18) + 4LL) + 144) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *((_QWORD *)v2 + 8) = &ISpriteImage::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 9) + 4LL) + 72) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)v2 = &CHwndBitmap::`vftable';
  *((_QWORD *)v2 + 8) = &CHwndBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 7) + 4LL) + 56) = &CHwndBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 7) + 8LL) + 56) = &CHwndBitmap::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)v2 + 7) + 4LL);
  *(_DWORD *)((char *)v2 + v3 + 52) = v3 - 64;
  v4 = *(int *)(*((_QWORD *)v2 + 7) + 8LL);
  result = v2;
  *(_DWORD *)((char *)v2 + v4 + 52) = v4 - 80;
  return result;
}
