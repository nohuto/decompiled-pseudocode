/*
 * XREFs of _WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler_XamlAltTabViewController_void_(__cdecl_IXamlMultitaskingViewController::_)(Windows::Internal::ComposableShell::Multitasking::ISwitchItem__)__::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture @ 0x18038F2B4
 * Callers:
 *     ??$?0VXamlAltTabViewController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVXamlAltTabViewController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUISwitchItem@Multitasking@3Internal@Windows@@@ZW4CallbackContext@Platform@@_N@Z @ 0x18038E320 (--$-0VXamlAltTabViewController@@P8IXamlMultitaskingViewController@@E$AAAXPE$AAUISwi_ea_18038E320.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18037224C (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::ItemInvokedEventHandler_XamlAltTabViewController_void____cdecl_IXamlMultitaskingViewController::___Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____::_2_::__abi_PointerToMemberWeakRefCapture::__abi_PointerToMemberWeakRefCapture(
        __int64 a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 WeakReference; // rdi

  *(_QWORD *)a1 = &off_18064D4F0;
  WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference((a2 + 144) & -(__int64)(a2 != 0));
  *(_QWORD *)(a1 + 8) = __abi_winrt_ptr_ctor(WeakReference);
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 16LL))(WeakReference);
  *(_OWORD *)(a1 + 16) = *a3;
  return a1;
}
