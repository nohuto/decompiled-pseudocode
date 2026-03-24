/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800AEAA8
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001210 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_180347500 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_180347508 = 0;
  xmmword_180347510 = 0LL;
  xmmword_180347520 = 0LL;
  xmmword_180347530 = 0LL;
  xmmword_180347540 = 0LL;
  xmmword_180347550 = 0LL;
  return result;
}
