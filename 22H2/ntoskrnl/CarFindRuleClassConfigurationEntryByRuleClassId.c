/*
 * XREFs of CarFindRuleClassConfigurationEntryByRuleClassId @ 0x1405D3D1C
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x1405D3C10 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x1405D3CB0 (CarDeregisterRuleOverride.c)
 *     CarRegisterRuleOverride @ 0x1405D4200 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x1405D42F0 (CarRegisterRuleOverrideAllContexts.c)
 *     CarReportRuleViolation @ 0x1405D4410 (CarReportRuleViolation.c)
 *     CarSetCustomIdInRuleOverride @ 0x1405D46A0 (CarSetCustomIdInRuleOverride.c)
 *     CarSetCustomRuleIdRange @ 0x1405D46F0 (CarSetCustomRuleIdRange.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CarFindRuleClassConfigurationEntryByRuleClassId(__int64 a1, int a2)
{
  __int64 *i; // rax

  for ( i = (__int64 *)CarConfigurationEntries; ; i = (__int64 *)*i )
  {
    if ( i == &CarConfigurationEntries )
      return 0LL;
    if ( *((_DWORD *)i - 21) == a2 )
      break;
  }
  return i - 11;
}
