/*
 * XREFs of PopHiberEvaluateSkippingMemoryMapValidation @ 0x140B76670
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     EmClientQueryRuleState @ 0x140A87C40 (EmClientQueryRuleState.c)
 */

bool PopHiberEvaluateSkippingMemoryMapValidation()
{
  bool result; // al
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( PopEnableHibernateMemoryMapValidationOverride == -1 )
  {
    v1 = 1;
    EmClientQueryRuleState(&GUID_EM_RULE_SKIP_HIBERNATE_MEMORY_MAP_VALIDATION, &v1);
    result = v1 == 2;
  }
  else
  {
    result = PopEnableHibernateMemoryMapValidationOverride != 0;
  }
  PopHiberSkipMemoryMapValidation = result;
  return result;
}
