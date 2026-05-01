/*
 * XREFs of ?OnViewPositionChanged@TitleBarController@@UEAAXPEAUIApplicationView@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1802F7830
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180022A34 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIViewGroupInternal@@UIViewGroup@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITitleBarRecovery@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180070650 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180070650.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_07f8ea383e36690a5ebaa5890ffd342e___ @ 0x1802F4ABC (Windows--Internal--ComTaskPool--QueueTask__lambda_07f8ea383e36690a5ebaa5890ffd342e___.c)
 *     ??0?$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController@@@Z @ 0x1802F5490 (--0-$com_ptr_t@VTitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTitleBarController.c)
 */

__int64 __fastcall TitleBarController::OnViewPositionChanged(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  __int64 *v5; // rax
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+28h] [rbp-18h]
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  int v14; // [rsp+38h] [rbp-8h]
  __int64 v15; // [rsp+58h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+28h] BYREF

  (**a2)(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v15);
  if ( v15 )
  {
    v5 = wil::com_ptr_t<TitleBarController,wil::err_exception_policy>::com_ptr_t<TitleBarController,wil::err_exception_policy>(
           &v16,
           a1 - 8);
    v11 = v6;
    v7 = *v5;
    *v5 = 0LL;
    v12 = v7;
    wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
      &v13,
      v15);
    v14 = a3;
    Windows::Internal::ComTaskPool::QueueTask__lambda_07f8ea383e36690a5ebaa5890ffd342e___(
      v9,
      v8,
      *(_DWORD *)(a1 + 200),
      (__int64)&v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v12);
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IViewGroupInternal,IViewGroup,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITitleBarRecovery,Microsoft::WRL::FtmBase>::Release(v16);
  }
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
}
