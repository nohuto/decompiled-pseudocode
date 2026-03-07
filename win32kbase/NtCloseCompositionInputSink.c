NTSTATUS __fastcall NtCloseCompositionInputSink(HANDLE Handle)
{
  int v3; // r8d
  int v4; // r9d
  int v5; // [rsp+40h] [rbp+8h] BYREF
  HANDLE v6; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 5 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 4LL) )
  {
    v5 = 0;
    v6 = Handle;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C02CA7E0,
      (unsigned int)&unk_1C029D0D4,
      v3,
      v4,
      (__int64)&v6,
      (__int64)&v5);
  }
  return NtClose(Handle);
}
