/*
 * XREFs of ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x1800A99F4
 * Callers:
 *     ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x1800ABA40 (--_ECGdiSpriteBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180045E20 (--1CRegionShape@@UEAA@XZ.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800A8E8C (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ @ 0x1800AB9F0 (-UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CGdiSpriteBitmap::~CGdiSpriteBitmap(CGdiSpriteBitmap *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rdx
  __int64 *v6; // rsi
  __int64 v7; // rcx

  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `CGdiSpriteBitmapGeneratedT<CGdiSpriteBitmap,CResource>'};
  *((_QWORD *)this + 12) = &CGdiSpriteBitmap::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 14) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 13) + 4LL) + 104) = &CGdiSpriteBitmap::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 13) + 4LL);
  *(_DWORD *)((char *)this + v2 + 100) = v2 - 376;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  CGdiSpriteBitmap::UnRegisterWithSurfaceManager(this);
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v3);
  v4 = (__int64 *)*((_QWORD *)this + 56);
  if ( v4 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 57);
    while ( v4 != v6 )
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v4++);
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 56),
      (*((_QWORD *)this + 58) - *((_QWORD *)this + 56)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 56) = 0LL;
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = 0LL;
  }
  v5 = *((_QWORD *)this + 55);
  if ( v5 )
  {
    v7 = v5 + 8 + *(int *)(*(_QWORD *)(v5 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  CRegionShape::~CRegionShape((CGdiSpriteBitmap *)((char *)this + 240));
  FastRegion::CRegion::FreeMemory((CGdiSpriteBitmap *)((char *)this + 168));
  CResource::~CResource(this);
}
