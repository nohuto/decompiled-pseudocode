void __fastcall InputTraceLogging::Cursor::DeadzoneJumpSuggestion(
        __int64 a1,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3)
{
  _DWORD *v3; // r8
  __int64 v4; // r9
  int *v5; // r10
  int v6; // [rsp+50h] [rbp-18h] BYREF
  int v7; // [rsp+54h] [rbp-14h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 8LL) )
  {
    LODWORD(v9) = v3[1];
    LODWORD(v10) = *v3;
    v6 = v5[1];
    v7 = *v5;
    v8 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029B598,
      (__int64)v3,
      v4,
      (void **)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v10,
      (__int64)&v9);
  }
}
