/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_de01ca16b280740cb5775a2ceb806b0d___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs___::Invoke @ 0x1800D5230
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_de01ca16b280740cb5775a2ceb806b0d_::operator() @ 0x1800D4F7C (_lambda_de01ca16b280740cb5775a2ceb806b0d_--operator().c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801B9D54 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs_____::___Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::TabDataModelTabPropertyChangedEventArgs_____lambda_de01ca16b280740cb5775a2ceb806b0d___1_Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher___Windows::Internal::ComposableShell::Tabs::ITabDataModelTabPropertyChangedEventArgs___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = lambda_de01ca16b280740cb5775a2ceb806b0d_::operator()((SwitchItemCollection **)(a1 + 16), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v3);
  return v4;
}
