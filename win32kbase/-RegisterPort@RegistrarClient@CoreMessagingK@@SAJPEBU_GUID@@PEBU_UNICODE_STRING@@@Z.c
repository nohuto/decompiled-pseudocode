__int64 __fastcall CoreMessagingK::RegistrarClient::RegisterPort(
        const struct _GUID *a1,
        const struct _UNICODE_STRING *a2)
{
  struct _GUID v3; // xmm0
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  PWSTR Buffer; // [rsp+38h] [rbp-40h]
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF
  struct _GUID v12; // [rsp+60h] [rbp-18h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+28h] BYREF
  void *v14; // [rsp+A8h] [rbp+30h] BYREF
  PWSTR v15; // [rsp+B0h] [rbp+38h]
  const struct _GUID *v16; // [rsp+B8h] [rbp+40h]

  CoreMessagingK::RegistrarClient::s_Reply_Result = 27;
  v11 = 0LL;
  v3 = *a1;
  v4 = 0;
  v14 = &CoreMessagingK::SendHost::s_Vtbl;
  Buffer = a2->Buffer;
  v13 = 0LL;
  v12 = v3;
  v6 = CoreUICallSend((int)&v14, (int)&v13, 1, 1, 14, (__int64)&unk_1C0287232, &v12, Buffer, &v11);
  if ( v6 < 0 )
  {
    v4 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v6, v7);
  }
  else if ( CoreMessagingK::RegistrarClient::s_Reply_Result )
  {
    CoreMessagingK::Runtime::BugCheck(1029LL, CoreMessagingK::RegistrarClient::s_Reply_Result, 0LL);
  }
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    v15 = a2->Buffer;
    LODWORD(v13) = v4;
    v16 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v8,
      &unk_1C029FB1B);
  }
  return v4;
}
