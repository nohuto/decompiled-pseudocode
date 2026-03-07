void __fastcall WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF
  __int16 v6; // [rsp+48h] [rbp-10h]
  int v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C013A8E0 > 4 && tlgKeywordOn((__int64)&dword_1C013A8E0, 0x200000000400LL) )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A8E0, v1) )
    {
      v6 = *(_WORD *)(v4 + 4);
      v7 = *(_DWORD *)(v4 + 40);
      v5 = v4;
      v8 = 8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v2,
        byte_1C009ECDC,
        v3,
        v4,
        (__int64)&v8,
        (__int64)&v7,
        &v5);
    }
  }
}
