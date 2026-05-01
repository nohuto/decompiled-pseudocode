/*
 * XREFs of ShellFeedsAvailability::_dynamic_atexit_destructor_for__m_registryWatcher__ @ 0x180177560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ShellFeedsAvailability::_dynamic_atexit_destructor_for__m_registryWatcher__(
        __int64 a1,
        struct wil::details::registry_watcher_state *a2)
{
  wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>(
    (wil::details **)&qword_180651440,
    a2);
}
