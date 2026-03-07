void __fastcall MousePerfSummary::SendMouseLatencyTelemetryRandomPick(LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  LARGE_INTEGER v6; // [rsp+90h] [rbp-9h] BYREF
  LARGE_INTEGER v7; // [rsp+98h] [rbp-1h] BYREF
  LARGE_INTEGER v8; // [rsp+A0h] [rbp+7h] BYREF
  LARGE_INTEGER v9; // [rsp+A8h] [rbp+Fh] BYREF
  LARGE_INTEGER v10; // [rsp+B0h] [rbp+17h] BYREF
  LARGE_INTEGER v11; // [rsp+B8h] [rbp+1Fh] BYREF
  LARGE_INTEGER v12; // [rsp+C0h] [rbp+27h] BYREF
  __int64 LowPart; // [rsp+C8h] [rbp+2Fh] BYREF
  __int64 v14[4]; // [rsp+D0h] [rbp+37h] BYREF
  LONG HighPart; // [rsp+100h] [rbp+67h] BYREF
  LARGE_INTEGER v16; // [rsp+108h] [rbp+6Fh] BYREF
  LARGE_INTEGER v17; // [rsp+110h] [rbp+77h] BYREF
  LARGE_INTEGER v18; // [rsp+118h] [rbp+7Fh] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - this[63].QuadPart)) / gliQpcFreq.QuadPart > 0x1B7740 )
  {
    if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
    {
      v16 = this[76];
      v17 = this[75];
      v18 = this[74];
      v6 = this[73];
      v7 = this[72];
      v8 = this[71];
      v9 = this[70];
      v10 = this[69];
      v11 = this[68];
      v12 = this[67];
      HighPart = this[77].HighPart;
      LowPart = (int)this[77].LowPart;
      v14[0] = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v3,
        (unsigned int)&unk_1C029DFE8,
        v4,
        v5,
        (__int64)v14,
        (__int64)&LowPart,
        (__int64)&HighPart,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16);
    }
    this[65].QuadPart = 0LL;
    this[63] = PerformanceCounter;
    LOBYTE(this[66].LowPart) = 0;
  }
}
