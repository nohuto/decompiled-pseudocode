void __fastcall MANAGEDPRIMARIESTRACKER::~MANAGEDPRIMARIESTRACKER(MANAGEDPRIMARIESTRACKER *this)
{
  if ( (*((_DWORD *)this + 4) & 2) != 0 )
  {
    WdLogSingleEntry1(1LL, 217LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(FALSE == m_bStateSaved)", 217LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*((_DWORD *)this + 4) & 1) != 0 )
    MANAGEDPRIMARIESTRACKER::ReleaseWin32kAndPDEVLocks(this);
}
