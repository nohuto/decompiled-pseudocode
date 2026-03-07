void __fastcall InputTraceLogging::Mouse::ProcessInput(
        const struct RIMDEV *a1,
        const struct CMouseProcessor::MouseInputDataEx *a2)
{
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // [rsp+70h] [rbp+27h] BYREF
  int v6; // [rsp+74h] [rbp+2Bh] BYREF
  int v7; // [rsp+78h] [rbp+2Fh] BYREF
  int v8; // [rsp+7Ch] [rbp+33h] BYREF
  int v9; // [rsp+80h] [rbp+37h] BYREF
  int v10; // [rsp+84h] [rbp+3Bh] BYREF
  int v11; // [rsp+88h] [rbp+3Fh] BYREF
  __int64 v12; // [rsp+90h] [rbp+47h] BYREF
  __int64 v13; // [rsp+98h] [rbp+4Fh] BYREF
  __int16 v14; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
  {
    v5 = *(_DWORD *)(v3 + 72);
    v6 = *(_DWORD *)(v3 + 20);
    v7 = *(_DWORD *)(v3 + 16);
    v8 = *(_DWORD *)(v3 + 12);
    v14 = *(_WORD *)(v3 + 6);
    v9 = *(unsigned __int16 *)(v3 + 4);
    v10 = *(unsigned __int16 *)(v3 + 2);
    v12 = *(_QWORD *)(v3 + 56);
    v11 = (unsigned __int8)v2;
    v13 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C02CA7E0,
      (unsigned int)&unk_1C029DEAA,
      v2,
      v3,
      (__int64)&v13,
      (__int64)&v11,
      (__int64)&v12,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v14,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5);
  }
}
