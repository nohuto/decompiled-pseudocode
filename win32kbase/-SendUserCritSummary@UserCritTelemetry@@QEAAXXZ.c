void __fastcall UserCritTelemetry::SendUserCritSummary(LARGE_INTEGER *this)
{
  LARGE_INTEGER v2; // rcx
  LARGE_INTEGER PerformanceCounter; // r15
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rsi
  LARGE_INTEGER *v9; // r14
  unsigned __int64 *p_QuadPart; // rdi
  __int64 v11; // r9
  LARGE_INTEGER v12; // r8
  unsigned __int64 QuadPart; // rax
  LARGE_INTEGER v14; // rcx
  unsigned __int64 v15; // rax
  LARGE_INTEGER v16; // r8
  LARGE_INTEGER v17; // rcx
  LARGE_INTEGER v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // r8d
  int v25; // r9d
  LARGE_INTEGER *v26; // [rsp+80h] [rbp-39h] BYREF
  __int16 v27; // [rsp+88h] [rbp-31h]
  LARGE_INTEGER *v28; // [rsp+90h] [rbp-29h] BYREF
  __int16 v29; // [rsp+98h] [rbp-21h]
  LARGE_INTEGER *v30; // [rsp+A0h] [rbp-19h] BYREF
  __int16 v31; // [rsp+A8h] [rbp-11h]
  LARGE_INTEGER v32; // [rsp+B0h] [rbp-9h] BYREF
  LARGE_INTEGER v33; // [rsp+B8h] [rbp-1h] BYREF
  LARGE_INTEGER v34; // [rsp+C0h] [rbp+7h] BYREF
  unsigned __int64 v35; // [rsp+C8h] [rbp+Fh] BYREF
  unsigned __int64 v36[8]; // [rsp+D0h] [rbp+17h] BYREF
  LARGE_INTEGER v37; // [rsp+120h] [rbp+67h] BYREF
  __int64 v38; // [rsp+128h] [rbp+6Fh] BYREF
  LARGE_INTEGER v39; // [rsp+130h] [rbp+77h] BYREF
  LARGE_INTEGER v40; // [rsp+138h] [rbp+7Fh] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[604].QuadPart)) / gliQpcFreq.QuadPart > 0x6B49D200 )
  {
    if ( (unsigned int)dword_1C02C93D8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL) )
    {
      v37.LowPart = 1;
      v29 = 15;
      v28 = this + 580;
      v27 = 15;
      v26 = this + 565;
      v30 = this + 550;
      v31 = 15;
      v38 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperArray<8>,_tlgWrapperByVal<4>>(
        15,
        (unsigned int)&unk_1C02946CA,
        v4,
        v5,
        (__int64)&v38,
        (__int64)&v30,
        (__int64)&v26,
        (__int64)&v28,
        (__int64)&v37);
    }
    memset(&this[550], 0, 0x168uLL);
    this[604] = PerformanceCounter;
  }
  if ( (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[605].QuadPart)) / gliQpcFreq.QuadPart > 0xF4240 )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledDeviceUsage)(
                         (LARGE_INTEGER)v2.QuadPart,
                         (unsigned __int64)(1000000 * (PerformanceCounter.QuadPart - this[605].QuadPart))
                       % gliQpcFreq.QuadPart) )
    {
      v8 = (__int64 *)&this[598];
      v9 = this + 595;
      p_QuadPart = (unsigned __int64 *)&this[601].QuadPart;
      UserCritTelemetry::TelemetryBuffer::Update(
        (UserCritTelemetry::TelemetryBuffer *)this,
        (const unsigned __int64 *const)&this[601].QuadPart,
        (const unsigned __int64 *const)&this[595].QuadPart,
        (const unsigned __int64 *const)&this[598].QuadPart);
      if ( (unsigned int)dword_1C02C93D8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x10000000LL) )
      {
        v12 = this[603];
        QuadPart = this[597].QuadPart;
        v14 = this[600];
        v37 = v12;
        v38 = QuadPart;
        v39 = v14;
        if ( v12.QuadPart )
          v15 = QuadPart / v12.QuadPart;
        else
          v15 = 0LL;
        v16 = this[602];
        v17 = this[599];
        v40.QuadPart = v15;
        v18 = this[596];
        v33 = v18;
        v32 = v16;
        v34 = v17;
        if ( v16.QuadPart )
          v19 = v18.QuadPart / (unsigned __int64)v16.QuadPart;
        else
          v19 = 0LL;
        v20 = *p_QuadPart;
        v21 = *v8;
        v35 = v19;
        v22 = v9->QuadPart;
        v30 = (LARGE_INTEGER *)v9->QuadPart;
        v36[0] = v20;
        v26 = (LARGE_INTEGER *)v21;
        if ( v20 )
          v23 = v22 / v20;
        else
          v23 = 0LL;
        v28 = (LARGE_INTEGER *)v23;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v21,
          (int)&unk_1C02945BB,
          v20,
          v11,
          (__int64)&v28,
          (__int64)&v26,
          (__int64)&v30,
          (__int64)v36,
          (__int64)&v35,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v37);
      }
    }
    else
    {
      if ( (unsigned int)dword_1C02C93D8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x10000000LL) )
      {
        v37 = this[603];
        v38 = this[602].QuadPart;
        v39 = this[601];
        v40 = this[597];
        v28 = (LARGE_INTEGER *)this[596].QuadPart;
        v26 = (LARGE_INTEGER *)this[595].QuadPart;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v7,
          (unsigned int)&unk_1C0294536,
          v24,
          v25,
          (__int64)&v26,
          (__int64)&v28,
          (__int64)&v40,
          (__int64)&v39,
          (__int64)&v38,
          (__int64)&v37);
      }
      v9 = this + 595;
      v8 = (__int64 *)&this[598];
      p_QuadPart = (unsigned __int64 *)&this[601].QuadPart;
    }
    *(_OWORD *)&v9->LowPart = 0LL;
    v9[2].QuadPart = 0LL;
    if ( (unsigned int)Feature_AggregateUserCritTelemetryPerSecond__private_IsEnabledDeviceUsage(v7, v6) )
    {
      *(_OWORD *)v8 = 0LL;
      v8[2] = 0LL;
    }
    *(_OWORD *)p_QuadPart = 0LL;
    p_QuadPart[2] = 0LL;
    this[605] = PerformanceCounter;
  }
}
