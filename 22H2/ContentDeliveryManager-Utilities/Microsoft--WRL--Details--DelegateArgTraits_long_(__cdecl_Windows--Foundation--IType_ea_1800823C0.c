/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_IInspectable___Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs___Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs_____::_)(IInspectable___Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_IInspectable___Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs_____lambda_d2e1a1bfe118cc3da1a4c200d83afca4___1_IInspectable___Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs___::Invoke @ 0x1800823C0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18002A5BC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_IInspectable___Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs___Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs_____::___IInspectable___Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_IInspectable___Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs_____lambda_d2e1a1bfe118cc3da1a4c200d83afca4___1_IInspectable___Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs___::Invoke(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 32));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v1);
  return v2;
}
