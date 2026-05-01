/*
 * XREFs of ?OnShellHookMessage@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_K_J@Z @ 0x180039D40
 * Callers:
 *     <none>
 * Callees:
 *     ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x180039F70 (-TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Win.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::OnShellHookMessage(
        RTL_SRWLOCK *this,
        __int64 a2,
        unsigned __int64 a3)
{
  RTL_SRWLOCK *v6; // rdi

  if ( a2 == 6 && (PVOID)a3 == this[11].Ptr )
  {
    v6 = this + 10;
    AcquireSRWLockExclusive(this + 10);
    Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::TryUpdateAndReportTitleChange(
      (Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)&this[-2],
      a3);
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
  }
  return 0LL;
}
