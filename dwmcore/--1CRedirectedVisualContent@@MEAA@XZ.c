/*
 * XREFs of ??1CRedirectedVisualContent@@MEAA@XZ @ 0x1800190B8
 * Callers:
 *     ??_ECRedirectedVisualContent@@MEAAPEAXI@Z @ 0x180018F00 (--_ECRedirectedVisualContent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRedirectedVisualContent::~CRedirectedVisualContent(CRedirectedVisualContent *this)
{
  struct CResource **v2; // rdi
  __int64 v3; // rcx
  struct CResource *v4; // rcx

  *(_QWORD *)this = &CRedirectedVisualContent::`vftable';
  v2 = (struct CResource **)((char *)this + 72);
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CRedirectedVisualContent::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CRedirectedVisualContent::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 56;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 8LL) - 72;
  CResource::UnRegisterNotifierInternal(this, *v2);
  v4 = *v2;
  *v2 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v4 + 16LL))(v4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v2);
  CResource::~CResource(this);
}
