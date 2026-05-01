/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18008F108
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180003660 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_180650160 = 0LL;
  SRWLock.Ptr = 0LL;
  byte_180650168 = 0;
  xmmword_180650170 = 0LL;
  xmmword_180650180 = 0LL;
  xmmword_180650190 = 0LL;
  xmmword_1806501A0 = 0LL;
  xmmword_1806501B0 = 0LL;
  return result;
}
