void __fastcall InputTraceLogging::RIM::StartFrameFromContainer(
        struct RIMDEV *const a1,
        const struct RIMCOMPLETEFRAME *a2)
{
  bool v2; // al
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r8
  int v6; // ecx
  int v7; // [rsp+50h] [rbp-20h] BYREF
  __int64 v8; // [rsp+58h] [rbp-18h] BYREF
  __int64 v9; // [rsp+60h] [rbp-10h] BYREF
  int v10; // [rsp+88h] [rbp+18h] BYREF
  int v11; // [rsp+90h] [rbp+20h] BYREF
  int v12; // [rsp+98h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 )
  {
    v2 = tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL);
    v5 = 0LL;
    if ( v2 )
    {
      if ( v3 )
        v6 = *(unsigned __int16 *)(*(_QWORD *)(v3 + 464) + 18LL);
      else
        v6 = 0;
      v10 = v6;
      if ( v3 )
        v5 = *(unsigned __int16 *)(*(_QWORD *)(v3 + 464) + 16LL);
      v12 = *(_DWORD *)(v4 + 196);
      v7 = *(_DWORD *)(v4 + 24);
      v8 = *(_QWORD *)(v4 + 48);
      v11 = v5;
      v9 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1C02CA7E0,
        byte_1C0297A6C,
        v5,
        v3,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
