/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x180047500
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180007A8C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180008BF0 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__()
{
  int v0; // eax

  if ( wil::details::g_processShutdownInProgress )
    goto LABEL_6;
  v0 = (int)wil::details::g_pfnDllShutdownInProgress;
  if ( wil::details::g_pfnDllShutdownInProgress )
    v0 = wil::details::g_pfnDllShutdownInProgress();
  if ( v0 )
  {
LABEL_6:
    wil::details::g_enabledStateManager = 0;
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  }
  else
  {
    wil::details::EnabledStateManager::`scalar deleting destructor'((wil::details::EnabledStateManager *)&wil::details::g_enabledStateManager);
  }
}
