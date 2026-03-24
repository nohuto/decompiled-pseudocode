/*
 * XREFs of ??0CCompositionSkyBoxBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801BB1E0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F484 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
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

  *((_QWORD *)this + 7) = &CCompositionSkyBoxBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 19) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 18) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 19) + 4LL) + 152) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)v2 = &CCompositionSkyBoxBrush::`vftable';
  v3 = *(_QWORD *)(v2 + 56);
  *(_BYTE *)(v2 + 72) = 0;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 56) = &CContainerVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CCompositionSkyBoxBrush::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 72;
  v5 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  result = (CCompositionSkyBoxBrush *)v2;
  *(_DWORD *)(v5 + v2 + 52) = v5 - 88;
  *(_DWORD *)(v2 + 112) = 63;
  *(_DWORD *)(v2 + 108) = 1120403456;
  return result;
}
