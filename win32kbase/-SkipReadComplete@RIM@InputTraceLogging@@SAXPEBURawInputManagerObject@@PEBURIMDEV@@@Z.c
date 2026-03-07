void __fastcall InputTraceLogging::RIM::SkipReadComplete(
        const struct RawInputManagerObject *a1,
        const struct RIMDEV *a2)
{
  char v2; // al
  __int64 v3; // r8
  __int64 *v4; // rax
  const int *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+50h] [rbp-19h] BYREF
  __int64 v15; // [rsp+58h] [rbp-11h] BYREF
  __int64 v16; // [rsp+60h] [rbp-9h] BYREF
  __int64 v17; // [rsp+68h] [rbp-1h] BYREF
  __int64 v18; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+80h] [rbp+17h] BYREF
  __int64 *v21; // [rsp+A0h] [rbp+37h]
  int v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+ACh] [rbp+43h]

  v2 = *((_BYTE *)a2 + 48);
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      if ( (*((_DWORD *)a2 + 50) & 0x80u) == 0 )
      {
        if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
        {
          v12 = *(_QWORD *)(v10 + 464);
          LODWORD(v15) = *(unsigned __int16 *)(v12 + 18);
          LODWORD(v14) = *(unsigned __int16 *)(v12 + 16);
          v16 = *(_QWORD *)(v10 + 16);
          v18 = v11;
          v17 = v10;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C02CA7E0,
            (unsigned int)&unk_1C0298695,
            v10,
            v11,
            (__int64)&v17,
            (__int64)&v18,
            (__int64)&v16,
            (__int64)&v14,
            (__int64)&v15);
        }
      }
      else if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
      {
        v7 = *(_QWORD *)(v6 + 464);
        LODWORD(v14) = *(unsigned __int16 *)(v7 + 18);
        LODWORD(v15) = *(unsigned __int16 *)(v7 + 16);
        v19 = (__int64)InputTraceLogging::PointerDeviceTypeToString(*(_DWORD *)(*(_QWORD *)(v6 + 472) + 24LL));
        v17 = *(_QWORD *)(v8 + 16);
        v18 = v9;
        v16 = v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_1C02CA7E0,
          (__int64)&v16,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v19,
          (__int64)&v15,
          (__int64)&v14);
      }
    }
    else if ( (unsigned int)dword_1C02CA7E0 > 4 && v2 == 1 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
    {
      v16 = v13;
      v4 = &v16;
      v5 = &dword_1C029875E;
      goto LABEL_18;
    }
  }
  else if ( (unsigned int)dword_1C02CA7E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C02CA7E0, 256LL) )
  {
    v15 = v3;
    v4 = &v15;
    v5 = (const int *)&unk_1C0298662;
LABEL_18:
    v23 = 0;
    v21 = v4;
    v22 = 8;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02CA7E0, (int)v5, 0, 0, 3u, &v20);
  }
}
