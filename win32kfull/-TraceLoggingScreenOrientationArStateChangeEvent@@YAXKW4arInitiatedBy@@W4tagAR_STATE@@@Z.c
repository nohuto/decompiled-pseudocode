void __fastcall TraceLoggingScreenOrientationArStateChangeEvent(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r10d
  int v6; // [rsp+50h] [rbp-18h] BYREF
  int v7; // [rsp+54h] [rbp-14h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h] BYREF
  int v9; // [rsp+78h] [rbp+10h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v9 = a2;
  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
    {
      v10 = 0;
      v6 = 0;
      v9 = v4;
      v7 = v5;
      v8 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v2,
        byte_1C031E4EB,
        v3,
        v4,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v10,
        (__int64)&v9);
    }
  }
}
