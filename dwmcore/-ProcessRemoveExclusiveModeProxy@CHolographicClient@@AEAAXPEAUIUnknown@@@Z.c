/*
 * XREFs of ?ProcessRemoveExclusiveModeProxy@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802AA758
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802AA1A4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x1802AAF3C (-UninitializeResources@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18021D5BC (-erase@-$vector@V-$com_ptr_t@VCCaptureRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ??$try_com_query_nothrow@UIHolographicExclusiveModeManagerProxy@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1802A8EE4 (--$try_com_query_nothrow@UIHolographicExclusiveModeManagerProxy@@AEAPEAUIUnknown@@@wil@@YA-AV-$c.c)
 */

void __fastcall CHolographicClient::ProcessRemoveExclusiveModeProxy(CHolographicClient *this, struct IUnknown *a2)
{
  _QWORD *i; // r8
  void (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  wil::try_com_query_nothrow<IHolographicExclusiveModeManagerProxy,IUnknown * &>(&v5, &v4);
  if ( v5 )
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 13); i != *((_QWORD **)this + 14) && *i != v5; ++i )
      ;
    if ( i != *((_QWORD **)this + 14) )
      std::vector<wil::com_ptr_t<CCaptureRenderTarget,wil::err_returncode_policy>>::erase(
        (__int64)this + 104,
        &v6,
        (__int64)i);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 160LL))(*((_QWORD *)this + 3));
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v5);
}
