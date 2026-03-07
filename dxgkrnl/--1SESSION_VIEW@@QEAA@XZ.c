void __fastcall SESSION_VIEW::~SESSION_VIEW(SESSION_VIEW *this)
{
  if ( *((_DWORD *)this + 10) || *((SESSION_VIEW **)this + 6) != (SESSION_VIEW *)((char *)this + 48) )
  {
    WdLogSingleEntry1(1LL, 1854LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_NumDisplaySources == 0) && (IsListEmpty(&m_DisplaySourceListHead))",
      1854LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
