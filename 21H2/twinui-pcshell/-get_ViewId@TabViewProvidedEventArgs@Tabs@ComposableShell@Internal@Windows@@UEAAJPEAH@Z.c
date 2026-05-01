/*
 * XREFs of ?get_ViewId@TabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAH@Z @ 0x18008DA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs::get_ViewId(
        Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs *this,
        int *a2)
{
  *a2 = *((_DWORD *)this + 20);
  return 0LL;
}
