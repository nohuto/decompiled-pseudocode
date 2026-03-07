void __fastcall CTelemetryFrameStatistics::SendUnpresentedFramesAlarmTelemetry(
        CTelemetryFrameStatistics *this,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+40h] [rbp+8h] BYREF
  DWORD CurrentProcessId; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1803E0B40 > 5 && tlgKeywordOn((__int64)&dword_1803E0B40, 0x400000000000LL) )
  {
    v6 = *((_DWORD *)this + 6);
    CurrentProcessId = GetCurrentProcessId();
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1803E0B40,
      (int)&unk_18037C1BE,
      v4,
      v5,
      (__int64)&CurrentProcessId,
      (__int64)&v6);
  }
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 1) = a2;
}
