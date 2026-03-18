/*
 * XREFs of ?SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1801029D0
 * Callers:
 *     ?UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z @ 0x180050CB8 (-UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BB1F8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800BB224 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall CTelemetryFrameStatistics::SendUnpresentedFramesAlarmTelemetry(
        CTelemetryFrameStatistics *this,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+40h] [rbp+8h] BYREF
  DWORD CurrentProcessId; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1803E3B40 > 5 && tlgKeywordOn((__int64)&dword_1803E3B40, 0x400000000000LL) )
  {
    v6 = *((_DWORD *)this + 6);
    CurrentProcessId = GetCurrentProcessId();
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1803E3B40,
      (int)&unk_18037F4D7,
      v4,
      v5,
      (__int64)&CurrentProcessId,
      (__int64)&v6);
  }
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 1) = a2;
}
