__int64 __fastcall lambda_dc20bfb5fb2414edf034afb823885887_::operator()(__int64 a1)
{
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( W32GetCurrentThread() != gTermIO[2] )
  {
    LODWORD(v2) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 919LL);
  }
  if ( (unsigned int)dword_1C035C080 > 4 && tlgKeywordOn((__int64)&dword_1C035C080, 2LL) )
  {
    v2 = (__int64)"EnableMMCSS";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_1C035C080,
      (__int64)&v2);
  }
  return xxxClientEnableMMCSS((*gpsi >> 12) & 1);
}
