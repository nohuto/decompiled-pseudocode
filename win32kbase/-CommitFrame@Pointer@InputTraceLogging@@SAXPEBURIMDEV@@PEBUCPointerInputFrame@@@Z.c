void __fastcall InputTraceLogging::Pointer::CommitFrame(const struct RIMDEV *a1, const struct CPointerInputFrame *a2)
{
  int v2; // edx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 *v7; // rdx
  __int64 v8; // [rsp+50h] [rbp-10h] BYREF
  __int64 v9; // [rsp+58h] [rbp-8h] BYREF
  int v10; // [rsp+70h] [rbp+10h] BYREF
  int v11; // [rsp+80h] [rbp+20h] BYREF
  __int64 v12; // [rsp+88h] [rbp+28h] BYREF

  v2 = *(_DWORD *)(*((_QWORD *)a1 + 59) + 24LL);
  if ( (unsigned int)(v2 - 1) > 3 )
  {
    if ( (unsigned int)(v2 - 5) > 1 )
    {
      if ( v2 == 7 )
      {
        if ( (unsigned int)dword_1C02CA7E0 <= 4 || !tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
          return;
        v7 = (unsigned __int8 *)&unk_1C029A52B;
      }
      else
      {
        if ( (unsigned int)dword_1C02CA7E0 <= 4 || !tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
          return;
        v7 = (unsigned __int8 *)&unk_1C029A4CC;
      }
    }
    else
    {
      if ( (unsigned int)dword_1C02CA7E0 <= 4 || !tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
        return;
      v7 = (unsigned __int8 *)&unk_1C029A414;
    }
    v10 = *(_DWORD *)(v5 + 48);
    v11 = *(_DWORD *)(v5 + 40);
    v12 = *(_QWORD *)(v5 + 72);
    v9 = *(_QWORD *)(v5 + 216);
    v8 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      v7,
      v5,
      v6,
      (__int64)&v8,
      (__int64)&v9,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10);
    return;
  }
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    v10 = *(_DWORD *)(v3 + 48);
    v11 = *(_DWORD *)(v3 + 40);
    v12 = *(_QWORD *)(v3 + 72);
    v8 = *(_QWORD *)(v3 + 216);
    v9 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029A46F,
      v3,
      v4,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10);
  }
}
