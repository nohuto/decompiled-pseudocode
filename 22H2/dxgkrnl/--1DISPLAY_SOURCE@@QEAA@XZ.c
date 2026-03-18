/*
 * XREFs of ??1DISPLAY_SOURCE@@QEAA@XZ @ 0x1C02BAFC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00083F8 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DISPLAY_SOURCE::~DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  void *v2; // rcx

  if ( *((_QWORD *)this + 100) )
  {
    WdLogSingleEntry1(1LL, 4225LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_PristineCursor.pPixels == NULL",
      4225LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 106) )
  {
    WdLogSingleEntry1(1LL, 4226LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SavedCursor.pPixels == NULL", 4226LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 111) )
  {
    WdLogSingleEntry1(1LL, 4227LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ClippedCursor.pPixels == NULL", 4227LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (void *)*((_QWORD *)this + 116);
  if ( v2 )
    ObfDereferenceObject(v2);
  DXGFASTMUTEX::~DXGFASTMUTEX((DISPLAY_SOURCE *)((char *)this + 3784));
}
