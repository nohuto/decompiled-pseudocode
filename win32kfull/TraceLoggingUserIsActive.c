void __fastcall TraceLoggingUserIsActive(int a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // [rsp+50h] [rbp-28h] BYREF
  __int64 v8; // [rsp+58h] [rbp-20h] BYREF
  __int64 v9[3]; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+90h] [rbp+18h] BYREF
  int v11; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x200000000000LL) )
    {
      v10 = *(_DWORD *)SGDGetUserSessionState(v4);
      v11 = 12;
      v7 = a1;
      v8 = a2;
      v9[0] = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        (int)&unk_1C031E1D1,
        v5,
        v6,
        (__int64)v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
