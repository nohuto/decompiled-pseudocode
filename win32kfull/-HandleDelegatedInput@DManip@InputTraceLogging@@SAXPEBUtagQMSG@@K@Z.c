void __fastcall InputTraceLogging::DManip::HandleDelegatedInput(const struct tagQMSG *a1)
{
  int v1; // ecx
  unsigned int v2; // r11d
  __int64 v3; // r10
  int v4; // r9d
  unsigned int v5; // r11d
  __int64 v6; // r10
  int v7; // r9d
  __int64 v8; // [rsp+50h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-18h] BYREF
  __int64 v10; // [rsp+60h] [rbp-10h] BYREF
  __int64 v11; // [rsp+80h] [rbp+10h] BYREF
  __int64 v12; // [rsp+90h] [rbp+20h] BYREF
  __int64 v13; // [rsp+98h] [rbp+28h] BYREF

  if ( IsPointerInputMessage(*((_DWORD *)a1 + 6)) )
  {
    if ( (unsigned int)dword_1C035C080 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C035C080, 4096LL) )
      {
        v8 = (__int64)InputTraceLogging::DelegationResponseToString(v2);
        LODWORD(v13) = *(unsigned __int16 *)(v3 + 34);
        v9 = *(_QWORD *)(v3 + 40);
        LOWORD(v11) = *(_WORD *)(v3 + 32);
        v10 = *(_QWORD *)(v3 + 136);
        LODWORD(v12) = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          (int)&dword_1C035C080,
          (__int64)&v10,
          (__int64)&v11,
          (__int64)&v9,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v8);
      }
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v1)
         && (unsigned int)dword_1C035C080 > 4
         && tlgKeywordOn((__int64)&dword_1C035C080, 4096LL) )
  {
    v12 = (__int64)InputTraceLogging::DelegationResponseToString(v5);
    v13 = *(_QWORD *)(v6 + 136);
    LODWORD(v11) = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)&dword_1C035C080,
      (__int64)&v13,
      (__int64)&v11,
      (__int64)&v12);
  }
}
