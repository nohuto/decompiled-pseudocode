/*
 * XREFs of CarRegisterRuleOverrideAllContexts @ 0x1405D1E40
 * Callers:
 *     CarRegisterRuleOverridesAllContexts @ 0x1405D1F10 (CarRegisterRuleOverridesAllContexts.c)
 * Callees:
 *     CarCreateRuleOverrideEntry @ 0x1405D1544 (CarCreateRuleOverrideEntry.c)
 *     CarDeregisterRuleOverride @ 0x1405D1800 (CarDeregisterRuleOverride.c)
 *     CarFindRuleClassConfigurationEntryByRuleClassId @ 0x1405D186C (CarFindRuleClassConfigurationEntryByRuleClassId.c)
 */

__int64 __fastcall CarRegisterRuleOverrideAllContexts(__int64 a1, __int64 a2)
{
  int v3; // ebx
  int v4; // edx
  __int64 v5; // rcx
  __int64 *RuleClassConfigurationEntryByRuleClassId; // rsi
  _OWORD *v7; // rcx
  __int64 *v8; // rcx
  __int64 **v9; // r8
  _OWORD *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  v3 = a1;
  if ( a2 )
  {
    CarDeregisterRuleOverride(a1);
    RuleClassConfigurationEntryByRuleClassId = CarFindRuleClassConfigurationEntryByRuleClassId(v5, v3);
    if ( RuleClassConfigurationEntryByRuleClassId )
    {
      v4 = CarCreateRuleOverrideEntry(&v11);
      if ( v4 >= 0 )
      {
        v7 = v11;
        *v11 = *(_OWORD *)a2;
        v7[1] = *(_OWORD *)(a2 + 16);
        v7[2] = *(_OWORD *)(a2 + 32);
        *((_QWORD *)v7 + 6) = *(_QWORD *)(a2 + 48);
        *((_DWORD *)v7 + 14) = *(_DWORD *)(a2 + 56);
        *((_DWORD *)v7 + 15) = *(_DWORD *)a2 | ((v3 << 16) + 0x10000);
        v8 = (__int64 *)(v7 + 4);
        v9 = (__int64 **)RuleClassConfigurationEntryByRuleClassId[10];
        if ( *v9 != RuleClassConfigurationEntryByRuleClassId + 9 )
          __fastfail(3u);
        *v8 = (__int64)(RuleClassConfigurationEntryByRuleClassId + 9);
        v8[1] = (__int64)v9;
        *v9 = v8;
        RuleClassConfigurationEntryByRuleClassId[10] = (__int64)v8;
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
