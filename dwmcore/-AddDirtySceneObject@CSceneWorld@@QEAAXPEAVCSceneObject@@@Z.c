/*
 * XREFs of ?AddDirtySceneObject@CSceneWorld@@QEAAXPEAVCSceneObject@@@Z @ 0x1802603CC
 * Callers:
 *     ?AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z @ 0x180267E8C (-AddDirtySceneObject@CSceneComponent@@QEAAXPEAVCSceneObject@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18021CF94 (--$_Emplace_reallocate@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 */

void __fastcall CSceneWorld::AddDirtySceneObject(CSceneWorld *this, struct CSceneObject *a2)
{
  char *v2; // rdi
  struct CSceneObject **i; // rax
  __int64 *v5; // rdx
  struct CSceneObject *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 128;
  for ( i = (struct CSceneObject **)*((_QWORD *)this + 16); i != *((struct CSceneObject ***)this + 17); ++i )
  {
    if ( *i == a2 )
      return;
  }
  v6 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CSceneObject *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (__int64 *)*((_QWORD *)v2 + 1);
  if ( v5 == *((__int64 **)v2 + 2) )
  {
    std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>(
      (__int64 **)v2,
      v5,
      (__int64 *)&v6);
  }
  else
  {
    v6 = 0LL;
    *v5 = (__int64)a2;
    *((_QWORD *)v2 + 1) += 8LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v6);
}
