__int64 __fastcall CMouseProcessor::InertiaEndSuppression::HandleMake(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx

  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( !CInertiaManager::QueryInertia(v6 + 16904, *(_QWORD *)&gptCursorAsync, 15) && a2 > *(_QWORD *)(v6 + 16904) )
    return 1LL;
  *a1 = 1;
  return 0LL;
}
