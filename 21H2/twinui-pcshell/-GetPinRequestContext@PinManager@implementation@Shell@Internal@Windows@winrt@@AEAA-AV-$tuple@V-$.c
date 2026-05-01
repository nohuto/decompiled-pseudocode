/*
 * XREFs of ?GetPinRequestContext@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$shared_ptr@VPinRequestContext@@@std@@V?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@AEBUhstring@6@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x180139A60
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18012ADA0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18012E410 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18012E410.c)
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x18013B080 (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 *     ?IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z @ 0x18013B3A8 (-IsPinAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009532C (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??B?$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInterop@@Uimmersive_shell_component@6@@winrt@@QEBA?AUIInspectable@Foundation@Windows@1@XZ @ 0x1801366BC (--B-$implements@UPinManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIPinManagerInte.c)
 *     ?FromExplicitContext@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x180139258 (-FromExplicitContext@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXV-$basic.c)
 *     ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x180139398 (-FromProcessThread@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z.c)
 *     ?GetProcessHandleForClientOfObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@PEAUIUnknown@@K@Z @ 0x18013A168 (-GetProcessHandleForClientOfObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_onl.c)
 *     _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x18013BA9C (_anonymous_namespace_--IsTrustedWindowsPinProcess.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180256DD4 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::PinManager::GetPinRequestContext(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  __int64 *v8; // rax
  PinRequestContext **v9; // rax
  DWORD *v10; // rcx
  HRESULT CallerTID; // eax
  PinRequestContext **v12; // rax
  __int64 v14[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v15; // [rsp+30h] [rbp-50h] BYREF
  PinRequestContext *v16; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v17; // [rsp+48h] [rbp-38h]
  _BYTE v18[16]; // [rsp+50h] [rbp-30h] BYREF
  void *v19; // [rsp+60h] [rbp-20h] BYREF
  DWORD dwTID[2]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  *(_QWORD *)&v15 = a2;
  v19 = 0LL;
  v8 = winrt::implements<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::PinManager,IPinManagerInterop,winrt::immersive_shell_component>::operator winrt::Windows::Foundation::IInspectable(
         a1,
         v14);
  wil::GetProcessHandleForClientOfObject(&v19, *v8);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v14);
  if ( a4 || !(unsigned __int8)anonymous_namespace_::IsTrustedWindowsPinProcess(v19, a5) )
  {
    CallerTID = CoGetCallerTID(dwTID);
    if ( CallerTID < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        965LL,
        (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)CallerTID);
      __debugbreak();
    }
    v12 = PinRequestContext::FromProcessThread(&v16, v19, dwTID[0]);
    *a2 = v19;
    v19 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    a2[1] = *v12;
    a2[2] = v12[1];
    *v12 = 0LL;
    v12[1] = 0LL;
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    if ( v19 )
    {
      v14[0] = (__int64)v19;
      *(_QWORD *)&v15 = CloseHandle;
      v10 = (DWORD *)&v15;
      goto LABEL_12;
    }
  }
  else
  {
    v15 = *(_OWORD *)winrt::hstring::operator std::basic_string_view<unsigned short>(a3, v18);
    v9 = PinRequestContext::FromExplicitContext(&v16, (__int64)v19, (__int64 *)&v15);
    *a2 = v19;
    v19 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    a2[1] = *v9;
    a2[2] = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    if ( v19 )
    {
      v14[0] = (__int64)v19;
      *(_QWORD *)dwTID = CloseHandle;
      v10 = dwTID;
LABEL_12:
      wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))v10, v14);
    }
  }
  return a2;
}
