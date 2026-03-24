/*
 * XREFs of WmsgpConnect @ 0x1C027E818
 * Callers:
 *     _RegisterLogonProcess @ 0x1C00B1D00 (_RegisterLogonProcess.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00AE020 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall WmsgpConnect(_DWORD *a1)
{
  unsigned int v1; // ebx

  if ( gSessionId == -1 )
  {
    v1 = -1073741822;
  }
  else
  {
    StringCchPrintfW(&StringEndPoint, 145LL, L"WMsgKRpc%X%X%X", (unsigned int)a1[1], *a1, gSessionId, 0);
    Template.StringEndpoint = &StringEndPoint;
    v1 = RpcBindingCreateW(&Template, &Security, &Options, &gWinLogonRpcHandle);
    if ( !v1 )
      v1 = RpcBindingBind(0LL, gWinLogonRpcHandle, &unk_1C0204AC0);
  }
  if ( v1 && gWinLogonRpcHandle )
  {
    RpcBindingFree(&gWinLogonRpcHandle);
    gWinLogonRpcHandle = 0LL;
  }
  return v1;
}
