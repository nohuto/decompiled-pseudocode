/*
 * XREFs of ??1?$wnf_subscription_state@H@details@wil@@UEAA@XZ @ 0x180096088
 * Callers:
 *     ??_E?$wnf_subscription_state@H@details@wil@@UEAAPEAXI@Z @ 0x180096360 (--_E-$wnf_subscription_state@H@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x18004AD88 (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x180053720 (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 */

void **__fastcall wil::details::wnf_subscription_state<int>::~wnf_subscription_state<int>(_QWORD *a1)
{
  void **result; // rax
  __int64 v3; // rcx

  *a1 = &wil::details::wnf_subscription_state<int>::`vftable';
  wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
    a1 + 1,
    0LL);
  wistd::function<void (int const &)>::~function<void (int const &)>((__int64)(a1 + 2));
  result = &wil::details::wnf_subscription_state_base::`vftable';
  *a1 = &wil::details::wnf_subscription_state_base::`vftable';
  v3 = a1[1];
  if ( v3 )
    return (void **)RtlUnsubscribeWnfNotificationWaitForCompletion(v3);
  return result;
}
