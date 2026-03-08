/*
 * XREFs of WmsgpConnect @ 0x1C0301300
 * Callers:
 *     _RegisterLogonProcess @ 0x1C008CF70 (_RegisterLogonProcess.c)
 * Callees:
 *     StringCchPrintfW @ 0x1C008D258 (StringCchPrintfW.c)
 */

__int64 __fastcall WmsgpConnect(_DWORD *a1, int a2)
{
  unsigned int v2; // ebx

  if ( a2 == -1 )
  {
    v2 = -1073741822;
  }
  else
  {
    StringCchPrintfW(&StringEndPoint, 0x91uLL, L"WMsgKRpc%X%X%X", (unsigned int)a1[1], *a1, a2, 0);
    Template.StringEndpoint = &StringEndPoint;
    v2 = RpcBindingCreateW(&Template, &Security, &Options, &gWinLogonRpcHandle);
    if ( !v2 )
      v2 = RpcBindingBind(0LL, gWinLogonRpcHandle, &unk_1C0278F70);
  }
  if ( v2 && gWinLogonRpcHandle )
  {
    RpcBindingFree(&gWinLogonRpcHandle);
    gWinLogonRpcHandle = 0LL;
  }
  return v2;
}
