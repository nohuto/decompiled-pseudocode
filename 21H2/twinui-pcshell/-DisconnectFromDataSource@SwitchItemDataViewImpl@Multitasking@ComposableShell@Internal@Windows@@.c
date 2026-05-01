/*
 * XREFs of ?DisconnectFromDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXXZ @ 0x180370E54
 * Callers:
 *     ??1?$ScopeExitFn@V_lambda_88ed6296b11675e8a4b332e98eebf27c_@@@details@wil@@QEAA@XZ @ 0x18036C874 (--1-$ScopeExitFn@V_lambda_88ed6296b11675e8a4b332e98eebf27c_@@@details@wil@@QEAA@XZ.c)
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x180376350 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BF80 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::DisconnectFromDataSource(
        __int64 a1)
{
  __int64 *v1; // rbx
  int v2; // eax

  v1 = (__int64 *)(a1 + 88);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 80LL))(
         *(_QWORD *)(a1 + 88),
         *(_QWORD *)(a1 + 96));
  if ( v2 < 0 )
  {
    __abi_WinRTraiseException(v2);
    __debugbreak();
  }
  return __abi_winrt_ptr_assign(v1, 0LL);
}
