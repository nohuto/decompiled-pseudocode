/*
 * XREFs of ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@1@Z @ 0x180033AEC
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003DFB0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x180075340 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

__int64 __fastcall RmpMemoryMonitorUpdateMemoryUsageMetrics(__int64 a1, int a2, int a3)
{
  int v4; // r9d
  int v5; // eax
  __int64 result; // rax
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+50h] [rbp-18h] BYREF
  __int64 v10; // [rsp+58h] [rbp-10h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF
  int v12; // [rsp+88h] [rbp+20h] BYREF
  int v13; // [rsp+90h] [rbp+28h] BYREF
  int v14; // [rsp+98h] [rbp+30h] BYREF

  v4 = 2;
  if ( a2 <= 1 )
    goto LABEL_2;
  if ( a2 == 2 )
  {
    v5 = 1;
  }
  else
  {
    if ( (unsigned int)(a2 - 3) > 1 )
    {
LABEL_2:
      v5 = 0;
      goto LABEL_3;
    }
    v5 = 2;
  }
LABEL_3:
  LODWORD(v10) = v5;
  if ( a3 <= 1 )
  {
LABEL_4:
    v4 = 0;
    goto LABEL_5;
  }
  if ( a3 == 2 )
  {
    v4 = 1;
  }
  else if ( (unsigned int)(a3 - 3) > 1 )
  {
    goto LABEL_4;
  }
LABEL_5:
  result = *(_QWORD *)(a1 + 96);
  HIDWORD(v10) = v4;
  if ( result != v10 )
  {
    RtlPublishWnfStateData(WNF_RM_MEMORY_MONITOR_USAGE_METRICS, 0LL, &v10, 8LL, 0LL);
    if ( (unsigned int)dword_1800B31E0 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      {
        v11 = v10;
        v14 = *(_DWORD *)(a1 + 96);
        v12 = HIDWORD(v10);
        v13 = *(_DWORD *)(a1 + 100);
        v9 = v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v13,
          (unsigned int)&unk_18009E0C4,
          v7,
          v8,
          (__int64)&v9,
          (__int64)&v14,
          (__int64)&v11,
          (__int64)&v13,
          (__int64)&v12);
      }
    }
    result = v10;
    *(_QWORD *)(a1 + 96) = v10;
  }
  return result;
}
