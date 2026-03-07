void __fastcall DXGGLOBAL::CsExitInitiatedWnfCallbackInternal(DXGGLOBAL *this, __int64 a2)
{
  char v3; // r15
  DXGGLOBAL *v4; // r14
  DXGGLOBAL *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // dl
  unsigned int v14; // esi
  int v15; // [rsp+48h] [rbp-C0h] BYREF
  int v16; // [rsp+4Ch] [rbp-BCh] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v18[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v20[144]; // [rsp+78h] [rbp-90h] BYREF

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 524, 1, 0) && *((_QWORD *)this + 241) != a2 )
  {
    *((_QWORD *)this + 241) = a2;
    v3 = 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (DXGGLOBAL *)((char *)this + 672), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    v4 = (DXGGLOBAL *)*((_QWORD *)this + 96);
    while ( v4 != (DXGGLOBAL *)((char *)this + 768) && v4 )
    {
      v5 = v4;
      v4 = *(DXGGLOBAL **)v4;
      if ( *((_QWORD *)v5 + 366) && *((_DWORD *)v5 + 795) && *((_DWORD *)v5 + 792) )
      {
        _m_prefetchw((char *)v5 + 24);
        v6 = *((_QWORD *)v5 + 3);
        while ( v6 )
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 3, v6 + 1, v6);
          if ( v7 == v6 )
          {
            LOBYTE(v6) = 1;
            break;
          }
        }
        if ( (_BYTE)v6 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, v5, 0LL);
          DXGADAPTER::ReleaseReference(v5);
          v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20, 0LL);
          PerformanceFrequency.QuadPart = 0LL;
          v9 = v8;
          KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000004LL) )
          {
            v19 = 1000000 * v12 / PerformanceFrequency.QuadPart;
            v15 = *((_DWORD *)v5 + 104);
            v16 = *((_DWORD *)v5 + 103);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v10,
              byte_1C009F70A,
              v11,
              v12,
              (__int64)&v16,
              (__int64)&v15,
              (__int64)&v19);
          }
          if ( (int)v9 < 0 )
          {
            WdLogSingleEntry2(3LL, v5, v9);
          }
          else
          {
            v13 = 0;
            v14 = 0;
            if ( *((_DWORD *)v5 + 792) )
            {
              do
              {
                if ( !*(_DWORD *)(520LL * v14 + *((_QWORD *)v5 + 378) + 208) )
                {
                  DXGADAPTER::SetPowerComponentActiveCBInternal(v5, v14, 1u, 0);
                  v13 = 1;
                }
                ++v14;
              }
              while ( v14 < *((_DWORD *)v5 + 792) );
              if ( v13 )
              {
                v3 = 1;
                _InterlockedAdd((volatile signed __int32 *)v5 + 926, 1u);
              }
            }
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20);
        }
        else
        {
          WdLogSingleEntry1(3LL, v5);
        }
      }
    }
    if ( v3 && KeSetTimer((PKTIMER)((char *)this + 1936), (LARGE_INTEGER)-10000000LL, (PKDPC)((char *)this + 2000)) )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
      DXGGLOBAL::ReleaseComponentReferencesHelper(this);
    }
    _InterlockedExchange((volatile __int32 *)this + 524, 0);
    if ( v18[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  }
}
