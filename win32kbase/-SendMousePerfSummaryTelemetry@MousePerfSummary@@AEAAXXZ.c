void __fastcall MousePerfSummary::SendMousePerfSummaryTelemetry(LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // [rsp+170h] [rbp-80h] BYREF
  LARGE_INTEGER v7; // [rsp+178h] [rbp-78h] BYREF
  LARGE_INTEGER v8; // [rsp+180h] [rbp-70h] BYREF
  LARGE_INTEGER v9; // [rsp+188h] [rbp-68h] BYREF
  __int64 v10; // [rsp+190h] [rbp-60h] BYREF
  LARGE_INTEGER v11; // [rsp+198h] [rbp-58h] BYREF
  LARGE_INTEGER v12; // [rsp+1A0h] [rbp-50h] BYREF
  LARGE_INTEGER v13; // [rsp+1A8h] [rbp-48h] BYREF
  __int64 v14; // [rsp+1B0h] [rbp-40h] BYREF
  LARGE_INTEGER v15; // [rsp+1B8h] [rbp-38h] BYREF
  LARGE_INTEGER v16; // [rsp+1C0h] [rbp-30h] BYREF
  LARGE_INTEGER v17; // [rsp+1C8h] [rbp-28h] BYREF
  __int64 v18; // [rsp+1D0h] [rbp-20h] BYREF
  LARGE_INTEGER v19; // [rsp+1D8h] [rbp-18h] BYREF
  LARGE_INTEGER v20; // [rsp+1E0h] [rbp-10h] BYREF
  LARGE_INTEGER v21; // [rsp+1E8h] [rbp-8h] BYREF
  __int64 v22; // [rsp+1F0h] [rbp+0h] BYREF
  LARGE_INTEGER v23; // [rsp+1F8h] [rbp+8h] BYREF
  LARGE_INTEGER v24; // [rsp+200h] [rbp+10h] BYREF
  LARGE_INTEGER v25; // [rsp+208h] [rbp+18h] BYREF
  __int64 v26; // [rsp+210h] [rbp+20h] BYREF
  LARGE_INTEGER v27; // [rsp+218h] [rbp+28h] BYREF
  LARGE_INTEGER v28; // [rsp+220h] [rbp+30h] BYREF
  LARGE_INTEGER v29; // [rsp+228h] [rbp+38h] BYREF
  __int64 v30; // [rsp+230h] [rbp+40h] BYREF
  LARGE_INTEGER v31; // [rsp+238h] [rbp+48h] BYREF
  LARGE_INTEGER v32; // [rsp+240h] [rbp+50h] BYREF
  LARGE_INTEGER v33; // [rsp+248h] [rbp+58h] BYREF
  __int64 v34; // [rsp+250h] [rbp+60h] BYREF
  LARGE_INTEGER v35; // [rsp+258h] [rbp+68h] BYREF
  LARGE_INTEGER v36; // [rsp+260h] [rbp+70h] BYREF
  LARGE_INTEGER v37; // [rsp+268h] [rbp+78h] BYREF
  __int64 v38; // [rsp+270h] [rbp+80h] BYREF
  LARGE_INTEGER v39; // [rsp+278h] [rbp+88h] BYREF
  LONGLONG QuadPart; // [rsp+280h] [rbp+90h] BYREF
  LARGE_INTEGER v41; // [rsp+288h] [rbp+98h] BYREF
  __int64 v42; // [rsp+290h] [rbp+A0h] BYREF
  __int64 v43[3]; // [rsp+298h] [rbp+A8h] BYREF
  __int64 LowPart; // [rsp+2C0h] [rbp+D0h] BYREF
  LARGE_INTEGER v45; // [rsp+2C8h] [rbp+D8h] BYREF
  LARGE_INTEGER v46; // [rsp+2D0h] [rbp+E0h] BYREF
  LARGE_INTEGER v47; // [rsp+2D8h] [rbp+E8h] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - this[62].QuadPart)) / gliQpcFreq.QuadPart > 0x927C0
    || this[61].LowPart != this[60].HighPart )
  {
    if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
    {
      LowPart = this[49].LowPart;
      v45 = this[47];
      v46 = this[45];
      v47 = this[46];
      v6 = this[44].LowPart;
      v7 = this[42];
      v8 = this[40];
      v9 = this[41];
      v10 = this[39].LowPart;
      v11 = this[37];
      v12 = this[35];
      v13 = this[36];
      v14 = this[34].LowPart;
      v15 = this[32];
      v16 = this[30];
      v17 = this[31];
      v18 = this[29].LowPart;
      v19 = this[27];
      v20 = this[25];
      v21 = this[26];
      v22 = this[24].LowPart;
      v23 = this[22];
      v24 = this[20];
      v25 = this[21];
      v26 = this[19].LowPart;
      v27 = this[17];
      v28 = this[15];
      v29 = this[16];
      v30 = this[14].LowPart;
      v31 = this[12];
      v32 = this[10];
      v33 = this[11];
      v34 = this[9].LowPart;
      v35 = this[7];
      v36 = this[5];
      v37 = this[6];
      v38 = this[4].LowPart;
      v39 = this[2];
      QuadPart = this->QuadPart;
      v41 = this[1];
      v42 = (int)this[61].LowPart;
      v43[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v3,
        (unsigned int)&unk_1C029E259,
        v4,
        v5,
        (__int64)v43,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&QuadPart,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v47,
        (__int64)&v46,
        (__int64)&v45,
        (__int64)&LowPart);
    }
    MousePerfSummary::Reset((MousePerfSummary *)this);
    this[60].HighPart = this[61].LowPart;
    this[62] = PerformanceCounter;
  }
}
