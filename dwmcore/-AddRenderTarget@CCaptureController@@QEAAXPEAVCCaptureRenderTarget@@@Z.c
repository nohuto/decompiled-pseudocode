/*
 * XREFs of ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18021D198
 * Callers:
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x1801EAD74 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1801E3CBC (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z @ 0x1801EADC4 (-SetTransform@CCaptureRenderTarget@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18021CF94 (--$_Emplace_reallocate@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 */

void __fastcall CCaptureController::AddRenderTarget(CCaptureController *this, struct CCaptureRenderTarget *a2)
{
  __int64 *v4; // rdx
  float v5; // xmm0_4
  struct CCaptureRenderTarget *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CCaptureRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = (__int64 *)*((_QWORD *)this + 9);
  if ( v4 == *((__int64 **)this + 10) )
  {
    std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>(
      (__int64 **)this + 8,
      v4,
      (__int64 *)&v6);
  }
  else
  {
    v6 = 0LL;
    *v4 = (__int64)a2;
    *((_QWORD *)this + 9) += 8LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v6);
  CRenderTarget::SetRootVisual(a2, *((struct CVisual **)this + 11));
  *((_BYTE *)a2 + 1896) = *((_BYTE *)this + 104);
  v5 = *((float *)this + 28);
  *((_DWORD *)a2 + 26) = (int)*((float *)this + 27);
  *((_DWORD *)a2 + 27) = (int)v5;
  CCaptureRenderTarget::SetTransform((struct CResource **)a2, *((struct CTransform3D **)this + 15));
  *((_BYTE *)a2 + 1897) = *((_BYTE *)this + 105);
  *((_DWORD *)a2 + 476) = *((_DWORD *)this + 32);
  CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts(a2);
}
