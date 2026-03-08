/*
 * XREFs of ??0CEffectBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800B7EB8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CEffectBrush *__fastcall CEffectBrush::CEffectBrush(CEffectBrush *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx
  CEffectBrush *result; // rax

  *((_QWORD *)this + 8) = &CSurfaceBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 26) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 25) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 26) + 4LL) + 208) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)v2 = &CEffectBrush::`vftable'{for `CBrush'};
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_BYTE *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = &CEffectBrush::`vftable'{for `CPropertySet::IValueChangeListener'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 4LL) + v2 + 64) = &CEffectBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CEffectBrush::`vftable'{for `IContent'};
  v3 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v3 + v2 + 60) = v3 - 120;
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 136;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_QWORD *)(v2 + 120) = v2 + 152;
  *(_QWORD *)(v2 + 128) = v2 + 152;
  *(_DWORD *)(v2 + 136) = 2;
  *(_QWORD *)(v2 + 140) = 2LL;
  result = (CEffectBrush *)v2;
  *(_BYTE *)(v2 + 168) = 0;
  *(_BYTE *)(v2 + 80) = 1;
  return result;
}
