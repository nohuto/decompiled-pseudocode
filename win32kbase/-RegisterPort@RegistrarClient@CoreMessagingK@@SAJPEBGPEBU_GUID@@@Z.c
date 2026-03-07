__int64 __fastcall CoreMessagingK::RegistrarClient::RegisterPort(const unsigned __int16 *a1, const struct _GUID *a2)
{
  struct _GUID v3; // xmm0
  int v4; // eax
  int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v9; // [rsp+50h] [rbp-29h]
  struct _GUID v10; // [rsp+60h] [rbp-19h] BYREF
  __int128 v11; // [rsp+70h] [rbp-9h]
  __int64 v12; // [rsp+80h] [rbp+7h]
  __int128 v13; // [rsp+90h] [rbp+17h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+27h]
  const unsigned __int16 *v15; // [rsp+E0h] [rbp+67h] BYREF
  const struct _GUID *v16; // [rsp+E8h] [rbp+6Fh] BYREF
  void *v17; // [rsp+F0h] [rbp+77h] BYREF
  const wchar_t *v18; // [rsp+F8h] [rbp+7Fh]

  v15 = a1;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 27;
  v11 = 0LL;
  v3 = *a2;
  v17 = &CoreMessagingK::SendHost::s_Vtbl;
  v15 = 0LL;
  v16 = 0LL;
  v12 = 0LL;
  v9 = 1;
  LODWORD(v11) = 1;
  v10 = v3;
  v13 = v11;
  v14 = 0LL;
  v4 = CoreUICallSend(
         (int)&v17,
         (int)&v16,
         1,
         1,
         11,
         (__int64)&unk_1C028721E,
         L"Kernel\\MIT\\InputPort",
         &v13,
         &v15,
         &v10,
         v9);
  if ( v4 < 0 )
    v7 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v4, v5);
  else
    v7 = CoreMessagingK::RegistrarClient::s_Reply_Result != 0 ? 0xC0000001 : 0;
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    LODWORD(v15) = v7;
    v16 = a2;
    v18 = L"Kernel\\MIT\\InputPort";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v6,
      &unk_1C029FA2D);
  }
  return v7;
}
