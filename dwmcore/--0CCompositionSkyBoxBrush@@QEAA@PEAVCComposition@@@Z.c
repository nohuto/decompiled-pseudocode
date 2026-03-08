/*
 * XREFs of ??0CCompositionSkyBoxBrush@@QEAA@PEAVCComposition@@@Z @ 0x180221C1C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CCompositionSkyBoxBrush *__fastcall CCompositionSkyBoxBrush::CCompositionSkyBoxBrush(
        CCompositionSkyBoxBrush *this,
        struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CCompositionSkyBoxBrush *result; // rax

  *((_QWORD *)this + 8) = &CCompositionSkyBoxBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 20) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 19) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 20) + 4LL) + 160) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)v2 = &CCompositionSkyBoxBrush::`vftable';
  v3 = *(_QWORD *)(v2 + 64);
  *(_BYTE *)(v2 + 80) = 0;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 64) = &CCompositionSkyBoxBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CCompositionSkyBoxBrush::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 72;
  v5 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  result = (CCompositionSkyBoxBrush *)v2;
  *(_DWORD *)(v5 + v2 + 60) = v5 - 88;
  *(_DWORD *)(v2 + 120) = 63;
  *(_DWORD *)(v2 + 116) = 1120403456;
  return result;
}
