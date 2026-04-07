/*
 * XREFs of ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x1800807F4
 * Callers:
 *     ??1CAnalogCompositorManager@@AEAA@XZ @ 0x1800538F8 (--1CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180040558 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800810F0 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?delete_event_watcher_state@details@wil@@YAXPEAUevent_watcher_state@12@@Z @ 0x180081210 (-delete_event_watcher_state@details@wil@@YAXPEAUevent_watcher_state@12@@Z.c)
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x18008122C (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 */

void __fastcall Windows::Mirage::HolographicDriverDetectedWatcher::~HolographicDriverDetectedWatcher(
        Windows::Mirage::HolographicDriverDetectedWatcher *this,
        struct wil::details::registry_watcher_state *a2)
{
  CONFIGRET v3; // eax
  DWORD v4; // eax
  unsigned int v5; // r8d
  wil::details *v6; // rcx
  wil::details *v7; // rcx
  wil::details *v8; // rcx
  void *v9; // rdx
  unsigned int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 5) )
  {
    v3 = CM_Unregister_Notification();
    v4 = CM_MapCrToWin32Err(v3, 0x507u);
    if ( v4 )
    {
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x7D, v5, (const char *)v4, v10);
      __debugbreak();
    }
    *((_QWORD *)this + 5) = 0LL;
  }
  v6 = (wil::details *)*((_QWORD *)this + 4);
  if ( v6 )
    wil::details::delete_registry_watcher_state(v6, a2);
  v7 = (wil::details *)*((_QWORD *)this + 3);
  if ( v7 )
    wil::details::delete_event_watcher_state(v7, a2);
  v8 = (wil::details *)*((_QWORD *)this + 2);
  if ( v8 )
    wil::details::delete_event_watcher_state(v8, a2);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 1,
    a2);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this,
    v9);
}
