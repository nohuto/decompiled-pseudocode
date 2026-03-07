void __fastcall InputTraceLogging::RIM::DeliverRawInput(const struct RIMDEV *a1)
{
  int v1; // r8d
  int v2; // r9d
  __int64 v3; // r10
  int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C035C080, 256LL) )
    {
      v4 = v2;
      v5 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C035C080,
        (unsigned int)&unk_1C031B96D,
        v1,
        v2,
        (__int64)&v5,
        (__int64)&v4);
    }
  }
}
