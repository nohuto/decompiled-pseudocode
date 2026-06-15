/*
 * XREFs of ?GetPosition_Offload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x1400634F4
 * Callers:
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140062F40 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061E18 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x1400629CC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x140062A78 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::GetPosition_Offload(
        CCrossProcessClientOutputEndpoint *this,
        unsigned __int64 *a2,
        __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 *v4; // r15
  signed __int32 v7; // r12d
  int v8; // r14d
  __int64 v9; // rcx
  unsigned __int64 v10; // r11
  __int64 v11; // r13
  float v12; // xmm6_4
  int v13; // r10d
  signed __int32 v14; // eax
  __int64 v15; // rcx
  double LowPart; // xmm0_8
  double v17; // xmm0_8
  double v18; // xmm1_8
  signed __int64 v19; // rax
  int v20; // eax
  double v21; // xmm2_8
  double v22; // xmm3_8
  float v23; // xmm0_4
  double v24; // xmm0_8
  double v25; // xmm1_8
  unsigned __int64 v26; // rcx
  double v27; // xmm0_8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v34; // [rsp+58h] [rbp-39h]
  unsigned __int64 v35; // [rsp+60h] [rbp-31h] BYREF
  __int64 v36; // [rsp+68h] [rbp-29h] BYREF
  __int64 v37; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-19h] BYREF
  CCrossProcessClientOutputEndpoint *v39; // [rsp+80h] [rbp-11h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-9h] BYREF
  __int64 v41; // [rsp+90h] [rbp-1h] BYREF
  CCrossProcessClientOutputEndpoint *v42; // [rsp+98h] [rbp+7h] BYREF
  signed __int32 v43; // [rsp+F8h] [rbp+67h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+110h] [rbp+7Fh] BYREF

  v3 = *((_QWORD *)this + 9);
  v4 = (unsigned __int64 *)a3;
  v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 164), 0, 0);
  v8 = 0;
  if ( (v7 & 4) != 0 )
  {
    a3 = 3LL;
    do
    {
      v3 = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0);
      v10 = *(_QWORD *)(*((_QWORD *)this + 9) + 40 * v3 + 32);
      v34 = v10;
      v11 = *(_QWORD *)(*((_QWORD *)this + 9) + 40 * v3 + 56);
      v12 = *(float *)(*((_QWORD *)this + 9) + 40 * v3 + 64);
      v13 = *(_DWORD *)(*((_QWORD *)this + 9) + 40 * v3 + 68);
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 9) + 160LL), 0, 0);
      if ( (_DWORD)v3 == v14 )
        break;
      a3 = (unsigned int)(a3 - 1);
    }
    while ( (_DWORD)a3 );
    if ( v13 && (_DWORD)v3 == v14 )
    {
      *a2 = v10;
      v15 = v10;
      if ( (v7 & 1) != 0 )
      {
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        if ( PerformanceCount.QuadPart < 0 )
          LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
                  + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
        else
          LowPart = (double)(int)PerformanceCount.LowPart;
        v17 = LowPart * 10000000.0;
        if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
          v18 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
              + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
        else
          v18 = (double)(int)g_u64QPCFrequency;
        v19 = (unsigned int)(int)(v17 / v18);
        if ( v4 )
          *v4 = v19;
        if ( v19 < v11 )
          v20 = 0;
        else
          v20 = v19 - v11;
        v10 = v34;
        v21 = v12;
        v22 = DOUBLE_0_5;
        *a2 += (unsigned int)(int)((double)v20 * v12 / 10000000.0 + 0.5);
        v15 = *a2;
      }
      else
      {
        v22 = DOUBLE_0_5;
        v21 = v12;
      }
      v23 = *((float *)this + 39);
      if ( v23 != v12 )
      {
        v24 = v23;
        if ( v15 < 0 )
          v25 = (double)(int)(v15 & 1 | ((unsigned __int64)v15 >> 1))
              + (double)(int)(v15 & 1 | ((unsigned __int64)v15 >> 1));
        else
          v25 = (double)(int)v15;
        v26 = 0LL;
        v27 = v24 * v25 / v21 + v22;
        if ( v27 >= 9.223372036854776e18 )
        {
          v27 = v27 - 9.223372036854776e18;
          if ( v27 < 9.223372036854776e18 )
            v26 = 0x8000000000000000uLL;
        }
        *a2 = v26 + (unsigned int)(int)v27;
      }
      v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 9) + 24LL), 0LL, 0LL);
      v29 = *((unsigned int *)this + 22);
      v30 = v28 / v29;
      v31 = *a2;
      if ( *a2 > v30 )
      {
        if ( (unsigned int)dword_14008F010 > 5 )
        {
          v36 = *a2;
          v35 = v30;
          v37 = v11;
          v38 = v10;
          v39 = this;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v29,
            byte_14007CA8E,
            a3,
            v3,
            (__int64)&v39,
            (__int64)&v38,
            (__int64)&v37,
            (__int64)&v36,
            (__int64)&v35);
        }
        *a2 = v30;
        v31 = v30;
      }
      v9 = v31 * *((unsigned int *)this + 22);
    }
    else
    {
      v9 = *((_QWORD *)this + 23);
      v8 = -2005139393;
    }
  }
  else
  {
    v9 = 0LL;
  }
  *a2 = v9;
  if ( (unsigned int)dword_14008F010 > 5 )
  {
    if ( v4 )
      v32 = *v4;
    else
      v32 = 0LL;
    v40 = v32;
    v41 = v9;
    v43 = v7;
    v42 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v9,
      byte_14007CA3C,
      a3,
      v3,
      (__int64)&v42,
      (__int64)&v43,
      (__int64)&v41,
      (__int64)&v40);
  }
  if ( v8 < 0 )
    AudCPTraceLoggingErrorHelper("CCrossProcessClientOutputEndpoint::GetPosition_Offload", 404, (unsigned int)v8, v3);
  return (unsigned int)v8;
}
