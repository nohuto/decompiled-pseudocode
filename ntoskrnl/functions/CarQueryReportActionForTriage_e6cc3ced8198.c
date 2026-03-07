__int64 __fastcall CarQueryReportActionForTriage(int a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rbx
  __int64 *i; // rax
  __int64 *v7; // r8
  __int64 v9; // r8
  int v10; // r11d
  _QWORD *RuleOverrideEntryByGlobalRuleId; // rax
  _DWORD *v12; // r10

  if ( a3 )
  {
    if ( CarInitialized )
    {
      v5 = CarTriageContext;
      *(_QWORD *)a3 = qword_140046B38[CarTriageContext];
      for ( i = (__int64 *)CarConfigurationEntries; ; i = (__int64 *)*i )
      {
        if ( i == &CarConfigurationEntries )
          return (unsigned int)-1073741275;
        v7 = i - 11;
        if ( *((_DWORD *)i - 6) < a2 && *((_DWORD *)v7 + 17) >= a2 && *(_DWORD *)v7 == a1 )
          break;
      }
      if ( i == (__int64 *)88 )
        return (unsigned int)-1073741275;
      CarOverrideReportAction(a3, &v7[v5 + 1]);
      RuleOverrideEntryByGlobalRuleId = CarFindRuleOverrideEntryByGlobalRuleId((_QWORD **)(v9 + 72), v10);
      if ( RuleOverrideEntryByGlobalRuleId )
        CarOverrideReportAction(v12, (_DWORD *)&RuleOverrideEntryByGlobalRuleId[v5] + 1);
      if ( CarTriageContext < 5 && (CarXdvOptions & 1) != 0 )
        *v12 = 4;
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
