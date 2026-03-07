struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceBddFallbackAdapter(DXGGLOBAL *this, unsigned __int64 *a2)
{
  DXGADAPTER *v4; // r9
  DXGADAPTER *v5; // r8
  DXGADAPTER *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  _BYTE v10[24]; // [rsp+50h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGGLOBAL *)((char *)this + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v4 = (DXGGLOBAL *)((char *)this + 768);
  v5 = (DXGADAPTER *)*((_QWORD *)this + 96);
  while ( v5 != v4 && v5 )
  {
    v6 = v5;
    if ( DXGADAPTER::IsBddFallbackDriver(v5) )
    {
      _m_prefetchw((char *)v6 + 24);
      v7 = *((_QWORD *)v6 + 3);
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 3, v7 + 1, v7);
        if ( v8 == v7 )
        {
          *a2 = -1LL;
          goto LABEL_11;
        }
      }
    }
  }
  WdLogSingleEntry1(1LL, 3162LL);
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"BDD Fallback not found!", 3162LL, 0LL, 0LL, 0LL, 0LL);
  v6 = 0LL;
LABEL_11:
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v6;
}
