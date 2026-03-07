__int64 __fastcall CoreMessagingK::RegistrarClient::UnregisterPort(const struct _GUID *a1)
{
  struct _GUID v1; // xmm0
  int v3; // eax
  int v4; // edx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp-19h] BYREF
  void *v8; // [rsp+48h] [rbp-11h] BYREF
  struct _GUID v9; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp+7h] BYREF
  const struct _GUID *v11; // [rsp+80h] [rbp+27h]
  int v12; // [rsp+88h] [rbp+2Fh]
  int v13; // [rsp+8Ch] [rbp+33h]
  __int64 *v14; // [rsp+90h] [rbp+37h]
  int v15; // [rsp+98h] [rbp+3Fh]
  int v16; // [rsp+9Ch] [rbp+43h]

  v1 = *a1;
  v7 = 0LL;
  v8 = &CoreMessagingK::SendHost::s_Vtbl;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 27;
  v9 = v1;
  v3 = CoreUICallSend((int)&v8, (int)&v7, 1, 1, 15, (__int64)&unk_1C02871CD, &v9);
  if ( v3 < 0 )
  {
    v5 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v3, v4);
  }
  else
  {
    if ( CoreMessagingK::RegistrarClient::s_Reply_Result )
      CoreMessagingK::Runtime::BugCheck(1030LL, CoreMessagingK::RegistrarClient::s_Reply_Result, 0LL);
    v5 = 0;
  }
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    v16 = 0;
    v13 = 0;
    v14 = &v7;
    v15 = 4;
    LODWORD(v7) = v5;
    v11 = a1;
    v12 = 16;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C9500, (unsigned __int8 *)dword_1C029F9FD, 0LL, 0LL, 4u, &v10);
  }
  return v5;
}
