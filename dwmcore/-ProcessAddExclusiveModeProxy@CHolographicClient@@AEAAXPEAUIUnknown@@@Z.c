/*
 * XREFs of ?ProcessAddExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802A9C20
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802AA1A4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18021CF94 (--$_Emplace_reallocate@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 *     ??$try_com_query_nothrow@UIHolographicExclusiveModeManagerProxy@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1802A8EE4 (--$try_com_query_nothrow@UIHolographicExclusiveModeManagerProxy@@AEAPEAUIUnknown@@@wil@@YA-AV-$c.c)
 */

void __fastcall CHolographicClient::ProcessAddExclusiveModeProxy(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rax
  void (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  wil::try_com_query_nothrow<IHolographicExclusiveModeManagerProxy,IUnknown * &>(&v6, &v5);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 152LL))(*((_QWORD *)this + 3));
    v3 = (__int64 *)*((_QWORD *)this + 14);
    if ( v3 == *((__int64 **)this + 15) )
    {
      std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>(
        (__int64 **)this + 13,
        v3,
        &v6);
    }
    else
    {
      v4 = v6;
      v6 = 0LL;
      *v3 = v4;
      *((_QWORD *)this + 14) += 8LL;
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v6);
}
