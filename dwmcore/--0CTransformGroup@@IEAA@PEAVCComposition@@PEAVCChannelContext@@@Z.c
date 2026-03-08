/*
 * XREFs of ??0CTransformGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18000C014
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x18000C09C (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CTransformGroup *__fastcall CTransformGroup::CTransformGroup(
        CTransformGroup *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  CTransformGroup *v3; // r11
  _QWORD *v4; // r10

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *((_BYTE *)this + 156) = 0;
  *(_QWORD *)this = &CTransform::`vftable';
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  CCyclicResourceListEntry::CCyclicResourceListEntry((CTransformGroup *)((char *)this + 184), a3[4]);
  *(_QWORD *)v3 = &CTransformGroup::`vftable'{for `CTransformGroupGeneratedT<CTransformGroup,CTransform>'};
  *v4 = &CTransformGroup::`vftable'{for `CCyclicResourceListEntry'};
  return v3;
}
