__int64 __fastcall DXGGLOBAL::GetMaximumGlobalAdapterCount(DXGGLOBAL *this)
{
  if ( !*((_DWORD *)this + 341) )
  {
    WdLogSingleEntry1(1LL, 2723LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaximumGlobalAdapterCount > 0", 2723LL, 0LL, 0LL, 0LL, 0LL);
  }
  return *((unsigned int *)this + 341);
}
