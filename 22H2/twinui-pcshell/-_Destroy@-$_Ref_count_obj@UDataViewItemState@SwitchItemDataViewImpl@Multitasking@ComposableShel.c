/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@UDataViewItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@@std@@EEAAXXZ @ 0x180378D80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BCB0 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Ref_count_obj<Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DataViewItemState>::_Destroy(
        __int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 160LL))(
         *(_QWORD *)(a1 + 16),
         *(_QWORD *)(a1 + 32));
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
}
