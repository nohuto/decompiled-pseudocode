/*
 * XREFs of CarDeregisterRuleOverride @ 0x1405D3CB0
 * Callers:
 *     CarRegisterRuleOverrideAllContexts @ 0x1405D42F0 (CarRegisterRuleOverrideAllContexts.c)
 * Callees:
 *     CarDeleteTelemetryData @ 0x1405D3B74 (CarDeleteTelemetryData.c)
 *     CarFindRuleClassConfigurationEntryByRuleClassId @ 0x1405D3D1C (CarFindRuleClassConfigurationEntryByRuleClassId.c)
 *     CarFindRuleOverrideEntryByLocalRuleId @ 0x1405D3D70 (CarFindRuleOverrideEntryByLocalRuleId.c)
 */

void __fastcall CarDeregisterRuleOverride(__int64 a1)
{
  __int64 RuleClassConfigurationEntryByRuleClassId; // rax
  unsigned int v2; // r9d
  _QWORD *RuleOverrideEntryByLocalRuleId; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  RuleClassConfigurationEntryByRuleClassId = CarFindRuleClassConfigurationEntryByRuleClassId(a1, (unsigned int)a1);
  if ( RuleClassConfigurationEntryByRuleClassId )
  {
    RuleOverrideEntryByLocalRuleId = (_QWORD *)CarFindRuleOverrideEntryByLocalRuleId(
                                                 RuleClassConfigurationEntryByRuleClassId + 72,
                                                 v2);
    v7 = RuleOverrideEntryByLocalRuleId;
    if ( RuleOverrideEntryByLocalRuleId )
    {
      v4 = RuleOverrideEntryByLocalRuleId + 8;
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
    }
  }
  CarDeleteTelemetryData(&v7);
}
