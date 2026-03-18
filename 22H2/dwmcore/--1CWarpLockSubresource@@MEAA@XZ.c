/*
 * XREFs of ??1CWarpLockSubresource@@MEAA@XZ @ 0x1800A8C30
 * Callers:
 *     ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x1800A8900 (--_GCWarpLockSubresource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Unlock@CWarpLockSubresource@@IEAAJXZ @ 0x1800A8C6C (-Unlock@CWarpLockSubresource@@IEAAJXZ.c)
 */

void __fastcall CWarpLockSubresource::~CWarpLockSubresource(CWarpLockSubresource *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 5) == 0LL;
  *(_QWORD *)this = &CWarpLockSubresource::`vftable';
  if ( !v1 )
    CWarpLockSubresource::Unlock(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 2);
}
