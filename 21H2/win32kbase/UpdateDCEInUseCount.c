/*
 * XREFs of UpdateDCEInUseCount @ 0x1C00A62FC
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C004C7A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?TraceLoggingGlobalDCsInUse@@YAXK@Z @ 0x1C01680A8 (-TraceLoggingGlobalDCsInUse@@YAXK@Z.c)
 */

void __fastcall UpdateDCEInUseCount(int a1, _DWORD *a2)
{
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // ecx
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9[3]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  if ( !bDCEInUseTelemetryDisabled )
  {
    if ( (dword_1C0296CB0 & 1) == 0 )
    {
      dword_1C0296CB0 |= 1u;
      qword_1C0296CB8 = 60 * llEventIntervalMinute * gliQpcFreq.QuadPart;
    }
    v3 = a2[274];
    if ( a1 )
    {
      a2[274] = v3 + 1;
      ++gnInUseDCECount;
      v4 = a2[274];
      if ( a2[275] < v4 )
        a2[275] = v4;
      if ( dword_1C0296608 < (unsigned int)gnInUseDCECount )
        dword_1C0296608 = gnInUseDCECount;
    }
    else
    {
      a2[274] = v3 - 1;
      --gnInUseDCECount;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( !(a2[275] % ulProcessThresholdDCEInUse) )
    {
      v5 = PerformanceCounter.LowPart - qword_1C0296600;
      if ( PerformanceCounter.QuadPart - qword_1C0296600 >= qword_1C0296CB8 )
      {
        if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
        {
          v10 = a2[14];
          v11 = v7;
          v9[0] = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (int)&dword_1C028D610,
            (int)&unk_1C025BAA8,
            v7,
            v8,
            (__int64)v9,
            (__int64)&v11,
            (__int64)&v10);
        }
        qword_1C0296600 = PerformanceCounter.QuadPart;
      }
    }
    if ( !(dword_1C0296608 % ulGlobalThresholdDCEInUse)
      && PerformanceCounter.QuadPart - qword_1C02965F8 >= qword_1C0296CB8 )
    {
      TraceLoggingGlobalDCsInUse(v5);
      qword_1C02965F8 = PerformanceCounter.QuadPart;
    }
  }
}
