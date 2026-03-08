/*
 * XREFs of ??0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@@Z @ 0x1800B8370
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CAtlasedRectsGroup *__fastcall CAtlasedRectsGroup::CAtlasedRectsGroup(
        CAtlasedRectsGroup *this,
        struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CAtlasedRectsGroup *result; // rax

  *((_QWORD *)this + 8) = &CContainerVectorShape::`vbtable'{for `CContent'};
  *((_QWORD *)this + 20) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 19) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 20) + 4LL) + 160) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)v2 = &CAtlasedRectsGroup::`vftable';
  v3 = *(_QWORD *)(v2 + 64);
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 64) = &CContainerVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CAtlasedRectsGroup::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 72;
  v5 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  result = (CAtlasedRectsGroup *)v2;
  *(_DWORD *)(v5 + v2 + 60) = v5 - 88;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_BYTE *)(v2 + 120) = 1;
  return result;
}
