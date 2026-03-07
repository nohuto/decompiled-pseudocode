void __fastcall WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+60h] [rbp-20h] BYREF
  int v11; // [rsp+64h] [rbp-1Ch] BYREF
  int v12; // [rsp+68h] [rbp-18h] BYREF
  struct _DXGK_DIAG_HEADER *v13; // [rsp+70h] [rbp-10h] BYREF
  __int16 v14; // [rsp+78h] [rbp-8h]
  int v15; // [rsp+98h] [rbp+18h] BYREF
  int v16; // [rsp+A0h] [rbp+20h] BYREF
  int v17; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C013A8E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A8E0, 0x200000000100LL) && tlgKeywordOn((__int64)&dword_1C013A8E0, v2) )
    {
      v14 = *((_WORD *)a1 + 2);
      v15 = *((_DWORD *)a1 + 10);
      v13 = a1;
      v16 = 8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v4,
        byte_1C009F002,
        v5,
        v3,
        (__int64)&v16,
        (__int64)&v15,
        (__int64 *)&v13);
      LODWORD(v3) = dword_1C013A8E0;
    }
    if ( (unsigned int)v3 > 4 && tlgKeywordOn((__int64)&dword_1C013A8E0, 0x400000000100LL) )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A8E0, v6) )
      {
        v15 = *((_DWORD *)a1 + 18);
        v16 = *((_DWORD *)a1 + 12);
        v17 = *((_DWORD *)a1 + 19);
        v10 = *((_DWORD *)a1 + 15);
        v13 = *(struct _DXGK_DIAG_HEADER **)((char *)a1 + 52);
        v11 = *((_DWORD *)a1 + 10);
        v12 = 8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v7,
          byte_1C009EF8D,
          v8,
          v9,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v13,
          (__int64)&v10,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15);
      }
    }
  }
}
