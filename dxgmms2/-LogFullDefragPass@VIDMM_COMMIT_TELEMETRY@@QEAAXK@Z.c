/*
 * XREFs of ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00F4B94
 * Callers:
 *     ?DefragmentSegment@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00EC880 (-DefragmentSegment@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014A7C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3@Z @ 0x1C00307A4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@-$_tlgWriteTemplate@.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C00F4134 (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00F4E6C (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00F5250 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogFullDefragPass(__int64 ***this, int a2)
{
  __int64 v4; // r9
  __int64 **v5; // rax
  __int64 v6; // rcx
  int v7; // [rsp+40h] [rbp-30h] BYREF
  int v8; // [rsp+44h] [rbp-2Ch] BYREF
  unsigned __int16 *v9; // [rsp+48h] [rbp-28h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-20h] BYREF

  if ( *((_BYTE *)this + 24) && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this[1] + 68) <= 5 )
  {
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C0076048 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0076048, 0x200000000000LL) )
      {
        v5 = *this;
        v7 = a2;
        v6 = (__int64)v5[3];
        v9 = *(unsigned __int16 **)(v6 + 1744);
        v8 = 1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>>(
          v6,
          byte_1C0056411,
          &ActivityId,
          v4,
          (__int64)&v8,
          &v9,
          (__int64)&v7);
      }
    }
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation((VIDMM_COMMIT_TELEMETRY *)this, this[2], 0LL, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState((VIDMM_COMMIT_TELEMETRY *)this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      (VIDMM_COMMIT_TELEMETRY *)this,
      (struct VIDMM_PROCESS_ADAPTER_INFO *)this[1][2],
      &ActivityId);
  }
}
