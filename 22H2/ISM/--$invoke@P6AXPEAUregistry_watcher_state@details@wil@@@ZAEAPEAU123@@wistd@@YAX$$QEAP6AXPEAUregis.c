/*
 * XREFs of ??$invoke@P6AXPEAUregistry_watcher_state@details@wil@@@ZAEAPEAU123@@wistd@@YAX$$QEAP6AXPEAUregistry_watcher_state@details@wil@@@ZAEAPEAU123@@Z @ 0x18003B30C
 * Callers:
 *     _dynamic_atexit_destructor_for__MPCSixDofProcessor::s_registryWatcher__ @ 0x180052630 (_dynamic_atexit_destructor_for__MPCSixDofProcessor--s_registryWatcher__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::invoke<void (*)(wil::details::registry_watcher_state *),wil::details::registry_watcher_state * &>(
        __int64 (__fastcall **a1)(_QWORD),
        _QWORD *a2)
{
  return (*a1)(*a2);
}
