void __fastcall TraceLoggingGlobalDCsInUse()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 Lock; // [rsp+48h] [rbp+10h] BYREF
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
  {
    Lock = (unsigned int)WPP_MAIN_CB.DeviceLock.Header.Lock;
    v3 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C02C92F8,
      byte_1C0294FD6,
      v0,
      v1,
      (__int64)&v3,
      (__int64)&Lock);
  }
}
