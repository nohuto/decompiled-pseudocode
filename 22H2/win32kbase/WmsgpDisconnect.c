/*
 * XREFs of WmsgpDisconnect @ 0x1C02BFCA4
 * Callers:
 *     ?CleanupWinlogonRpcHandleWorker@@YAXXZ @ 0x1C00D0500 (-CleanupWinlogonRpcHandleWorker@@YAXXZ.c)
 * Callees:
 *     <none>
 */

RPC_STATUS WmsgpDisconnect()
{
  RPC_STATUS result; // eax

  result = RpcBindingUnbind(gWinLogonRpcHandle);
  if ( !result )
  {
    result = RpcBindingFree(&gWinLogonRpcHandle);
    if ( !result )
      gWinLogonRpcHandle = 0LL;
  }
  return result;
}
