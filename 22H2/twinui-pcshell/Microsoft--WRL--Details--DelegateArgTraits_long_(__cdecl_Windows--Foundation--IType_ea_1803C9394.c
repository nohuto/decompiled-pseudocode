/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManager____Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputPaneTryHideRequestedEventArgs___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryHideRequestedEventArgs_____::_)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryHideRequestedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager___Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputPaneTryHideRequestedEventArgs_____lambda_542270f247fad256d8d27ca403a1e5a1___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryHideRequestedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager___Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputPaneTryHideRequestedEventArgs_____lambda_542270f247fad256d8d27ca403a1e5a1___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryHideRequestedEventArgs___ @ 0x1803C9394
 * Callers:
 *     ?AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1803CA98C (-AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManager____Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputPaneTryHideRequestedEventArgs___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryHideRequestedEventArgs_____::___Windows::UI::Internal::Text::Core::ICoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryHideRequestedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager___Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputPaneTryHideRequestedEventArgs_____lambda_542270f247fad256d8d27ca403a1e5a1___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryHideRequestedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager___Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputPaneTryHideRequestedEventArgs_____lambda_542270f247fad256d8d27ca403a1e5a1___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryHideRequestedEventArgs___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // xmm1_8
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputPaneTryHideRequestedEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_18052A708;
  result = a1;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
