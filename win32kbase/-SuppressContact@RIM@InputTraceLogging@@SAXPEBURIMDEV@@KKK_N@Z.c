void __fastcall InputTraceLogging::RIM::SuppressContact(
        const struct RIMDEV *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        bool a5)
{
  unsigned int v5; // r8d
  int v6; // r9d
  int v7; // r10d
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // r9
  BOOL v11; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+54h] [rbp-24h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF
  __int64 v15; // [rsp+68h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v11 = a5;
    v12 = v6;
    v14 = (__int64)InputTraceLogging::SuppressionReasonToString(v5);
    LODWORD(v13) = v7;
    v15 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C02CA7E0,
      (int)&unk_1C029938E,
      v9,
      v10,
      (__int64)&v15,
      (__int64)&v13,
      (void **)&v14,
      (__int64)&v12,
      (__int64)&v11);
  }
}
