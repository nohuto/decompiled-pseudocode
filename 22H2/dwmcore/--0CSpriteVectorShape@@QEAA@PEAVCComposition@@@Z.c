/*
 * XREFs of ??0CSpriteVectorShape@@QEAA@PEAVCComposition@@@Z @ 0x18016B058
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVectorShape@@IEAA@PEAVCComposition@@@Z @ 0x18016B250 (--0CVectorShape@@IEAA@PEAVCComposition@@@Z.c)
 */

CSpriteVectorShape *__fastcall CSpriteVectorShape::CSpriteVectorShape(
        CSpriteVectorShape *this,
        struct CComposition *a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_QWORD *)this + 7) = &CSpriteVectorShape::`vbtable'{for `CContent'};
  *((_QWORD *)this + 30) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 29) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 30) + 4LL) + 240) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CVectorShape::CVectorShape(this, a2);
  v3 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)v2 = &CSpriteVectorShape::`vftable';
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 56) = &CSpriteVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CSpriteVectorShape::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 160;
  v5 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  *(_DWORD *)(v5 + v2 + 52) = v5 - 176;
  *(_QWORD *)(v2 + 120) = 0LL;
  *(_QWORD *)(v2 + 128) = 0LL;
  *(_QWORD *)(v2 + 136) = 0LL;
  *(_QWORD *)(v2 + 144) = 0LL;
  *(_QWORD *)(v2 + 152) = 0LL;
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_DWORD *)(v2 + 196) = 1065353216;
  *(_DWORD *)(v2 + 200) = 1065353216;
  return (CSpriteVectorShape *)v2;
}
