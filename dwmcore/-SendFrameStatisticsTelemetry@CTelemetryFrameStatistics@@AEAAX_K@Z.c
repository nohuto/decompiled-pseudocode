void __fastcall CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(CTelemetryFrameStatistics *this, __int64 a2)
{
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rcx
  double v7; // xmm1_8
  double v8; // xmm0_8
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  double v11; // xmm0_8
  __int64 v12; // rcx
  double v13; // xmm0_8
  unsigned __int64 v14; // rax
  int v15; // [rsp+70h] [rbp+17h] BYREF
  int v16; // [rsp+74h] [rbp+1Bh] BYREF
  int v17; // [rsp+78h] [rbp+1Fh] BYREF
  DWORD v18; // [rsp+7Ch] [rbp+23h] BYREF
  double v19; // [rsp+80h] [rbp+27h] BYREF
  double v20; // [rsp+88h] [rbp+2Fh] BYREF
  double v21[4]; // [rsp+90h] [rbp+37h] BYREF
  DWORD v22; // [rsp+C0h] [rbp+67h] BYREF
  DWORD v23; // [rsp+D0h] [rbp+77h] BYREF
  int v24; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( *((_DWORD *)this + 8) )
  {
    GetProcessAndSessionId(&v23, &v22);
    if ( (unsigned int)dword_1803E0B40 > 5 && tlgKeywordOn((__int64)&dword_1803E0B40, 0x400000000000LL) )
    {
      v5 = *((_DWORD *)this + 9);
      v24 = *((_DWORD *)this + 11);
      v15 = *((_DWORD *)this + 10) + v24;
      v6 = *((_QWORD *)this + 7);
      v16 = v5;
      v7 = (double)(int)g_qpcFrequency.LowPart / 1000.0;
      if ( v6 < 0 )
        v8 = (double)(int)(v6 & 1 | ((unsigned __int64)v6 >> 1)) + (double)(int)(v6 & 1 | ((unsigned __int64)v6 >> 1));
      else
        v8 = (double)(int)v6;
      v9 = *((unsigned int *)this + 8);
      v10 = *((_QWORD *)this + 6) / v9;
      v19 = v8 / v7;
      if ( v10 < 0 )
        v11 = (double)(int)(v10 & 1 | ((unsigned __int64)v10 >> 1))
            + (double)(int)(v10 & 1 | ((unsigned __int64)v10 >> 1));
      else
        v11 = (double)(int)v10;
      v17 = v9;
      v12 = a2 - *(_QWORD *)this;
      v20 = v11 / v7;
      if ( v12 < 0 )
      {
        v14 = v12;
        v12 &= 1u;
        v13 = (double)(int)(v12 | (v14 >> 1)) + (double)(int)(v12 | (v14 >> 1));
      }
      else
      {
        v13 = (double)(int)v12;
      }
      v18 = v22;
      v21[0] = v13 / v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        byte_18037C206,
        v9,
        v4,
        (__int64)&v23,
        (__int64)&v18,
        (__int64)v21,
        (__int64)&v17,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v24);
    }
    *(_QWORD *)this = a2;
    *((_OWORD *)this + 2) = 0LL;
    *((_OWORD *)this + 3) = 0LL;
  }
}
