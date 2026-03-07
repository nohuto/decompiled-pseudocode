void __fastcall WriteDxgDiagnosticsEvent_SDCDesktopCheckFailPacket(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // [rsp+40h] [rbp-28h] BYREF
  __int16 v4; // [rsp+48h] [rbp-20h]
  __int64 v5; // [rsp+50h] [rbp-18h] BYREF
  __int16 v6; // [rsp+58h] [rbp-10h]
  int v7; // [rsp+70h] [rbp+8h] BYREF

  if ( (unsigned int)dword_1C013A8E0 > 4 && tlgKeywordOn((__int64)&dword_1C013A8E0, 0x200000000800LL) )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A8E0, 0x200000000001LL) )
    {
      v3 = v2 + 80;
      v4 = 32;
      v5 = v2 + 48;
      v7 = *(_DWORD *)(v2 + 40);
      v6 = 32;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary>(
        32LL,
        byte_1C009EBAF,
        v1,
        v2,
        (__int64)&v7,
        &v5,
        &v3);
    }
  }
}
