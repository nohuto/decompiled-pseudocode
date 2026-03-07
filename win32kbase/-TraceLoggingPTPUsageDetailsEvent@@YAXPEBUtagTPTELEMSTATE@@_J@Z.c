void __fastcall TraceLoggingPTPUsageDetailsEvent(const struct tagTPTELEMSTATE *a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  int v5; // [rsp+80h] [rbp+27h] BYREF
  int v6; // [rsp+84h] [rbp+2Bh] BYREF
  int v7; // [rsp+88h] [rbp+2Fh] BYREF
  int v8; // [rsp+8Ch] [rbp+33h] BYREF
  int v9; // [rsp+90h] [rbp+37h] BYREF
  int v10; // [rsp+94h] [rbp+3Bh] BYREF
  int v11; // [rsp+98h] [rbp+3Fh] BYREF
  int v12; // [rsp+9Ch] [rbp+43h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+47h] BYREF
  int v14; // [rsp+D0h] [rbp+77h] BYREF
  int v15; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x200000000000LL) )
  {
    v14 = *(_DWORD *)(v2 + 140);
    v15 = *(_DWORD *)(v2 + 136);
    v5 = *(_DWORD *)(v2 + 132);
    v6 = *(_DWORD *)(v2 + 128);
    v7 = *(_DWORD *)(v2 + 84);
    v4 = 1000LL * *(_QWORD *)(v2 + 120);
    v13 = 0x1000000LL;
    v8 = v4 / v3;
    v9 = *(_DWORD *)(v2 + 52);
    v10 = 1000LL * *(_QWORD *)(v2 + 112) / (unsigned __int64)v3;
    v11 = 1000LL * *(_QWORD *)(v2 + 104) / (unsigned __int64)v3;
    v12 = 1000LL * *(_QWORD *)(v2 + 96) / v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v1,
      byte_1C029BA31,
      v2,
      v3,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
}
