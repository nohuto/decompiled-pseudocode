__int64 __fastcall GreIncrementDisplaySettingsUniqueness(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1928LL);
  if ( result )
  {
    _InterlockedIncrement((volatile signed __int32 *)(result + 1573008));
    return DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  return result;
}
