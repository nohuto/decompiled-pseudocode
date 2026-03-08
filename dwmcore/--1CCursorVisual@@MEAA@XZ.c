/*
 * XREFs of ??1CCursorVisual@@MEAA@XZ @ 0x1802253C0
 * Callers:
 *     ??_GCCursorVisual@@MEAAPEAXI@Z @ 0x180225430 (--_GCCursorVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearVisual@CCursorState@@QEAAXXZ @ 0x1802764C8 (-ClearVisual@CCursorState@@QEAAXXZ.c)
 */

void __fastcall CCursorVisual::~CCursorVisual(CCursorVisual *this)
{
  __int64 *v2; // rdi
  CCursorState *v3; // rcx

  v2 = (__int64 *)((char *)this + 720);
  *(_QWORD *)this = &CCursorVisual::`vftable';
  v3 = (CCursorState *)*((_QWORD *)this + 90);
  if ( v3 )
  {
    CCursorState::ClearVisual(v3);
    (*(void (__fastcall **)(_QWORD, CCursorVisual *))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2), this);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v2);
  CVisual::~CVisual(this);
}
