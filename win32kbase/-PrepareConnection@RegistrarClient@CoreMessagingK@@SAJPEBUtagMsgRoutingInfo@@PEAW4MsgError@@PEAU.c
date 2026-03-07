__int64 __fastcall CoreMessagingK::RegistrarClient::PrepareConnection(
        const struct tagMsgRoutingInfo *a1,
        enum MsgError *a2,
        struct _GUID *a3)
{
  __int128 v3; // xmm1
  unsigned int v4; // ebx
  __int128 v6; // xmm0
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  int v15; // [rsp+60h] [rbp-69h] BYREF
  void *v16; // [rsp+68h] [rbp-61h] BYREF
  struct _GUID *v17; // [rsp+70h] [rbp-59h] BYREF
  char *v18; // [rsp+78h] [rbp-51h] BYREF
  __int64 v19; // [rsp+80h] [rbp-49h] BYREF
  __int128 v20; // [rsp+88h] [rbp-41h]
  __int128 v21; // [rsp+A8h] [rbp-21h]
  __int64 v22; // [rsp+B8h] [rbp-11h]
  __int128 v23; // [rsp+C0h] [rbp-9h]
  __int128 v24; // [rsp+D0h] [rbp+7h]
  __int128 v25; // [rsp+E0h] [rbp+17h]
  __int64 v26; // [rsp+F0h] [rbp+27h]
  __int64 v27; // [rsp+130h] [rbp+67h] BYREF
  unsigned int v28; // [rsp+138h] [rbp+6Fh] BYREF
  int v29; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = *((_OWORD *)a1 + 1);
  CoreMessagingK::RegistrarClient::s_Reply_Result = 27;
  v4 = 0;
  CoreMessagingK::RegistrarClient::s_Reply_Parameter1 = 0LL;
  v21 = 0LL;
  v6 = *(_OWORD *)a1;
  v16 = &CoreMessagingK::SendHost::s_Vtbl;
  v24 = v3;
  v20 = v6;
  v22 = 0LL;
  *(_QWORD *)&v21 = *((_QWORD *)a1 + 4);
  *((_QWORD *)&v20 + 1) = 0LL;
  v26 = 0LL;
  v23 = (unsigned __int64)v6;
  v25 = v21;
  v27 = 0LL;
  v9 = CoreUICallSend((unsigned int)&v16, (unsigned int)&v27, 1, 1, 3);
  if ( v9 < 0 )
  {
    v4 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v9, v10);
  }
  else
  {
    *(_DWORD *)a2 = CoreMessagingK::RegistrarClient::s_Reply_Result;
    *a3 = *(struct _GUID *)((char *)CoreMessagingK::RegistrarClient::s_Reply_Parameter1 + 24);
  }
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    LODWORD(v27) = *(_DWORD *)a2;
    v17 = a3;
    v18 = (char *)a1 + 24;
    v19 = *((_QWORD *)a1 + 1);
    v29 = *((_DWORD *)a1 + 1);
    v15 = *(_DWORD *)a1;
    v28 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v11,
      (unsigned int)&unk_1C029FA9B,
      v12,
      v13,
      (__int64)&v15,
      (__int64)&v29,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v17);
  }
  return v4;
}
