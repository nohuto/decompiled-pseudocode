void __fastcall VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound(VIDMM_COMMIT_TELEMETRY *this, char a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // [rsp+40h] [rbp-30h] BYREF
  __int64 ProcessImageFileName; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int16 *v10; // [rsp+50h] [rbp-20h] BYREF
  GUID ActivityId; // [rsp+58h] [rbp-18h] BYREF

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 280LL)) <= 5 )
  {
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C0076048 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0076048, 0x10000LL) )
      {
        v5 = *((_QWORD *)this + 1);
        v8 = **(_QWORD **)(v5 + 8);
        ProcessImageFileName = PsGetProcessImageFileName(**(_QWORD **)(v5 + 8));
        v6 = *(_QWORD *)(*(_QWORD *)this + 24LL);
        v10 = *(unsigned __int16 **)(v6 + 1744);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
          v6,
          byte_1C00562FE,
          &ActivityId,
          v7,
          &v10,
          (void **)&ProcessImageFileName,
          (__int64)&v8);
      }
    }
    LOBYTE(v4) = a2;
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation(this, *((__int64 ***)this + 2), v4, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState(this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      this,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
      &ActivityId);
  }
}
