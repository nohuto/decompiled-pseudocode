/*
 * XREFs of ImpRpcSendString @ 0x1C027474C
 * Callers:
 *     ImpProcessSequence @ 0x1C027489C (ImpProcessSequence.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CLIENT_CALL_RETURN __fastcall ImpRpcSendString(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        __int64 a6,
        int *a7)
{
  int v7; // ebx
  _QWORD v12[3]; // [rsp+38h] [rbp-40h] BYREF
  int v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+54h] [rbp-24h]
  __int64 v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+60h] [rbp-18h]
  int v17; // [rsp+64h] [rbp-14h]

  v7 = a4;
  if ( !ImpRpcContext )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !ImpRpcBinding )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v12[0] = a1;
  v12[1] = a2;
  v12[2] = a3;
  v13 = v7;
  v14 = a5;
  v15 = a6;
  v16 = *a7;
  v17 = a7[1];
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0, 0LL, ImpRpcBinding, ImpRpcContext, v12);
}
