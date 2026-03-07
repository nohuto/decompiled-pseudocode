__int64 CoreMessagingK::RegistrarClient::Connect(void)
{
  unsigned __int16 v0; // cx
  NTSTATUS v1; // ebx
  unsigned __int64 v2; // rdx
  NTSTATUS v4; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v5; // [rsp+70h] [rbp-98h] BYREF
  const wchar_t *v6; // [rsp+80h] [rbp-88h]
  __int64 v7; // [rsp+88h] [rbp-80h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+90h] [rbp-78h] BYREF
  PVOID P; // [rsp+B0h] [rbp-58h]
  _QWORD v10[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v11; // [rsp+D8h] [rbp-30h]
  _QWORD v12[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v13; // [rsp+108h] [rbp+0h]
  _QWORD v14[8]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v15[10]; // [rsp+158h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+1A8h] [rbp+A0h] BYREF
  NTSTATUS *v17; // [rsp+1C8h] [rbp+C0h]
  __int64 v18; // [rsp+1D0h] [rbp+C8h]
  _BYTE v19[32]; // [rsp+1D8h] [rbp+D0h] BYREF

  v12[0] = 48LL;
  v12[3] = 512LL;
  v10[0] = 48LL;
  v10[3] = 512LL;
  memset(v14, 0, sizeof(v14));
  *((_QWORD *)&v5 + 1) = 5374032LL;
  v7 = 0LL;
  P = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v6 = L"\\BaseNamedObjects\\CoreMessagingRegistrar";
  v12[1] = 0LL;
  v13 = 0LL;
  v12[2] = (char *)&v5 + 8;
  v11 = 0LL;
  v10[1] = 0LL;
  v10[2] = 0LL;
  memset(v15, 0, 0x48uLL);
  v0 = CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize;
  LODWORD(v15[0]) = 1114112;
  if ( CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize > CoreMessagingK::RegistrarClient::s_MaxReceiveMessagePayloadSize )
    v0 = CoreMessagingK::RegistrarClient::s_MaxSendMessagePayloadSize;
  HIDWORD(v15[0]) = 12;
  v15[2] = v0 + 80LL;
  LODWORD(v15[1]) = 1;
  WORD2(v15[1]) = 256;
  v1 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v1 >= 0 )
  {
    v1 = CoreMessagingK::RegistrarClient::InitializeSecurityDescriptor(SecurityDescriptor);
    if ( v1 >= 0 )
    {
      LODWORD(v14[0]) = 4194328;
      WORD2(v14[0]) = 0x8000;
      *(_OWORD *)&v14[5] = xmmword_1C02A0AD0;
      LODWORD(v14[7]) = 1;
      v7 = 64LL;
      CoreMessagingK::RegistrarClient::InitializeMessageAttributes((struct _ALPC_MESSAGE_ATTRIBUTES *)v19, v2);
      v1 = ZwAlpcConnectPortEx(
             &CoreMessagingK::RegistrarClient::s_Port,
             v12,
             v10,
             v15,
             0x20000,
             SecurityDescriptor,
             v14,
             &v7,
             v19,
             0LL,
             0LL);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x44534D43u);
  P = 0LL;
  if ( (unsigned int)dword_1C02C9500 > 5 )
  {
    v4 = v1;
    v17 = &v4;
    v18 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C9500, (unsigned __int8 *)dword_1C029F9D5, 0LL, 0LL, 3u, &v16);
  }
  return (unsigned int)v1;
}
