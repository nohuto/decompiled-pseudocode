void __fastcall TraceLoggingProcessDCsInUse()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2[3]; // [rsp+40h] [rbp-18h] BYREF
  int v3; // [rsp+70h] [rbp+18h] BYREF
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
  {
    v3 = v0;
    v4 = v1;
    v2[0] = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (int)&dword_1C02C92F8,
      (int)&unk_1C0294F9A,
      v0,
      v1,
      (__int64)v2,
      (__int64)&v4,
      (__int64)&v3);
  }
}
