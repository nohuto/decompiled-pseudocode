/*
 * XREFs of ??1wnf_subscription_state_base@details@wil@@UEAA@XZ @ 0x1801AFC24
 * Callers:
 *     _wil::details::wnf_subscription_state_unsigned_char_[32]_::wnf_subscription_state_unsigned_char_[32]__::_1_::dtor$0 @ 0x1800CE926 (_wil--details--wnf_subscription_state_unsigned_char_[32]_--wnf_subscription_state_unsigned_char_.c)
 *     ??1?$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAA@XZ @ 0x1800CEB68 (--1-$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAA@XZ.c)
 *     _wil::details::wnf_subscription_state_enum_Windows::Internal::Shell::Holographic::UserDisplayContext_::wnf_subscription_state_enum_Windows::Internal::Shell::Holographic::UserDisplayContext__::_1_::dtor$0 @ 0x1801AF8A6 (_wil--details--wnf_subscription_state_enum_Windows--Internal--Shell--Holographic--UserDisplayCon.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::wnf_subscription_state_base::~wnf_subscription_state_base(
        wil::details::wnf_subscription_state_base *this)
{
  *(_QWORD *)this = &wil::details::wnf_subscription_state_base::`vftable';
  if ( *((_QWORD *)this + 1) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
}
