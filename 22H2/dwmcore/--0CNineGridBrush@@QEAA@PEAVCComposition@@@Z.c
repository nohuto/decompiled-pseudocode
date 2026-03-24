/*
 * XREFs of ??0CNineGridBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800D30D4
 * Callers:
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x1800201F8 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F484 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CNineGridBrush *__fastcall CNineGridBrush::CNineGridBrush(CNineGridBrush *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CNineGridBrush *result; // rax

  *((_QWORD *)this + 7) = &CNineGridBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 23) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 22) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 23) + 4LL) + 184) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)v2 = &CNineGridBrush::`vftable';
  v3 = *(_QWORD *)(v2 + 56);
  *(_BYTE *)(v2 + 72) = 0;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 56) = &CBitmapLock::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CNineGridBrush::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 104;
  v5 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  *(_DWORD *)(v5 + v2 + 52) = v5 - 120;
  *(_OWORD *)(v2 + 120) = _xmm;
  *(_DWORD *)(v2 + 92) = 1065353216;
  *(_DWORD *)(v2 + 100) = 1065353216;
  *(_DWORD *)(v2 + 108) = 1065353216;
  *(_DWORD *)(v2 + 116) = 1065353216;
  result = (CNineGridBrush *)v2;
  *(_QWORD *)(v2 + 136) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  return result;
}
