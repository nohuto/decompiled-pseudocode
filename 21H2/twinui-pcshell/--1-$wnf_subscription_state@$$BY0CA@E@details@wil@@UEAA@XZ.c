/*
 * XREFs of ??1?$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAA@XZ @ 0x1800CEB88
 * Callers:
 *     ??_G?$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAAPEAXI@Z @ 0x1800D0280 (--_G-$wnf_subscription_state@$$BY0CA@E@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@QEAA@XZ @ 0x1800CEB60 (--1-$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1801B1FE4 (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 */

void __fastcall wil::details::wnf_subscription_state<unsigned char [32]>::~wnf_subscription_state<unsigned char [32]>(
        wil::details::wnf_subscription_state_base *this)
{
  *(_QWORD *)this = &wil::details::wnf_subscription_state<unsigned char [32]>::`vftable';
  wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
    (char *)this + 8,
    0LL);
  wistd::function<void (enum wil::FolderChangeEvent,unsigned short const *)>::~function<void (enum wil::FolderChangeEvent,unsigned short const *)>((__int64)this + 16);
  wil::details::wnf_subscription_state_base::~wnf_subscription_state_base(this);
}
