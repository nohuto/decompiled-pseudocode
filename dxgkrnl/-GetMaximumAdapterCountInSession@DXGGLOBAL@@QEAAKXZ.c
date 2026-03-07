__int64 __fastcall DXGGLOBAL::GetMaximumAdapterCountInSession(DXGGLOBAL *this)
{
  unsigned int v2; // ecx

  if ( !*((_DWORD *)this + 341) )
  {
    WdLogSingleEntry1(1LL, 2749LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaximumGlobalAdapterCount > 0", 2749LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = 1024;
  if ( (unsigned int)(*((_DWORD *)this + 341) + 2) < 0x400 )
    return (unsigned int)(*((_DWORD *)this + 341) + 2);
  return v2;
}
