__int64 __fastcall DXGGLOBAL::OpenKeyedMutex(
        DXGGLOBAL *this,
        unsigned int a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  volatile signed __int64 *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  int v15; // eax
  unsigned int v16; // edi
  _BYTE v17[8]; // [rsp+50h] [rbp-18h] BYREF
  char v18; // [rsp+58h] [rbp-10h]

  v6 = a2;
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 4581LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ppKeyedMutex", 4581LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 4582LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phKeyedMutex", 4582LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  *a4 = 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v17);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v6, 9);
  v11 = (volatile signed __int64 *)ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 24));
    v12 = *(_QWORD *)(ObjectA + 24);
    while ( v12 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64(v11 + 3, v12 + 1, v12);
      if ( v13 == v12 )
      {
        if ( v18 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
        v15 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v11, a4, a5, a6, 1);
        v16 = v15;
        if ( v15 < 0 )
          WdLogSingleEntry2(3LL, v6, v15);
        else
          *a3 = (struct DXGKEYEDMUTEX *)v11;
        DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v11);
        return v16;
      }
    }
  }
  WdLogSingleEntry2(3LL, v6, -1073741811LL);
  if ( v18 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return 3221225485LL;
}
