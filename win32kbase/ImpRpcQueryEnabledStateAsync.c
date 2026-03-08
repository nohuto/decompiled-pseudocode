/*
 * XREFs of ImpRpcQueryEnabledStateAsync @ 0x1C0087020
 * Callers:
 *     ImpRpcAsyncResponseHandler @ 0x1C0089B28 (ImpRpcAsyncResponseHandler.c)
 *     ImpWorkerRoutine @ 0x1C0089F90 (ImpWorkerRoutine.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 ImpRpcQueryEnabledStateAsync()
{
  int v1; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+48h] [rbp-40h] BYREF
  int *v3; // [rsp+68h] [rbp-20h]
  int v4; // [rsp+70h] [rbp-18h]
  int v5; // [rsp+74h] [rbp-14h]

  if ( !ImpRpcAsync )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !ImpRpcAsync->u.Event )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !ImpRpcBinding )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !ImpRpcContext )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( ImpIsAsyncRpcReqPending )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  Ndr64AsyncClientCall(
    (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
    3u,
    0LL,
    ImpRpcAsync,
    ImpRpcBinding,
    ImpRpcContext,
    &ImpIsActive);
  ImpIsAsyncRpcReqPending = 1;
  if ( (unsigned int)dword_1C02C9780 > 5 )
  {
    v1 = 0;
    v3 = &v1;
    v4 = 4;
    v5 = 0;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02C9780, (int)&dword_1C02A0258, 0, 0, 3u, &v2);
  }
  return 0LL;
}
