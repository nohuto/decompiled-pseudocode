__int64 __fastcall DXGVMBUSCHANNEL::RegisterSubscriber(
        DXGVMBUSCHANNEL *this,
        unsigned int a2,
        struct IDXGCHANNELSUBSCRIBER *a3,
        struct IDXGCHANNEL **a4)
{
  __int64 v5; // rsi
  unsigned int v8; // edi
  int v9; // eax
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  struct DXGCHANNELENDPOINTPROXY *v12; // rcx
  char *v13; // rax
  char **v14; // rdx
  char *v15; // rbx
  bool v16; // zf
  struct DXGCHANNELENDPOINTPROXY *v18; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v19[24]; // [rsp+58h] [rbp-20h] BYREF

  v18 = 0LL;
  v5 = a2;
  v8 = -1073740008;
  if ( (unsigned int)DXGVMBUSCHANNEL::ProxyFromSubscriberTag(this, a2, &v18) == -1073741275 )
  {
    v9 = DXGCHANNELENDPOINTPROXY::Create(v5, a3, this, &v18);
    v8 = v9;
    if ( v9 < 0 )
    {
      WdLogSingleEntry4(3LL, v5, v9, 524LL, this);
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (DXGVMBUSCHANNEL *)((char *)this + 72), 1);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      _m_prefetchw((char *)this + 8);
      v10 = *((_DWORD *)this + 2);
      while ( v10 )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)this + 2, v10 + 1, v10);
        if ( v11 == v10 )
          goto LABEL_7;
      }
      WdLogSingleEntry1(1LL, 513LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"b", 513LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
      v12 = v18;
      if ( v18 )
        v13 = (char *)v18 + 16;
      else
        v13 = 0LL;
      v14 = (char **)*((_QWORD *)this + 7);
      v15 = (char *)this + 48;
      if ( *v14 != v15 )
        __fastfail(3u);
      *(_QWORD *)v13 = v15;
      *((_QWORD *)v13 + 1) = v14;
      *v14 = v13;
      v16 = v19[8] == 0;
      *((_QWORD *)v15 + 1) = v13;
      *a4 = v12;
      if ( !v16 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    }
  }
  return v8;
}
