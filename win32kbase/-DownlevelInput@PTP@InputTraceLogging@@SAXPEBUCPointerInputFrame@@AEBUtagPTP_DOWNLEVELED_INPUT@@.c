void __fastcall InputTraceLogging::PTP::DownlevelInput(
        const struct CPointerInputFrame *a1,
        const struct tagPTP_DOWNLEVELED_INPUT *a2)
{
  int v3; // edx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r8
  unsigned int v9; // r11d
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  __int64 v16; // [rsp+68h] [rbp-8h] BYREF
  __int64 v17; // [rsp+88h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+28h] BYREF

  if ( *(_DWORD *)a2 < 2u )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 128LL) )
    {
      LODWORD(v18) = *((_DWORD *)a2 + 1);
      v16 = v8;
      v15 = InputTraceLogging::PTPDownlevelActionToString(v9);
      if ( v12 )
      {
        v11 = *(_QWORD *)(v12 + 216);
        LODWORD(v17) = *(_DWORD *)(v12 + 40);
        v13 = *(_QWORD *)(v12 + 72);
      }
      else
      {
        LODWORD(v17) = v11;
        v13 = v11;
      }
      v14 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_1C02CA7E0,
        byte_1C029BEFA,
        v10,
        v11,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v17,
        (void **)&v15,
        (__int64)&v18,
        (__int64)&v16);
    }
  }
  else if ( *(_DWORD *)a2 == 2 && (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 128LL) )
  {
    LODWORD(v18) = *((_DWORD *)a2 + 1);
    v14 = v4;
    v15 = InputTraceLogging::PTPDownlevelActionToString((unsigned int)(v3 - 126));
    if ( v7 )
    {
      v6 = *(_QWORD *)(v7 + 216);
      LODWORD(v17) = *(_DWORD *)(v7 + 40);
      v13 = *(_QWORD *)(v7 + 72);
    }
    else
    {
      LODWORD(v17) = v6;
      v13 = v6;
    }
    v16 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029BF60,
      v5,
      v6,
      (__int64)&v16,
      (__int64)&v13,
      (__int64)&v17,
      (void **)&v15,
      (__int64)&v18,
      (__int64)&v14);
  }
}
