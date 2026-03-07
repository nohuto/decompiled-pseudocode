void __fastcall InputTraceLogging::Pointer::GenerateMessage(
        const struct CPointerInputFrame *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        HWND a5)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int16 v8; // r11
  _WORD v9[2]; // [rsp+60h] [rbp+1Fh] BYREF
  int v10; // [rsp+64h] [rbp+23h] BYREF
  int v11; // [rsp+68h] [rbp+27h] BYREF
  HWND v12; // [rsp+70h] [rbp+2Fh] BYREF
  __int64 v13; // [rsp+78h] [rbp+37h] BYREF
  __int64 v14; // [rsp+80h] [rbp+3Fh] BYREF
  __int64 v15; // [rsp+88h] [rbp+47h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    v12 = a5;
    v11 = *(_DWORD *)(v7 + 40);
    v14 = *(_QWORD *)(v7 + 72);
    v15 = *(_QWORD *)(v7 + 216);
    v10 = v6;
    v13 = v5;
    v9[0] = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0299C90,
      v5,
      v6,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v11,
      (__int64)v9,
      (__int64)&v13,
      (__int64)&v10,
      (__int64)&v12);
  }
}
