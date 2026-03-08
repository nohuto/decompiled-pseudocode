/*
 * XREFs of ??0CPrimitiveGroup@@IEAA@PEAVCComposition@@@Z @ 0x180023EB0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CPrimitiveGroup *__fastcall CPrimitiveGroup::CPrimitiveGroup(CPrimitiveGroup *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx

  *((_QWORD *)this + 8) = &CPrimitiveGroup::`vbtable'{for `CContent'};
  *((_QWORD *)this + 86) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 85) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 86) + 4LL) + 688) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 72) = &CPrimitiveGroup::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)v2 = &CPrimitiveGroup::`vftable'{for `CContent'};
  *(_QWORD *)(v2 + 80) = &CPrimitiveGroup::`vftable'{for `IDirtyRectSource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 4LL) + v2 + 64) = &CPrimitiveGroup::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CPrimitiveGroup::`vftable'{for `IContent'};
  v3 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v3 + v2 + 60) = v3 - 600;
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 616;
  *(_QWORD *)(v2 + 108) = 0LL;
  *(_QWORD *)(v2 + 116) = 0LL;
  *(_QWORD *)(v2 + 136) = v2 + 168;
  *(_QWORD *)(v2 + 144) = v2 + 168;
  *(_DWORD *)(v2 + 152) = 4;
  *(_QWORD *)(v2 + 156) = 4LL;
  *(_QWORD *)(v2 + 200) = v2 + 232;
  *(_QWORD *)(v2 + 208) = v2 + 232;
  *(_DWORD *)(v2 + 216) = 4;
  *(_QWORD *)(v2 + 220) = 4LL;
  *(_QWORD *)(v2 + 264) = v2 + 296;
  *(_QWORD *)(v2 + 272) = v2 + 296;
  *(_DWORD *)(v2 + 280) = 4;
  *(_QWORD *)(v2 + 284) = 4LL;
  *(_QWORD *)(v2 + 328) = v2 + 360;
  *(_QWORD *)(v2 + 336) = v2 + 360;
  *(_DWORD *)(v2 + 344) = 4;
  *(_QWORD *)(v2 + 348) = 4LL;
  *(_QWORD *)(v2 + 552) = v2 + 560;
  *(_QWORD *)(v2 + 524) = 0LL;
  *(_QWORD *)(v2 + 532) = 0LL;
  *(_DWORD *)(v2 + 560) = 0;
  return (CPrimitiveGroup *)v2;
}
