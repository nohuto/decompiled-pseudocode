__int64 __fastcall RIMSetSystemInputMode(__int64 a1)
{
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1;
  if ( !*(_BYTE *)SGDGetUserGdiSessionState(a1) )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
    {
      v3 = InputTraceLogging::InputModeToString(v2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_1C02CA7E0,
        (__int64)&v3);
    }
    RIMSyncWalkRimObjList(1LL, &v2, lambda_1fab3903b5a8bfcd713af340c69f2789_::_lambda_invoker_cdecl_);
  }
  return 0LL;
}
