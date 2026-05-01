/*
 * XREFs of ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x18013AF10
 * Callers:
 *     ?IsItemPinned@?$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@@impl@winrt@@UEAAHPEAX0PEA_N@Z @ 0x18013AE80 (-IsItemPinned@-$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@34.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x1800AF0D8 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ??0?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180135128 (--0-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect_ea_180135128.c)
 *     ??1?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801359E8 (--1-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0I.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180135AE0 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr.c)
 *     ??1?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x180135E0C (--1-$tuple@V-$shared_ptr@VPinRequestContext@@@std@@V-$unique_any_t@V-$unique_storage@U-$handle_n.c)
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180138C0C (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x1801398F0 (-GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$tuple@V-$.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18013FE60 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?StartActivity@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXXZ @ 0x180141720 (-StartActivity@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXXZ.c)
 *     ?Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z @ 0x180141A7C (-Stop@PinManagerIsItemPinned@PinManagerTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180142FF0 (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x18014FF90 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     ?reset@?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAU_ITEMIDLIST@@@Z @ 0x18015F120 (-reset@-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180256C24 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1802D9B20 (--1-$out_param_t@V-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX.c)
 */

// Hidden C++ exception states: #wind=7
bool __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::IsItemPinned(
        winrt::Windows::Internal::Shell::implementation::PinManager *this,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3)
{
  bool v6; // di
  __int64 v7; // r9
  IUnknown *v8; // rbx
  HRESULT v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int Instance; // eax
  const unsigned __int16 **v12; // rax
  struct CPinnedList *v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *punk; // [rsp+40h] [rbp-C0h] BYREF
  __int128 *v16; // [rsp+48h] [rbp-B8h] BYREF
  LPITEMIDLIST ppidl; // [rsp+50h] [rbp-B0h] BYREF
  char v18; // [rsp+58h] [rbp-A8h]
  _BYTE v19[16]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+70h] [rbp-90h] BYREF
  int v21[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v22; // [rsp+88h] [rbp-78h] BYREF
  __int64 v23; // [rsp+90h] [rbp-70h]
  _QWORD v24[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  memset_0(v24, 0, 0x138uLL);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v24,
    (__int64)"PinManagerIsItemPinned");
  v24[0] = &PinManagerTelemetry::PinManagerIsItemPinned::`vftable';
  PinManagerTelemetry::PinManagerIsItemPinned::StartActivity((PinManagerTelemetry::PinManagerIsItemPinned *)v24);
  *(_QWORD *)v21 = 0LL;
  winrt::Windows::Internal::Shell::implementation::PinManager::GetPinRequestContext(
    (__int64)this,
    &v22,
    (__int64)a2,
    0,
    (__int64)v21);
  v6 = 0;
  v20 = *(_OWORD *)winrt::hstring::operator std::basic_string_view<unsigned short>(a3, v19);
  *(_OWORD *)v14 = *(_OWORD *)PinRequestContext::RequestorBestAvailableAppId(v23, &v16);
  TryGetAppsFolderItem(&punk, v14, &v20, v7);
  v8 = punk;
  if ( punk )
  {
    *(_QWORD *)&v20 = 0LL;
    v16 = &v20;
    ppidl = 0LL;
    v18 = 1;
    v9 = SHGetIDListFromObject(punk, &ppidl);
    v10 = retaddr;
    if ( v9 >= 0 )
    {
      wil::details::out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&v16);
      v14[0] = 0LL;
      Instance = CTaskbandPin_CreateInstance(v14);
      if ( Instance >= 0 )
      {
        v6 = (*(unsigned int (__fastcall **)(char *, _QWORD))(*((_QWORD *)v14[0] + 2) + 72LL))((char *)v14[0] + 16, v20) == 0;
        winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)v14);
        wistd::unique_ptr<_ITEMIDLIST,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          &v20,
          0LL);
        goto LABEL_5;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        700LL,
        (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)Instance);
    }
    wil::details::in1diag3::Throw_Hr(
      v10,
      697LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
LABEL_5:
  if ( v8 )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&punk);
  v12 = (const unsigned __int16 **)PinRequestContext::RequestorBestAvailableAppId(v23, &v16);
  PinManagerTelemetry::PinManagerIsItemPinned::Stop((PinManagerTelemetry::PinManagerIsItemPinned *)v24, *v12, v6);
  std::tuple<std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~tuple<std::shared_ptr<PinRequestContext>,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(&v22);
  wil::com_ptr_t<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>((void **)v21);
  v24[0] = &PinManagerTelemetry::PinManagerIsItemPinned::`vftable';
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v24);
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)v24);
  return v6;
}
