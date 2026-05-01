/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManager____Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs_____::_)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager___Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs_____lambda_ade9ff6e435f947ca8660033d1593143___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager___Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs_____lambda_ade9ff6e435f947ca8660033d1593143___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs___ @ 0x1803C92AC
 * Callers:
 *     ?AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1803CA98C (-AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManager____Windows::Foundation::Internal::AggregateType_Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs_____::___Windows::UI::Internal::Text::Core::ICoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager___Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs_____lambda_ade9ff6e435f947ca8660033d1593143___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::UI::Internal::Text::Core::CoreKeyboardManager___Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs_____lambda_ade9ff6e435f947ca8660033d1593143___1_Windows::UI::Internal::Text::Core::ICoreKeyboardManager___Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // xmm1_8
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = off_18052A668;
  result = a1;
  *(_QWORD *)(a1 + 32) = v4;
  return result;
}
