void __fastcall InputTraceLogging::DManip::ReassignMessage(const struct tagQMSG *a1)
{
  int v1; // ecx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // [rsp+50h] [rbp-10h] BYREF
  int v9; // [rsp+70h] [rbp+10h] BYREF
  __int64 v10; // [rsp+78h] [rbp+18h] BYREF
  int v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF

  if ( IsPointerInputMessage(*((_DWORD *)a1 + 6)) )
  {
    if ( (unsigned int)dword_1C035C080 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C035C080, 4096LL) )
      {
        v11 = *(unsigned __int16 *)(v4 + 34);
        v12 = *(_QWORD *)(v4 + 40);
        LOWORD(v9) = *(_WORD *)(v4 + 32);
        v8 = *(_QWORD *)(v4 + 136);
        LODWORD(v10) = v3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C035C080,
          byte_1C031CEBF,
          v2,
          v3,
          (__int64)&v8,
          (__int64)&v9,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10);
      }
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v1)
         && (unsigned int)dword_1C035C080 > 4
         && tlgKeywordOn((__int64)&dword_1C035C080, 4096LL) )
  {
    v10 = *(_QWORD *)(v7 + 136);
    v9 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C035C080,
      byte_1C031CF28,
      v5,
      v6,
      (__int64)&v10,
      (__int64)&v9);
  }
}
