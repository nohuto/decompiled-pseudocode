/*
 * XREFs of CarFindRuleClassConfigurationEntryByRuleClassId @ 0x1405D186C
 * Callers:
 *     CarDeregisterRuleClassConfiguration @ 0x1405D1760 (CarDeregisterRuleClassConfiguration.c)
 *     CarDeregisterRuleOverride @ 0x1405D1800 (CarDeregisterRuleOverride.c)
 *     CarRegisterRuleOverride @ 0x1405D1D50 (CarRegisterRuleOverride.c)
 *     CarRegisterRuleOverrideAllContexts @ 0x1405D1E40 (CarRegisterRuleOverrideAllContexts.c)
 *     CarReportRuleViolation @ 0x1405D1F60 (CarReportRuleViolation.c)
 *     CarSetCustomIdInRuleOverride @ 0x1405D21F0 (CarSetCustomIdInRuleOverride.c)
 *     CarSetCustomRuleIdRange @ 0x1405D2240 (CarSetCustomRuleIdRange.c)
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
