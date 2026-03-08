/*
 * XREFs of ??0CNineGridBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800B86E0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x180247240 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CNineGridBrush *__fastcall CNineGridBrush::CNineGridBrush(CNineGridBrush *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CNineGridBrush *result; // rax

  *((_QWORD *)this + 8) = &CNineGridBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 24) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 23) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 24) + 4LL) + 192) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)v2 = &CNineGridBrush::`vftable';
  v3 = *(_QWORD *)(v2 + 64);
  *(_BYTE *)(v2 + 80) = 0;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 64) = &CNineGridBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CNineGridBrush::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 104;
  v5 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  *(_DWORD *)(v5 + v2 + 60) = v5 - 120;
  *(_OWORD *)(v2 + 128) = *(_OWORD *)&_xmm;
  *(_DWORD *)(v2 + 100) = 1065353216;
  *(_DWORD *)(v2 + 108) = 1065353216;
  *(_DWORD *)(v2 + 116) = 1065353216;
  *(_DWORD *)(v2 + 124) = 1065353216;
  result = (CNineGridBrush *)v2;
  *(_QWORD *)(v2 + 144) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  return result;
}
