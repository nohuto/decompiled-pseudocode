void __fastcall InputTraceLogging::DesktopRecalc::RapidHpdComplete(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  int v8; // r9d
  int v9; // r10d
  int v10; // r11d
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+60h] [rbp+Fh] BYREF
  int v14; // [rsp+64h] [rbp+13h] BYREF
  int v15; // [rsp+68h] [rbp+17h] BYREF
  int v16; // [rsp+6Ch] [rbp+1Bh] BYREF
  int v17; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+78h] [rbp+27h] BYREF
  __int64 v19; // [rsp+80h] [rbp+2Fh] BYREF

  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C035C080, 32LL) )
    {
      v13 = a7;
      v18 = a6;
      v14 = a5;
      v15 = v8;
      v16 = v9;
      v17 = v10;
      v19 = (__int64)InputTraceLogging::RapidHpdToString(a1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C035C080,
        byte_1C031EF02,
        v11,
        v12,
        (void **)&v19,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        &v18,
        (__int64)&v13);
    }
  }
}
