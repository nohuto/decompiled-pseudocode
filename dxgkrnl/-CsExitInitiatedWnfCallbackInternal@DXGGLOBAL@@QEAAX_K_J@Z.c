/*
 * XREFs of ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1C01E43AC
 * Callers:
 *     ?CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C01E42E0 (-CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_I.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C000E594 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C001B3DC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C01E4658 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 */

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
