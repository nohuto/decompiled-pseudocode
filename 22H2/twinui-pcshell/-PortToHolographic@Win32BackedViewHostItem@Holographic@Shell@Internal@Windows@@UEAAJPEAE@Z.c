/*
 * XREFs of ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802C01B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase__lambda_a2e8b52356540255c945e7b53f94ed94__&_ @ 0x1800C81C8 (wil--RunWhenCompleteNoThrow_Microsoft--WRL--FtmBase__lambda_a2e8b52356540255c945e7b53f94ed94__-_.c)
 *     holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883___ @ 0x1800C8290 (holo--weak_lambda_Windows--Internal--Shell--Holographic--Win32BackedViewHostItem__lambda_fa229ae.c)
 *     std::shared_ptr__anonymous_namespace_::PinConsentPromptManager_::_shared_ptr__anonymous_namespace_::PinConsentPromptManager_ @ 0x1800C86A8 (std--shared_ptr__anonymous_namespace_--PinConsentPromptManager_--_shared_ptr__anonymous_namespac.c)
 *     _lambda_fa229aea017a19cbc9cb3db68405d883_::__lambda_fa229aea017a19cbc9cb3db68405d883_ @ 0x1800C86F0 (_lambda_fa229aea017a19cbc9cb3db68405d883_--__lambda_fa229aea017a19cbc9cb3db68405d883_.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1802BB314 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$_ea_1802BB314.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802BB3C8 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$_ea_1802BB3C8.c)
 *     ??1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x1802BC7A4 (--1PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x1802C1C60 (-StartActivity@PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationVie.c)
 *     ?_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802C3F68 (-_GetIsSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 *     ?_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_NPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x1802C4108 (-_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::PortToHolographic(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        unsigned __int8 *a2)
{
  unsigned int v4; // esi
  struct IWin32ApplicationView *v5; // rbx
  Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *v6; // rdi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  struct Windows::Foundation::IAsyncAction *v12; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v13[3]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v14[40]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[40]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+1F8h]

  v4 = 0;
  *a2 = 0;
  v5 = (struct IWin32ApplicationView *)*((_QWORD *)this + 69);
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v14,
    (__int64)"PortToHolographic");
  v14[0] = &Win32BackedViewHostItemTelemetry::PortToHolographic::`vftable';
  Win32BackedViewHostItemTelemetry::PortToHolographic::StartActivity(
    (Win32BackedViewHostItemTelemetry::PortToHolographic *)v14,
    v5);
  v6 = (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)((char *)this - 24);
  if ( Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_GetIsSlate(v6) )
  {
    v12 = 0LL;
    v7 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_HandleHolographicPortingAsync(v6, 1, &v12);
    v8 = v7;
    if ( v7 >= 0 )
    {
      wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v15,
        (__int64)v14);
      v15[0] = &Win32BackedViewHostItemTelemetry::PortToHolographic::`vftable';
      holo::weak_lambda_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem__lambda_fa229aea017a19cbc9cb3db68405d883___(
        v13,
        v6,
        (__int64)v15);
      lambda_fa229aea017a19cbc9cb3db68405d883_::__lambda_fa229aea017a19cbc9cb3db68405d883_((Win32BackedViewHostItemTelemetry::PortToHolographic *)v15);
      v9 = wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase__lambda_a2e8b52356540255c945e7b53f94ed94____(
             (__int64)v12,
             v13);
      v10 = v9;
      if ( v9 >= 0 )
      {
        *a2 = 1;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x38B,
          (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
          (const char *)(unsigned int)v9);
        v4 = v10;
      }
      std::shared_ptr__anonymous_namespace_::PinConsentPromptManager_::_shared_ptr__anonymous_namespace_::PinConsentPromptManager_((__int64)v13);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x363,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)v7);
      v4 = v8;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  }
  Win32BackedViewHostItemTelemetry::PortToHolographic::~PortToHolographic((Win32BackedViewHostItemTelemetry::PortToHolographic *)v14);
  return v4;
}
