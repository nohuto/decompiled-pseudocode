/*
 * XREFs of ?GetRuntimeClassName@TabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18030B010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs::GetRuntimeClassName(
        Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Tabs.TabWindowSnappedWithOthersEventArgs", 0x49u, a2);
}
