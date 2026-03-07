void __fastcall DISPLAYSTATECHECKER::LogDisplayTelemetrySourceInfo(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        const struct DXG_BLACKBOX_DISPLAY_SOURCE_INFO *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r9
  char v8; // r10
  __int64 v9; // r11
  int v10; // [rsp+B0h] [rbp-9h] BYREF
  int v11; // [rsp+B4h] [rbp-5h] BYREF
  int v12; // [rsp+B8h] [rbp-1h] BYREF
  int v13; // [rsp+BCh] [rbp+3h] BYREF
  int v14; // [rsp+C0h] [rbp+7h] BYREF
  int v15; // [rsp+C4h] [rbp+Bh] BYREF
  int v16; // [rsp+C8h] [rbp+Fh] BYREF
  int v17; // [rsp+CCh] [rbp+13h] BYREF
  int v18; // [rsp+D0h] [rbp+17h] BYREF
  int v19; // [rsp+D4h] [rbp+1Bh] BYREF
  int v20; // [rsp+D8h] [rbp+1Fh] BYREF
  int v21; // [rsp+DCh] [rbp+23h] BYREF
  const CHAR *v22; // [rsp+E0h] [rbp+27h] BYREF
  __int64 v23; // [rsp+E8h] [rbp+2Fh] BYREF
  __int64 v24[4]; // [rsp+F0h] [rbp+37h] BYREF
  DISPLAYSTATECHECKER *v25; // [rsp+120h] [rbp+67h] BYREF
  int v26; // [rsp+130h] [rbp+77h] BYREF
  int v27; // [rsp+138h] [rbp+7Fh] BYREF

  v25 = this;
  if ( a3 && a2 )
  {
    v4 = *((_DWORD *)a3 + 3);
    v5 = *(_QWORD *)a3;
    if ( (unsigned int)dword_1C013A918 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000400LL) )
      {
        LOBYTE(v25) = v8;
        v22 = (const CHAR *)(v9 + 16);
        v23 = v5;
        v24[0] = 33556480LL;
        v26 = v7 & (v4 >> 14);
        v27 = v7 & (v4 >> 13);
        v10 = v7 & (v4 >> 12);
        v11 = v7 & (v4 >> 11);
        v12 = v7 & (v4 >> 10);
        v13 = v7 & (v4 >> 9);
        v14 = v7 & (v4 >> 8);
        v15 = v7 & (v4 >> 7);
        v16 = v7 & (v4 >> 6);
        v17 = v7 & (v4 >> 5);
        v18 = v7 & (v4 >> 2);
        v19 = v7 & v4;
        v21 = *(_DWORD *)(v9 + 8);
        v20 = v7 & (v4 >> 1);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
          v6,
          byte_1C009E0F7,
          (const GUID *)((char *)a2 + 8),
          v7,
          (__int64)v24,
          (__int64)&v23,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v25,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v27,
          (__int64)&v26,
          &v22);
      }
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 373LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Invalid parameters not expected", 373LL, 0LL, 0LL, 0LL, 0LL);
  }
}
