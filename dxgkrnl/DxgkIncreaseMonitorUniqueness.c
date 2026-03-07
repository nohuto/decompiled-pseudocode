__int64 DxgkIncreaseMonitorUniqueness()
{
  DXGSESSIONMGR *v0; // rcx

  v0 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v0 )
  {
    DXGSESSIONMGR::IncreaseMonitorUniquenessAllSessions(v0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session manager, status 0x%I64x.",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
