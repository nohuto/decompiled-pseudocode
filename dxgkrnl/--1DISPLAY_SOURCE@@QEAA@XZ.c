void __fastcall DISPLAY_SOURCE::~DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  void *v2; // rcx

  if ( *((_QWORD *)this + 100) )
  {
    WdLogSingleEntry1(1LL, 4218LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_PristineCursor.pPixels == NULL",
      4218LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 106) )
  {
    WdLogSingleEntry1(1LL, 4219LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SavedCursor.pPixels == NULL", 4219LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 111) )
  {
    WdLogSingleEntry1(1LL, 4220LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ClippedCursor.pPixels == NULL", 4220LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (void *)*((_QWORD *)this + 116);
  if ( v2 )
    ObfDereferenceObject(v2);
  DXGFASTMUTEX::~DXGFASTMUTEX((DISPLAY_SOURCE *)((char *)this + 3784));
}
