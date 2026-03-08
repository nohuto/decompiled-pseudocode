/*
 * XREFs of ??0CTransform3DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x1801BE2A4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C5A4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x18000C09C (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CTransform3DGroup *__fastcall CTransform3DGroup::CTransform3DGroup(
        CTransform3DGroup *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  CTransform3DGroup *v3; // r11
  _QWORD *v4; // r10

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CTransform3D::`vftable';
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *((_BYTE *)this + 156) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  CCyclicResourceListEntry::CCyclicResourceListEntry((CTransform3DGroup *)((char *)this + 184), a3[4]);
  *(_QWORD *)v3 = &CTransform3DGroup::`vftable'{for `CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>'};
  *v4 = &CTransform3DGroup::`vftable'{for `CCyclicResourceListEntry'};
  return v3;
}
