/*
 * XREFs of sub_18004CA38 @ 0x18004CA38
 * Callers:
 *     sub_18004C944 @ 0x18004C944 (sub_18004C944.c)
 *     sub_18012DCE0 @ 0x18012DCE0 (sub_18012DCE0.c)
 * Callees:
 *     sub_1800CA660 @ 0x1800CA660 (sub_1800CA660.c)
 */

__int64 __fastcall sub_18004CA38(RPC_BINDING_HANDLE *Binding)
{
  unsigned int v1; // ebx
  unsigned int v3; // eax
  unsigned int v4; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  RPC_WSTR StringBinding; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  *Binding = 0LL;
  StringBinding = 0LL;
  v3 = RpcStringBindingComposeW(0LL, (RPC_WSTR)L"ncalrpc", 0LL, (RPC_WSTR)L"AudioDeviceGraph", 0LL, &StringBinding);
  if ( v3 )
    return sub_1800CA660(retaddr, 43LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", v3);
  v4 = RpcBindingFromStringBindingW(StringBinding, Binding);
  if ( v4 )
    v1 = sub_1800CA660(retaddr, 46LL, "avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp", v4);
  RpcStringFreeW(&StringBinding);
  return v1;
}
