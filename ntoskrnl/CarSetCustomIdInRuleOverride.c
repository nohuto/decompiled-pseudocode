/*
 * XREFs of CarSetCustomIdInRuleOverride @ 0x1405D21F0
 * Callers:
 *     <none>
 * Callees:
 *     CarFindRuleClassConfigurationEntryByRuleClassId @ 0x1405D186C (CarFindRuleClassConfigurationEntryByRuleClassId.c)
 *     CarFindRuleOverrideEntryByLocalRuleId @ 0x1405D18C0 (CarFindRuleOverrideEntryByLocalRuleId.c)
 */

__int64 __fastcall CarSetCustomIdInRuleOverride(__int64 a1)
{
  __int64 *RuleClassConfigurationEntryByRuleClassId; // rax
  int v2; // r11d
  unsigned int v3; // r9d
  _QWORD *RuleOverrideEntryByLocalRuleId; // rax
  int v5; // r10d

  RuleClassConfigurationEntryByRuleClassId = CarFindRuleClassConfigurationEntryByRuleClassId(a1, a1);
  if ( RuleClassConfigurationEntryByRuleClassId
    && (RuleOverrideEntryByLocalRuleId = CarFindRuleOverrideEntryByLocalRuleId(
                                           (_QWORD **)RuleClassConfigurationEntryByRuleClassId + 9,
                                           v2)) != 0LL )
  {
    *((_DWORD *)RuleOverrideEntryByLocalRuleId + 15) = v5;
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return v3;
}
