void CCursorClip::TraceCurrentState(void)
{
  _DWORD *v0; // r8
  __int64 v1; // r9
  int v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h] BYREF

  if ( *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
    {
      v2 = v0[7];
      v3 = v0[6];
      v4 = v0[5];
      v5 = v0[4];
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C02CA7E0,
        byte_1C029B6FE,
        (__int64)v0,
        v1,
        (__int64)&v5,
        (__int64)&v4,
        (__int64)&v3,
        (__int64)&v2);
    }
    InputTraceLogging::Mouse::SetShellClip(
      *(struct tagRECT **)(*((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 264LL),
      *(_DWORD *)(*((_QWORD *)&WPP_MAIN_CB.Reserved + 1) + 272LL));
  }
}
