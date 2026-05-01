/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_88ed6296b11675e8a4b332e98eebf27c_@@@details@wil@@QEAA@XZ @ 0x18036C874
 * Callers:
 *     _Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SetDataSource_::_1_::dtor$8 @ 0x1803766D6 (_Windows--Internal--ComposableShell--Multitasking--SwitchItemDataViewImpl--SetDataS_ea_1803766D6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x180370E54 (-DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn<_lambda_88ed6296b11675e8a4b332e98eebf27c_>::~ScopeExitFn<_lambda_88ed6296b11675e8a4b332e98eebf27c_>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    *((_BYTE *)a1 + 8) = 0;
    result = Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DisconnectFromDataSource(*a1);
  }
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
