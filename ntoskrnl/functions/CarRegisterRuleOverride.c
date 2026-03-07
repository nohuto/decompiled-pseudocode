__int64 __fastcall CarRegisterRuleOverride(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rsi
  int v8; // ebx
  __int64 *RuleClassConfigurationEntryByRuleClassId; // rax
  int v10; // r10d
  __int64 *v11; // rdi
  int v12; // ebx
  _QWORD *v13; // rdx
  __int64 **v14; // rcx
  __int64 **v15; // r8
  _QWORD *RuleOverrideEntryByGlobalRuleId; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3;
  v8 = a1;
  if ( (unsigned int)(a3 - 1) > 5 )
    return (unsigned int)-1073741811;
  RuleClassConfigurationEntryByRuleClassId = CarFindRuleClassConfigurationEntryByRuleClassId(a1, a1);
  if ( RuleClassConfigurationEntryByRuleClassId )
  {
    v11 = RuleClassConfigurationEntryByRuleClassId + 9;
    v12 = a2 | ((v8 << 16) + 0x10000);
    RuleOverrideEntryByGlobalRuleId = CarFindRuleOverrideEntryByGlobalRuleId(
                                        (_QWORD **)RuleClassConfigurationEntryByRuleClassId + 9,
                                        v12);
    v13 = RuleOverrideEntryByGlobalRuleId;
    if ( !RuleOverrideEntryByGlobalRuleId )
    {
      v10 = CarCreateRuleOverrideEntry(&RuleOverrideEntryByGlobalRuleId);
      if ( v10 < 0 )
        return (unsigned int)v10;
      v13 = RuleOverrideEntryByGlobalRuleId;
      *(_DWORD *)RuleOverrideEntryByGlobalRuleId = a2;
      v14 = (__int64 **)(v13 + 8);
      *((_DWORD *)v13 + 15) = v12;
      v15 = (__int64 **)v11[1];
      if ( *v15 != v11 )
        __fastfail(3u);
      *v14 = v11;
      v13[9] = v15;
      *v15 = (__int64 *)v14;
      v11[1] = (__int64)v14;
    }
    LODWORD(v13[v5 + 1]) = a5;
    HIDWORD(v13[v5]) = a4;
    return (unsigned int)v10;
  }
  return (unsigned int)-1073741772;
}
