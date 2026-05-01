/*
 * XREFs of ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x180338774
 * Callers:
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803176F0 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x180328750 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180057690 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?shared_from_this@?$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA?AV?$shared_ptr@VConnectedStandbyHelper@@@2@XZ @ 0x1800CB370 (-shared_from_this@-$enable_shared_from_this@VConnectedStandbyHelper@@@std@@QEAA-AV-$shared_ptr@V.c)
 *     ?_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ @ 0x1801B1CA0 (-_Destroy@_RefCounter@details@Concurrency@@MEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x1801B1F08 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     wistd::function_void___cdecl(unsigned_char_const_&)_::function_void___cdecl(unsigned_char_const_&)___lambda_025d670431b0b6098eb2d1c47c9e9598__void_ @ 0x180337E28 (wistd--function_void___cdecl(unsigned_char_const_-)_--function_void___cdecl(unsigned_char_const_.c)
 *     ??$make_wnf_subscription@E@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBE@Z@wistd@@K@Z @ 0x180337F50 (--$make_wnf_subscription@E@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PDCShellPhaseUseWNF@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180338A24 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PDCShellPhaseUseWNF@@@details@wil@@QEAAX_.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall ConnectedStandbyHelper::Initialize(
        ConnectedStandbyHelper *this,
        struct IWindowDispatcherConnectedStandby *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  Concurrency::details::_RefCounter **wnf; // rax
  Concurrency::details::_RefCounter **v6; // rbx
  const char *v7; // r9
  __int64 result; // rax
  Concurrency::details::_RefCounter *v9; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v10; // [rsp+28h] [rbp-D0h] BYREF
  Concurrency::details::_RefCounter *v11; // [rsp+38h] [rbp-C0h]
  void (__fastcall *v12)(Concurrency::details::_RefCounter *); // [rsp+40h] [rbp-B8h]
  __int64 v13; // [rsp+48h] [rbp-B0h] BYREF
  std::_Ref_count_base *v14; // [rsp+50h] [rbp-A8h]
  _QWORD v15[16]; // [rsp+60h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  try
  {
    *((_QWORD *)this + 3) = a2;
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PDCShellPhaseUseWNF>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_PDCShellPhaseUseWNF>::GetImpl'::`2'::impl,
      a2);
    v11 = (Concurrency::details::_RefCounter *)&v10;
    v3 = std::enable_shared_from_this<ConnectedStandbyHelper>::shared_from_this((__int64)this, &v13);
    v10 = 0LL;
    v10 = *(_OWORD *)v3;
    *v3 = 0LL;
    v3[1] = 0LL;
    wistd::function_void___cdecl_unsigned_char_const____::function_void___cdecl_unsigned_char_const______lambda_025d670431b0b6098eb2d1c47c9e9598__void_(
      v15,
      &v10);
    wnf = (Concurrency::details::_RefCounter **)wil::make_wnf_subscription<unsigned char>(&v9, v4, (__int64)v15);
    v6 = wnf;
    if ( (Concurrency::details::_RefCounter **)((char *)this + 48) != wnf )
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
        (Concurrency::details::_RefCounter **)this + 6,
        *wnf);
      *v6 = 0LL;
    }
    if ( v9 )
    {
      v11 = v9;
      v12 = Concurrency::details::_RefCounter::_Destroy;
      Concurrency::details::_RefCounter::_Destroy(v9);
    }
    wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v15);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x30,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
                           v7);
  }
  return result;
}
