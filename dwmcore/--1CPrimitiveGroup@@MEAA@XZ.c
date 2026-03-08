/*
 * XREFs of ??1CPrimitiveGroup@@MEAA@XZ @ 0x1800134E4
 * Callers:
 *     ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x1800134A0 (--_ECPrimitiveGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18001360C (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x180013664 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800E08F0 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800E0D3C (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroup::~CPrimitiveGroup(CPrimitiveGroup *this)
{
  __int64 v2; // rcx
  CResource *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CPrimitiveGroup::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CPrimitiveGroup::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CPrimitiveGroup::`vftable'{for `IDirtyRectSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CPrimitiveGroup::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CPrimitiveGroup::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 600;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 8LL)
                                                                         - 616;
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 0);
  CPrimitiveGroup::ReleaseSurfaceResources(this);
  CPrimitiveGroup::ReleaseColorResources(this);
  v3 = (CResource *)*((_QWORD *)this + 49);
  if ( v3 )
    CResource::InternalRelease(v3);
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CPrimitiveGroup::ReleaseHeatMap(this);
  FastRegion::CRegion::FreeMemory((CPrimitiveGroup *)((char *)this + 552));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 328);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 264);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 200);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 136);
  CResource::~CResource(this);
}
