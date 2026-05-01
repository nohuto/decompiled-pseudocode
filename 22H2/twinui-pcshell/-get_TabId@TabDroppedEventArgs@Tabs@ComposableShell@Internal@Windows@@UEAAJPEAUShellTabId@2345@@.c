/*
 * XREFs of ?get_TabId@TabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUShellTabId@2345@@Z @ 0x18008DA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs::get_TabId(
        Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs *this,
        struct Windows::Internal::ComposableShell::Tabs::ShellTabId *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = *((_OWORD *)this + 5);
  return result;
}
