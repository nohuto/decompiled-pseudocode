/*
 * XREFs of ??1_lambda_ded30c34a5b946bc18cf9caf8a4ec53d_@@QEAA@XZ @ 0x18036C274
 * Callers:
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource___Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs_____lambda_16286fe9edebb121e83a2911c5464574____::_1_::dtor$0 @ 0x180367000 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows--Internal--C.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::TypedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView___Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs_____lambda_ded30c34a5b946bc18cf9caf8a4ec53d____::_1_::dtor$0 @ 0x180367224 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--TypedEventHandler_Windows_ea_180367224.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_Windows::Internal::ComposableShell::Multitasking::ISwitchItem_____lambda_843a4523c4ce898f7fb4bb4d9e96aac5____::_1_::dtor$0 @ 0x180367448 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChangedEventHandler.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::UI::Xaml::Interop::BindableVectorChangedEventHandler__lambda_fa30a613036bcec23797998bf71b5136____::_1_::dtor$0 @ 0x18036766C (_Platform--EventSource--DoInvokeVoid_Windows--UI--Xaml--Interop--BindableVectorChangedEventHandl.c)
 *     _Platform::EventSource::DoInvokeVoid_Windows::Foundation::Collections::VectorChangedEventHandler_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata_____lambda_0185f2fcaf29182e01e5e20f55c595fb____::_1_::dtor$0 @ 0x180385CD0 (_Platform--EventSource--DoInvokeVoid_Windows--Foundation--Collections--VectorChange_ea_180385CD0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall _lambda_ded30c34a5b946bc18cf9caf8a4ec53d_::~_lambda_ded30c34a5b946bc18cf9caf8a4ec53d_(
        _lambda_ded30c34a5b946bc18cf9caf8a4ec53d_ *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
}
