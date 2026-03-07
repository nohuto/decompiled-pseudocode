char __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_140CF7760;
    if ( qword_140CF7760 )
    {
      if ( *(_QWORD *)(qword_140CF7760 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140CF7760 + 40));
        v2 = qword_140CF7760;
      }
      BgpFwFreeMemory(v2);
      qword_140CF7760 = 0LL;
    }
  }
  return BgpFwReleaseLock();
}
