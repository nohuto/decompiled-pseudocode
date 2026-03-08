/*
 * XREFs of ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00F546C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00B7F80 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0014A7C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C00300F8 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C00F4134 (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00F4E6C (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00F5250 (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(__int64 ***this, char a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int16 *v7; // [rsp+30h] [rbp-28h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-20h] BYREF

  if ( *((_BYTE *)this + 24) && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this[1] + 66) <= 5 )
  {
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C0076048 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0076048, 0x10000LL) )
      {
        v6 = (__int64)(*this)[3];
        v7 = *(unsigned __int16 **)(v6 + 1744);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>>(
          v6,
          byte_1C0056461,
          &ActivityId,
          v5,
          &v7);
      }
    }
    LOBYTE(v4) = a2;
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation((VIDMM_COMMIT_TELEMETRY *)this, this[2], v4, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState((VIDMM_COMMIT_TELEMETRY *)this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      (VIDMM_COMMIT_TELEMETRY *)this,
      (struct VIDMM_PROCESS_ADAPTER_INFO *)this[1][2],
      &ActivityId);
  }
}
