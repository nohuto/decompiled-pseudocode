void __fastcall VIDMM_COMMIT_TELEMETRY::LogDeviceInPenaltyBoxEvent(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_DEVICE *a2,
        char a3)
{
  GUID v6; // xmm0
  const char *v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 ProcessImageFileName; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  const char *v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h] BYREF
  GUID ActivityId; // [rsp+68h] [rbp-18h] BYREF

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 276LL)) <= 6 )
  {
    ActivityId = 0LL;
    if ( a3 )
      EtwActivityIdControl(3u, &ActivityId);
    else
      ActivityId = *(GUID *)((char *)a2 + 284);
    if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x10000LL) )
    {
      v7 = "AddedToPenaltyBox";
      if ( !a3 )
        v7 = "RemovedFromPenaltyBox";
      v8 = (_QWORD *)*((_QWORD *)a2 + 1);
      v16 = v7;
      v17 = *v8;
      ProcessImageFileName = PsGetProcessImageFileName(*v8);
      v9 = *(_QWORD *)(*(_QWORD *)this + 24LL);
      v15 = *(_QWORD *)(v9 + 1744);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        v9,
        byte_1C00563AC,
        &ActivityId,
        v10,
        (unsigned __int16 **)&v15,
        (void **)&ProcessImageFileName,
        (__int64)&v17,
        (void **)&v16);
    }
    if ( a3 )
    {
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(this, *((struct VIDMM_PROCESS_ADAPTER_INFO **)a2 + 2), &ActivityId);
      if ( (unsigned int)dword_1C0076048 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0076048, 0x10000LL) )
        {
          v11 = *((_QWORD *)this + 1);
          v18 = **(_QWORD **)(v11 + 8);
          v15 = PsGetProcessImageFileName(**(_QWORD **)(v11 + 8));
          v12 = *(_QWORD *)(*(_QWORD *)this + 24LL);
          ProcessImageFileName = *(_QWORD *)(v12 + 1744);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
            v12,
            byte_1C0056353,
            &ActivityId,
            v13,
            (unsigned __int16 **)&ProcessImageFileName,
            (void **)&v15,
            (__int64)&v18);
        }
      }
      VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
        this,
        *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
        &ActivityId);
      v6 = ActivityId;
    }
    else
    {
      v6 = GUID_NULL;
    }
    *(GUID *)((char *)a2 + 284) = v6;
  }
}
