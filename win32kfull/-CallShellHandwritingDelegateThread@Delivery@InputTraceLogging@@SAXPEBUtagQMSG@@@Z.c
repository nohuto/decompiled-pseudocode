void __fastcall InputTraceLogging::Delivery::CallShellHandwritingDelegateThread(const struct tagQMSG *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // [rsp+50h] [rbp-18h] BYREF
  __int64 v4; // [rsp+58h] [rbp-10h] BYREF
  __int16 v5; // [rsp+78h] [rbp+10h] BYREF
  int v6; // [rsp+80h] [rbp+18h] BYREF
  int v7; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C035C080, 16LL) )
    {
      v6 = *(_DWORD *)(v2 + 24);
      v7 = *(unsigned __int16 *)(v2 + 34);
      v3 = *(_QWORD *)(v2 + 40);
      v5 = *(_WORD *)(v2 + 32);
      v4 = *(_QWORD *)(v2 + 136);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C035C080,
        byte_1C031CC71,
        v1,
        v2,
        (__int64)&v4,
        (__int64)&v5,
        (__int64)&v3,
        (__int64)&v7,
        (__int64)&v6);
    }
  }
}
