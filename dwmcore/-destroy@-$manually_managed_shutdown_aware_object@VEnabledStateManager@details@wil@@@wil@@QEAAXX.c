/*
 * XREFs of ?destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18010E1F4
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x180120040 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x1800AF9E0 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 */

void __fastcall wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::destroy(
        wil::details::EnabledStateManager *this)
{
  if ( wil::ProcessShutdownInProgress(this) )
  {
    *(_BYTE *)this = 0;
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock(this);
  }
  else
  {
    wil::details::EnabledStateManager::~EnabledStateManager(this);
  }
}
