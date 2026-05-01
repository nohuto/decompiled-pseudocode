/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801AFCBC
 * Callers:
 *     _CScreenClippingExperienceManager::RegisterForHotKeyHandling_::_1_::dtor$5 @ 0x1802591D3 (_CScreenClippingExperienceManager--RegisterForHotKeyHandling_--_1_--dtor$5.c)
 * Callees:
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x1801B1DD0 (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>(
        wil::details **a1,
        struct wil::details::registry_watcher_state *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::delete_registry_watcher_state(v2, a2);
}
