/*
 * XREFs of ??0CInk@@QEAA@PEAVCComposition@@@Z @ 0x1801BDCBC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CInk *__fastcall CInk::CInk(CInk *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_QWORD *)this + 8) = &CInk::`vbtable'{for `CContent'};
  *((_QWORD *)this + 31) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 30) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 31) + 4LL) + 248) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  v3 = *(_QWORD *)(v2 + 64);
  *(_QWORD *)v2 = &CInk::`vftable';
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 64) = &CInk::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CInk::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 160;
  v5 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  *(_DWORD *)(v5 + v2 + 60) = v5 - 176;
  *(_QWORD *)(v2 + 72) = &CDeviceResourceTable<CD2DEffect,CFilterEffect>::`vftable';
  *(_QWORD *)(v2 + 80) = v2;
  *(_QWORD *)(v2 + 88) = v2 + 112;
  *(_QWORD *)(v2 + 96) = v2 + 112;
  *(_QWORD *)(v2 + 104) = v2 + 128;
  *(_QWORD *)(v2 + 144) = 0LL;
  *(_QWORD *)(v2 + 152) = 0LL;
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_DWORD *)(v2 + 168) = 0;
  return (CInk *)v2;
}
