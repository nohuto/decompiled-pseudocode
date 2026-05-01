/*
 * XREFs of _wil::MakeAndInitializeOrThrow_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker__::_1_::dtor$0 @ 0x1802F9403
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1802F984C (--1-$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker>::~ComPtr<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
