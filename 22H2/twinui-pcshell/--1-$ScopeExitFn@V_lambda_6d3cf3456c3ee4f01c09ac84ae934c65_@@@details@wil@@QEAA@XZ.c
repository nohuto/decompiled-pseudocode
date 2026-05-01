/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_6d3cf3456c3ee4f01c09ac84ae934c65_@@@details@wil@@QEAA@XZ @ 0x18036C54C
 * Callers:
 *     _Internal::ComposableShell::Multitasking::ISwitchItemDataView::SwitchItemDataViewImpl::EvaluateItem::[Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView]::add_::_1_::dtor$2 @ 0x18037D859 (_Internal--ComposableShell--Multitasking--ISwitchItemDataView--SwitchItemDataViewIm_ea_18037D859.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::ScopeExitFn<_lambda_6d3cf3456c3ee4f01c09ac84ae934c65_>::~ScopeExitFn<_lambda_6d3cf3456c3ee4f01c09ac84ae934c65_>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        struct EventRegistrationToken a4)
{
  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    Platform::Details::EventSourceRemove(
      (Platform::Details *)(*a1 + 64LL),
      (void **)(*a1 + 136LL),
      *(struct Platform::Details::EventLock **)a1[1],
      a4);
  }
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
}
