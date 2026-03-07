void ImpRpcAsyncUnInit()
{
  PRPC_ASYNC_STATE v0; // rcx
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+30h] [rbp-38h] BYREF

  if ( !ImpRpcAsync )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !ImpRpcAsync->u.Event )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ExFreePoolWithTag(ImpRpcAsync->u.Event, 0);
  v0 = ImpRpcAsync;
  ImpRpcAsync->u.Event = 0LL;
  ExFreePoolWithTag(v0, 0);
  ImpRpcAsync = 0LL;
  if ( (unsigned int)dword_1C02C9780 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C9780, (unsigned __int8 *)dword_1C02A028D, 0LL, 0LL, 2u, &v1);
}
