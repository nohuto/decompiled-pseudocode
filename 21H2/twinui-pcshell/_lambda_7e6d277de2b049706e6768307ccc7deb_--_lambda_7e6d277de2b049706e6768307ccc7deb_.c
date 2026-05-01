/*
 * XREFs of _lambda_7e6d277de2b049706e6768307ccc7deb_::_lambda_7e6d277de2b049706e6768307ccc7deb_ @ 0x18037F0E4
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb___ @ 0x18037E768 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb.c)
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x180383540 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18035C8D4 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_18035C8D4.c)
 */

__int64 __fastcall lambda_7e6d277de2b049706e6768307ccc7deb_::_lambda_7e6d277de2b049706e6768307ccc7deb_(
        __int64 a1,
        __int64 *a2)
{
  *(_QWORD *)a1 = __abi_winrt_ptr_ctor(*a2);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 8),
    (__int64)(a2 + 1));
  *(_QWORD *)(a1 + 8) = &XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::`vftable';
  return a1;
}
