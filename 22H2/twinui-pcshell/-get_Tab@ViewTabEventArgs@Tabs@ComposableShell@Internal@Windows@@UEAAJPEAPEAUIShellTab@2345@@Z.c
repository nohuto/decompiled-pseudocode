/*
 * XREFs of ?get_Tab@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAPEAUIShellTab@2345@@Z @ 0x1802F0EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802D7E10 (--$copy_to@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@-$com_ptr_t@UIShellTab@Tabs@Compos.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs::get_Tab(
        Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab **a2)
{
  wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::copy_to<Windows::Internal::ComposableShell::Tabs::IShellTab>(
    (__int64 *)this + 8,
    a2);
  return 0LL;
}
