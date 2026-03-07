void __fastcall VIDMM_COMMIT_TELEMETRY::LogLongPagingPacket(
        VIDMM_COMMIT_TELEMETRY *this,
        struct VIDMM_PAGING_QUEUE_PACKET *a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v12; // [rsp+68h] [rbp-1h] BYREF
  __int64 v13; // [rsp+70h] [rbp+7h] BYREF
  __int64 v14; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+80h] [rbp+17h] BYREF
  __int64 v16; // [rsp+88h] [rbp+1Fh] BYREF
  unsigned __int16 *v17; // [rsp+90h] [rbp+27h] BYREF
  __int64 v18; // [rsp+98h] [rbp+2Fh] BYREF
  GUID ActivityId; // [rsp+A0h] [rbp+37h] BYREF

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 268LL)) <= 5 )
  {
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)dword_1C0076048 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000008LL) )
      {
        v5 = *((_QWORD *)a2 + 17);
        v6 = *((_QWORD *)a2 + 19);
        v11[0] = 2;
        v12 = v6 - v5;
        v7 = *((_QWORD *)a2 + 18);
        v8 = v6 - v7;
        v14 = v7 - v5;
        v9 = *((_QWORD *)this + 1);
        v13 = v8;
        v15 = **(_QWORD **)(v9 + 8);
        v16 = *((_QWORD *)a2 + 4);
        v10 = *(_QWORD *)(*(_QWORD *)this + 24LL);
        v17 = *(unsigned __int16 **)(v10 + 1744);
        v18 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          v10,
          byte_1C005625F,
          &ActivityId,
          v4,
          (__int64)&v18,
          &v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)v11);
      }
    }
    VIDMM_COMMIT_TELEMETRY::LogMemoryState(this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      this,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
      &ActivityId);
  }
}
