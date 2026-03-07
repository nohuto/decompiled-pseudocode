void __fastcall DISPLAYSTATECHECKER::LogDisplayTelemetryAdapterInfo(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        struct DISPLAYDIAGNOSTICADAPTERDATA *a3)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // [rsp+50h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp-10h] BYREF
  DISPLAYSTATECHECKER *v8; // [rsp+70h] [rbp+8h] BYREF
  int v9; // [rsp+80h] [rbp+18h] BYREF
  __int64 v10; // [rsp+88h] [rbp+20h] BYREF

  v8 = this;
  if ( a3 && a2 )
  {
    if ( (unsigned int)dword_1C013A918 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000400LL) )
      {
        v10 = *(_QWORD *)(v4 + 3496);
        LODWORD(v8) = *(unsigned __int8 *)(v4 + 3488);
        v9 = *(unsigned __int8 *)(v4 + 3248);
        v6 = *(_QWORD *)(v4 + 8);
        v7 = 33556480LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v3,
          byte_1C009E228,
          (const GUID *)(v5 + 8),
          v4,
          (__int64)&v7,
          (__int64)&v6,
          (__int64)&v9,
          (__int64)&v8,
          (__int64)&v10);
      }
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 344LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Invalid parameters not expected", 344LL, 0LL, 0LL, 0LL, 0LL);
  }
}
