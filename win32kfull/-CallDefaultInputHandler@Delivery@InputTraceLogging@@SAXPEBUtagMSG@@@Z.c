void __fastcall InputTraceLogging::Delivery::CallDefaultInputHandler(const struct tagMSG *a1)
{
  int v1; // ecx
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r10d
  __int16 v9; // r11
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  __int64 v13; // [rsp+60h] [rbp-20h] BYREF
  __int64 v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h] BYREF
  __int64 v16; // [rsp+78h] [rbp-8h] BYREF
  int v17; // [rsp+90h] [rbp+10h] BYREF
  int v18; // [rsp+98h] [rbp+18h] BYREF
  int v19; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+28h] BYREF

  if ( IsPointerInputMessage(*((_DWORD *)a1 + 2)) )
  {
    if ( *(_WORD *)(v2 + 16) == 1 )
    {
      if ( (unsigned int)dword_1C035C080 > 4 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C035C080, 16LL) )
        {
          v17 = *(unsigned __int16 *)(v4 + 18);
          v18 = *(_DWORD *)(v4 + 32);
          v13 = *(_QWORD *)(v4 + 24);
          v14 = *(_QWORD *)(v4 + 16);
          v15 = *(_QWORD *)v4;
          v19 = v5;
          LODWORD(v20) = v5;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_1C035C080,
            byte_1C031E9C5,
            v3,
            v4,
            (__int64)&v20,
            (__int64)&v19,
            (__int64)&v15,
            (__int64)&v14,
            (__int64)&v13,
            (__int64)&v18,
            (__int64)&v17);
        }
      }
    }
    else if ( (unsigned int)dword_1C035C080 > 4 && tlgKeywordOn((__int64)&dword_1C035C080, 16LL) )
    {
      v18 = *(unsigned __int16 *)(v7 + 18);
      v19 = *(_DWORD *)(v7 + 32);
      v15 = *(_QWORD *)(v7 + 24);
      v14 = *(_QWORD *)(v7 + 16);
      v16 = *(_QWORD *)v7;
      LODWORD(v20) = v8;
      LODWORD(v13) = v8;
      LOWORD(v17) = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C035C080,
        byte_1C031EAE1,
        v6,
        v7,
        (__int64)&v17,
        (__int64)&v13,
        (__int64)&v20,
        (__int64)&v16,
        (__int64)&v14,
        (__int64)&v15,
        (__int64)&v19,
        (__int64)&v18);
    }
  }
  else if ( InputTraceLogging::IsMouseInputMessage(v1)
         && (unsigned int)dword_1C035C080 > 4
         && tlgKeywordOn((__int64)&dword_1C035C080, 16LL) )
  {
    v17 = *(_DWORD *)(v11 + 32);
    v20 = *(_QWORD *)(v11 + 24);
    v16 = *(_QWORD *)(v11 + 16);
    v15 = *(_QWORD *)v11;
    v18 = v12;
    v19 = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C035C080,
      byte_1C031EA59,
      v10,
      v11,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v15,
      (__int64)&v16,
      (__int64)&v20,
      (__int64)&v17);
  }
}
