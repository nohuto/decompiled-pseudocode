void __fastcall DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(DXGSESSIONMGR *this, struct DXGSESSIONDATA *a2)
{
  DXGSESSIONDATA **v2; // rbx

  v2 = (DXGSESSIONDATA **)((char *)this + 136);
  if ( !a2 || a2 != *v2 )
  {
    WdLogSingleEntry1(1LL, 5758LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pConsoleSessionData != NULL) && (pConsoleSessionData == m_pConsoleSessionData)",
      5758LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGSESSIONDATA::ReleaseSessionModeChangeLock(*v2);
}
