/*
 * XREFs of ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x18013B3A8
 * Callers:
 *     ?IsPinAllowed@?$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@@impl@winrt@@UEAAHPEAXPEA_N@Z @ 0x18013B320 (-IsPinAllowed@-$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@34.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D3A (WINRT_WindowsGetStringRawBuffer.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$QueueTask@V_lambda_1abdf5b9ad2813433bf54207a76ad608_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_1abdf5b9ad2813433bf54207a76ad608_@@@Z @ 0x1801321F4 (--$QueueTask@V_lambda_1abdf5b9ad2813433bf54207a76ad608_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180135298 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect_ea_180135298.c)
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x180135568 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180135C50 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr.c)
 *     ??1?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x180135F7C (--1-$tuple@V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_n.c)
 *     ??1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ @ 0x1801363F8 (--1PinManagerIsPinAllowed@PinManagerTelemetry@@QEAA@XZ.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x180138490 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x180139A60 (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 *     ?IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV?$shared_ptr@VPinOperationContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x18013B660 (-IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV-$shared_p.c)
 *     ?IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV?$shared_ptr@VPinRequestContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x18013B8A4 (-IsPinRequestorAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEAXV-$shar.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18013FFD0 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?StartActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBG@Z @ 0x180141944 (-StartActivity@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z @ 0x180141E54 (-Stop@PinManagerIsPinAllowed@PinManagerTelemetry@@QEAAXPEBGW4PinManagerIsPinAllowedResult@2@@Z.c)
 *     ?IsNotificationConsentAvailable@@YA_NXZ @ 0x18014A254 (-IsNotificationConsentAvailable@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsPinAllowed(
        winrt::Windows::Internal::Shell::implementation::PinManager *this,
        HSTRING *a2)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // rax
  char v8; // bl
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // r8
  DWORD CurrentThreadId; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rax
  unsigned int v19; // r9d
  HSTRING v21; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v22[2]; // [rsp+38h] [rbp-C8h] BYREF
  char v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v25[3]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  std::_Ref_count_base *v27[2]; // [rsp+78h] [rbp-88h] BYREF
  std::_Ref_count_base *v28[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v29[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  memset_0(v29, 0, 0x138uLL);
  StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*a2, 0LL);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"PinManagerIsPinAllowed");
  v29[0] = &PinManagerTelemetry::PinManagerIsPinAllowed::`vftable';
  PinManagerTelemetry::PinManagerIsPinAllowed::StartActivity(
    (PinManagerTelemetry::PinManagerIsPinAllowed *)v29,
    StringRawBuffer);
  *(_QWORD *)v24 = 0LL;
  winrt::Windows::Internal::Shell::implementation::PinManager::GetPinRequestContext(
    (__int64)this,
    &v26,
    (__int64)a2,
    0,
    (__int64)v24);
  v5 = std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v25, v27);
  LOBYTE(v6) = 1;
  if ( !(unsigned __int8)winrt::Windows::Internal::Shell::implementation::PinManager::IsPinRequestorAllowed(
                           v24,
                           v26,
                           v5,
                           v6,
                           v24) )
  {
    v7 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v27[0], v22);
    PinManagerTelemetry::PinManagerIsPinAllowed::Stop(v29, *v7, 1LL);
    v8 = 0;
    goto LABEL_12;
  }
  *(_OWORD *)v28 = 0LL;
  v21 = 0LL;
  v9 = std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v22, v27);
  PinOperationContext::Create((__int64 **)v28, v9, a2, &v21);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
  v10 = std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v25, v28);
  LOBYTE(v11) = 1;
  if ( (unsigned __int8)winrt::Windows::Internal::Shell::implementation::PinManager::IsPinOperationAllowed(
                          this,
                          v10,
                          v11,
                          v24) )
  {
    if ( IsNotificationConsentAvailable() )
    {
      v23 = 0;
      v25[0] = v27;
      v25[1] = v28;
      v25[2] = &v23;
      CurrentThreadId = GetCurrentThreadId();
      v17 = Windows::Internal::ComTaskPool::QueueTask<_lambda_1abdf5b9ad2813433bf54207a76ad608_>(
              v16,
              v15,
              CurrentThreadId,
              (__int64)v25);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          678LL,
          (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
          (const char *)(unsigned int)v17);
        __debugbreak();
      }
      v18 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v27[0], v22);
      PinManagerTelemetry::PinManagerIsPinAllowed::Stop(v29, *v18, v19);
      v8 = v23;
      goto LABEL_10;
    }
    v12 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v27[0], v22);
    v13 = 4LL;
  }
  else
  {
    v12 = (_QWORD *)PinRequestContext::RequestorBestAvailableAppId(v27[0], v22);
    v13 = 2LL;
  }
  PinManagerTelemetry::PinManagerIsPinAllowed::Stop(v29, *v12, v13);
  v8 = 0;
LABEL_10:
  if ( v28[1] )
    std::_Ref_count_base::_Decref(v28[1]);
LABEL_12:
  std::tuple<std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~tuple<std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(&v26);
  wil::com_ptr_t<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>((void **)v24);
  PinManagerTelemetry::PinManagerIsPinAllowed::~PinManagerIsPinAllowed((PinManagerTelemetry::PinManagerIsPinAllowed *)v29);
  return v8;
}
