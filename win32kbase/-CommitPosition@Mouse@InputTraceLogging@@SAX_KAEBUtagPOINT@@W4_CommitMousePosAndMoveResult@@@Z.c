void __fastcall InputTraceLogging::Mouse::CommitPosition(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // [rsp+50h] [rbp-28h] BYREF
  __int64 v6; // [rsp+58h] [rbp-20h] BYREF
  __int64 v7[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF
  __int64 v9; // [rsp+98h] [rbp+20h] BYREF

  v8 = a2;
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    LODWORD(v8) = v2;
    v6 = (__int64)InputTraceLogging::CommitMousePosAndMoveResultToString(v2);
    LODWORD(v9) = gptCursorAsync.y;
    LODWORD(v5) = gptCursorAsync.x;
    v7[0] = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029DC87,
      v4,
      v3,
      (__int64)v7,
      (__int64)&v5,
      (__int64)&v9,
      (void **)&v6,
      (__int64)&v8);
  }
}
