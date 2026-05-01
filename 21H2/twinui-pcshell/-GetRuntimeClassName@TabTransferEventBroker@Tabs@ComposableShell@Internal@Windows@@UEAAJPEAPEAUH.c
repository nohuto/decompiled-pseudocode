/*
 * XREFs of ?GetRuntimeClassName@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802F9C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::GetRuntimeClassName(
        Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Tabs.TabTransferEventBroker", 0x3Cu, a2);
}
