/*
 * XREFs of ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x1800FD0D0
 * Callers:
 *     PubSebUnregisterRpc @ 0x1800FCE3C (PubSebUnregisterRpc.c)
 *     PubSebRegisterRpc @ 0x1800FCF58 (PubSebRegisterRpc.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180279114 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PubSebiGetRpcBindingHandle(void **a1)
{
  unsigned int v1; // ebx
  RPC_WSTR String; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  String = 0LL;
  if ( !PubSebiServiceHandle )
  {
    v1 = RpcStringBindingComposeW(
           0LL,
           (RPC_WSTR)L"ncalrpc",
           0LL,
           (RPC_WSTR)L"csebpub",
           (RPC_WSTR)L"Security=Impersonation Dynamic True",
           &String);
    if ( !v1 )
    {
      v1 = RpcBindingFromStringBindingW(String, &PubSebiServiceHandle);
      RpcStringFreeW(&String);
    }
  }
  *a1 = PubSebiServiceHandle;
  return v1;
}
