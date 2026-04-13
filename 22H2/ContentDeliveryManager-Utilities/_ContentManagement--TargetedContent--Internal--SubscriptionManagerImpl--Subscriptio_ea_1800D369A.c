/*
 * XREFs of _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionManagerImpl_::_1_::dtor$1 @ 0x1800D369A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionManagerImpl_::_1_::dtor_1(
        __int64 a1,
        struct wil::details::wnf_subscription_state_base *a2)
{
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>(
    (wil::details **)(*((_QWORD *)a2 + 8) + 72LL),
    a2);
}
