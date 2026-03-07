void __fastcall VidSchiRecoverFromTDR(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  struct _TDR_RECOVERY_CONTEXT *v5; // rcx
  _QWORD v6[3]; // [rsp+50h] [rbp-18h] BYREF
  int v7; // [rsp+70h] [rbp+8h] BYREF
  int v8; // [rsp+78h] [rbp+10h] BYREF
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int16 *v10; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C0076048 > 5 && tlgKeywordOn((__int64)&dword_1C0076048, 0x400000000010LL) )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v7 = *(_DWORD *)(a1 + 3032);
    v9 = *(_QWORD *)(a1 + 3016);
    v8 = *(_DWORD *)(v9 + 16);
    v10 = *(unsigned __int16 **)(v4 + 1744);
    v6[0] = *(_QWORD *)(v4 + 404);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v4,
      byte_1C0056F93,
      v2,
      v3,
      (__int64)v6,
      &v10,
      (__int64)&v8,
      (__int64)&v9,
      (__int64)&v7);
  }
  v5 = *(struct _TDR_RECOVERY_CONTEXT **)(a1 + 3016);
  if ( v5 )
  {
    *(_DWORD *)(a1 + 3012) = 2;
    TdrResetFromTimeoutAsync(v5);
  }
  else
  {
    WdLogSingleEntry0(3LL);
  }
}
