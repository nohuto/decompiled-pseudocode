CInteraction *__fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInContact(
        InteractionSourceManager *a1,
        int a2)
{
  CInteraction *result; // rax
  __int64 v5; // r9
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+30h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+50h] [rbp-18h]

  result = InteractionSourceManager::GetActiveInteraction(a1);
  if ( !a2 && result )
  {
    result = CInteraction::CreateDCompStats(result);
    if ( result )
    {
      v9 = 0LL;
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0LL;
      *(_QWORD *)&v6 = InteractionSourceManager::TryGetActiveManipulation(a1);
      HIDWORD(v6) = 2;
      LODWORD(v7) = 2;
      return (CInteraction *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v5 + 200LL))(
                               v5,
                               *((_QWORD *)g_pComposition + 62),
                               &v6);
    }
  }
  return result;
}
