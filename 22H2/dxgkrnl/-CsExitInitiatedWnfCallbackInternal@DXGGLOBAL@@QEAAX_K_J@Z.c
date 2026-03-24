/*
 * XREFs of ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1C0269258
 * Callers:
 *     ?CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C0269130 (-CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_I.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C000C284 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0039288 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C0046318 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1C026B750 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::CsExitInitiatedWnfCallbackInternal(DXGGLOBAL *this, __int64 a2)
{
  char v3; // r15
  __int64 v4; // rdx
  signed __int64 v5; // rcx
  __int64 v6; // r8
  DXGGLOBAL *v7; // r14
  DXGGLOBAL *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v23[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v25[144]; // [rsp+78h] [rbp-90h] BYREF

  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 488, 1, 0) && *((_QWORD *)this + 223) != a2 )
  {
    *((_QWORD *)this + 223) = a2;
    v3 = 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (DXGGLOBAL *)((char *)this + 584), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    v7 = (DXGGLOBAL *)*((_QWORD *)this + 83);
    while ( v7 != (DXGGLOBAL *)((char *)this + 664) && v7 )
    {
      v8 = v7;
      v7 = *(DXGGLOBAL **)v7;
      if ( *((_QWORD *)v8 + 338) && *((_DWORD *)v8 + 739) && *((_DWORD *)v8 + 736) )
      {
        _m_prefetchw((char *)v8 + 24);
        v9 = *((_QWORD *)v8 + 3);
        while ( v9 )
        {
          v5 = v9 + 1;
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 3, v9 + 1, v9);
          if ( v10 == v9 )
          {
            LOBYTE(v9) = 1;
            break;
          }
        }
        if ( (_BYTE)v9 )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v8, 0LL);
          DXGADAPTER::ReleaseReference(v8);
          v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v25, 0LL);
          PerformanceFrequency.QuadPart = 0LL;
          v12 = v11;
          KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( (unsigned int)dword_1C00B1A90 > 5 && tlgKeywordOn((__int64)&dword_1C00B1A90, 0x400000000004LL) )
          {
            v24 = 1000000 * v16 / PerformanceFrequency.QuadPart;
            v20 = *((_DWORD *)v8 + 82);
            v21 = *((_DWORD *)v8 + 81);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
              v14,
              byte_1C007FAE4,
              v15,
              v16,
              (__int64)&v21,
              (__int64)&v20,
              (__int64)&v24);
          }
          if ( (int)v12 < 0 )
          {
            v18 = WdLogNewEntry5_WdWarning(v14, v13, v15);
            *(_QWORD *)(v18 + 24) = v8;
            *(_QWORD *)(v18 + 32) = v12;
            WdLogEvent5_WdWarning(v18);
          }
          else
          {
            LOBYTE(v13) = 0;
            v17 = 0;
            if ( *((_DWORD *)v8 + 736) )
            {
              do
              {
                if ( !*(_DWORD *)(520LL * v17 + *((_QWORD *)v8 + 350) + 208) )
                {
                  DXGADAPTER::SetPowerComponentActiveCBInternal(v8, v17, 1u, 0);
                  LOBYTE(v13) = 1;
                }
                ++v17;
              }
              while ( v17 < *((_DWORD *)v8 + 736) );
              if ( (_BYTE)v13 )
              {
                v3 = 1;
                _InterlockedAdd((volatile signed __int32 *)v8 + 870, 1u);
              }
            }
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25, v13);
        }
        else
        {
          v19 = WdLogNewEntry5_WdWarning(v5, v4, v6);
          *(_QWORD *)(v19 + 24) = v8;
          WdLogEvent5_WdWarning(v19);
        }
      }
    }
    if ( v3 && KeSetTimer((PKTIMER)this + 28, (LARGE_INTEGER)-10000000LL, (PKDPC)this + 29) )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v4);
      DXGGLOBAL::ReleaseComponentReferencesHelper(this);
    }
    _InterlockedExchange((volatile __int32 *)this + 488, 0);
    if ( v23[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v4);
  }
}
