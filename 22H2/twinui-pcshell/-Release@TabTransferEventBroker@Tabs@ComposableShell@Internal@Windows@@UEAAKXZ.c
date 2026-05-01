/*
 * XREFs of ?Release@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAKXZ @ 0x1802FA330
 * Callers:
 *     ?Release@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@W7EAAKXZ @ 0x180167F50 (-Release@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::Release(this);
}
