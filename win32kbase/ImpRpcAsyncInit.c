__int64 ImpRpcAsyncInit()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  struct _RPC_ASYNC_STATE *v3; // rax
  struct _RPC_ASYNC_STATE *v4; // rdi
  RPC_STATUS v5; // ebx
  struct _KEVENT *v7; // rax
  struct _KEVENT *v8; // rsi
  RPC_STATUS v9; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+38h] [rbp-38h] BYREF
  RPC_STATUS *v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+64h] [rbp-Ch]

  if ( (unsigned int)Feature_Servicing_ImpRpcAsyncInit__private_IsEnabledDeviceUsage() )
  {
    if ( ImpRpcAsync )
      goto LABEL_5;
  }
  else if ( !ImpRpcAsync )
  {
LABEL_5:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
  }
  v3 = (struct _RPC_ASYNC_STATE *)ImpAllocate(88LL, 0, 0);
  v4 = v3;
  if ( !v3 )
    goto LABEL_7;
  v5 = RpcAsyncInitializeHandle(v3, 0x58u);
  if ( v5 < 0 )
    goto LABEL_8;
  v7 = (struct _KEVENT *)ImpAllocate(24LL, 0, 0);
  v8 = v7;
  if ( !v7 )
  {
LABEL_7:
    v5 = -1073741670;
LABEL_8:
    if ( (unsigned int)dword_1C02C9780 > 2 )
    {
      v13 = 0;
      v11 = &v9;
      v9 = v5;
      v12 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02C9780,
        (unsigned __int8 *)dword_1C02A02AF,
        0LL,
        0LL,
        3u,
        &v10);
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    return (unsigned int)v5;
  }
  KeInitializeEvent(v7, SynchronizationEvent, 0);
  v4->UserInfo = 0LL;
  v4->NotificationType = RpcNotificationTypeEvent;
  v4->u.Event = v8;
  ImpRpcAsync = v4;
  if ( (unsigned int)dword_1C02C9780 > 5 )
  {
    v13 = 0;
    v11 = &v9;
    v9 = v5;
    v12 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C9780, (unsigned __int8 *)dword_1C02A03A1, 0LL, 0LL, 3u, &v10);
  }
  return (unsigned int)v5;
}
