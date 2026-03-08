/*
 * XREFs of ??0CClipBrush@@IEAA@PEAVCComposition@@@Z @ 0x18021D8F0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CClipBrush@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18021DA8C (-Create@CClipBrush@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CClipBrush *__fastcall CClipBrush::CClipBrush(CClipBrush *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CClipBrush *result; // rax

  *((_QWORD *)this + 8) = &CVisualBitmap::`vbtable'{for `CContent'};
  *((_QWORD *)this + 18) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 17) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 18) + 4LL) + 144) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)v2 = &CClipBrush::`vftable';
  v3 = *(_QWORD *)(v2 + 64);
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_BYTE *)(v2 + 80) = 0;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 64) = &CClipBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CClipBrush::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 56;
  v5 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  result = (CClipBrush *)v2;
  *(_DWORD *)(v5 + v2 + 60) = v5 - 72;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_OWORD *)(v2 + 96) = 0LL;
  return result;
}
