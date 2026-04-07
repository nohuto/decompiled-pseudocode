/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180042BE8
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001000 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1800E3F68 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_1800E3F70 = 0;
  xmmword_1800E3F78 = 0LL;
  xmmword_1800E3F88 = 0LL;
  xmmword_1800E3F98 = 0LL;
  xmmword_1800E3FA8 = 0LL;
  xmmword_1800E3FB8 = 0LL;
  return result;
}
