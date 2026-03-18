/*
 * XREFs of ImpRpcAsyncUnInit @ 0x1C00BF1A8
 * Callers:
 *     ImpInitializeWork @ 0x1C007AD6C (ImpInitializeWork.c)
 *     ImpRpcDisconnect @ 0x1C00BF044 (ImpRpcDisconnect.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

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
  if ( (unsigned int)dword_1C0288780 > 5 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C0288780, (unsigned __int8 *)dword_1C02618FF, 0LL, 0LL, 2u, &v1);
}
