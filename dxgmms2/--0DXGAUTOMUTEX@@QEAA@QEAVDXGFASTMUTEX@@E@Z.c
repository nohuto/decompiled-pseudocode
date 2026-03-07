DXGAUTOMUTEX *__fastcall DXGAUTOMUTEX::DXGAUTOMUTEX(DXGAUTOMUTEX *this, struct DXGFASTMUTEX *const a2)
{
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 592LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_pMutex != NULL",
      592LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return this;
}
