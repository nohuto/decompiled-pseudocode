/*
 * XREFs of PopEnforceDeepSleep @ 0x140991184
 * Callers:
 *     PopEnforceResiliencyScenarios @ 0x140991238 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     PopDeepSleepEnabled @ 0x1402BBA98 (PopDeepSleepEnabled.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402BBAAC (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402BBB98 (PopDeepSleepSetDisengageReason.c)
 *     KeSetMaxDynamicTickDuration @ 0x14056A678 (KeSetMaxDynamicTickDuration.c)
 */

char PopEnforceDeepSleep()
{
  char result; // al
  int v1; // ecx
  char v2; // r8

  _InterlockedCompareExchange64(&PopMaxDynamicTickDurationOriginalValue, KiMaxDynamicTickDuration, 0LL);
  result = PopDeepSleepEnabled();
  if ( result && PopPdcIdleResiliency )
    v2 = 1;
  if ( v1 )
  {
    if ( !v2 )
    {
      if ( !PopDeepSleepEnforced )
      {
        KeSetMaxDynamicTickDuration((unsigned int)(10000000 * v1));
        PopDeepSleepEnforced = 1;
        PopDeepSleepClearDisengageReason(0);
        return PopDeepSleepClearDisengageReason(1u);
      }
      return result;
    }
  }
  else if ( !v2 )
  {
    return result;
  }
  if ( PopDeepSleepEnforced )
  {
    KeSetMaxDynamicTickDuration(PopMaxDynamicTickDurationOriginalValue);
    PopDeepSleepEnforced = 0;
    result = PopDeepSleepSetDisengageReason(0);
    if ( !byte_140C3D6F4 )
      return PopDeepSleepSetDisengageReason(1u);
  }
  return result;
}
