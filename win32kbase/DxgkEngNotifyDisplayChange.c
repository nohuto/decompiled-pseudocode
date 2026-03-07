__int64 __fastcall DxgkEngNotifyDisplayChange(char a1)
{
  __int64 v1; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState() + 24) + 1928LL);
    if ( v1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 1573520));
      DisplayScenarioJournalDisplayUniquenessIncremented();
    }
  }
  else
  {
    GreIncrementDisplaySettingsUniqueness();
  }
  return UserNotifyDisplayChange();
}
