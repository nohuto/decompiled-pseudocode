void TraceLoggingAutoRotationStateEvent(void)
{
  int v0; // eax
  int v1; // ecx
  int v2; // r8d
  int v3; // r9d
  int v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x400000000000LL) )
    {
      v0 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
      v6 = 0x1000000LL;
      v4 = v0;
      v5 = dword_1C035D5DC;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v1,
        (unsigned int)&unk_1C031E235,
        v2,
        v3,
        (__int64)&v6,
        (__int64)&v5,
        (__int64)&v4);
    }
  }
}
