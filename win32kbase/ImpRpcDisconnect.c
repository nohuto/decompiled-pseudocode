/*
 * XREFs of ImpRpcDisconnect @ 0x1C008D3D4
 * Callers:
 *     ImSessionStop @ 0x1C008A7A8 (ImSessionStop.c)
 * Callees:
 *     ImpCompleteRpc @ 0x1C0086EB8 (ImpCompleteRpc.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ImpRpcAsyncUnInit @ 0x1C008D848 (ImpRpcAsyncUnInit.c)
 *     Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage @ 0x1C00E1674 (Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall ImpRpcDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 v3; // rcx
  RPC_STATUS v4; // eax
  bool v5; // zf
  int v6; // eax
  __int64 result; // rax

  if ( !ImpRpcContext )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v3 = ImpRpcBinding == 0LL;
  if ( !ImpRpcBinding )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !(unsigned int)Feature_IMRespectWTDToggle__private_IsEnabledDeviceUsage(v3, a2, a3) )
    goto LABEL_20;
  if ( ImpIsWorkerThreadEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !ImpRpcAsync )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !ImpIsAsyncRpcReqPending )
    goto LABEL_19;
  v4 = RpcAsyncGetCallStatus(ImpRpcAsync);
  if ( v4 == 259 || (v5 = v4 == 0, v6 = 1, v5) )
    v6 = 0;
  if ( v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  RpcAsyncCancelCall(ImpRpcAsync, 1);
  result = ImpCompleteRpc();
  if ( (_DWORD)result == -1073610672 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
LABEL_19:
    ImpRpcAsyncUnInit();
LABEL_20:
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, &ImpRpcContext);
    RpcBindingUnbind(ImpRpcBinding);
    RpcBindingFree(&ImpRpcBinding);
    ImpRpcContext = 0LL;
    ImpRpcBinding = 0LL;
    return 0LL;
  }
  return result;
}
