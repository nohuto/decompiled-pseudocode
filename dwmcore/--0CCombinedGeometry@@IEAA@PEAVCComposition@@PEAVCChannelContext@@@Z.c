/*
 * XREFs of ??0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18000BF94
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x18000C09C (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CCombinedGeometry *__fastcall CCombinedGeometry::CCombinedGeometry(
        CCombinedGeometry *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  CCombinedGeometry *v3; // r11
  _QWORD *v4; // r10

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CPropertyChangeResource::`vftable';
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 128) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *((_DWORD *)this + 23) = 1065353216;
  CCyclicResourceListEntry::CCyclicResourceListEntry((CCombinedGeometry *)((char *)this + 144), a3[4]);
  *(_QWORD *)v3 = &CCombinedGeometry::`vftable'{for `CGeometry'};
  *v4 = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  return v3;
}
