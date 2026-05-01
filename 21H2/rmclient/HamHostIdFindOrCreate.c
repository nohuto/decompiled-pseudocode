/*
 * XREFs of HamHostIdFindOrCreate @ 0x180005700
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000A280 (__security_check_cookie.c)
 */

__int64 __fastcall HamHostIdFindOrCreate(__int64 a1, __int64 a2)
{
  RPC_STATUS v4; // eax
  signed int Pointer; // ebx
  RPC_STATUS v6; // eax
  CLIENT_CALL_RETURN v7; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp-E8h] BYREF
  RPC_BINDING_HANDLE v10; // [rsp+38h] [rbp-E0h] BYREF
  int v11; // [rsp+40h] [rbp-D8h]
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-A8h] BYREF
  int v14; // [rsp+78h] [rbp-A0h]
  int v15; // [rsp+7Ch] [rbp-9Ch]
  __int128 v16; // [rsp+80h] [rbp-98h]
  __int128 v17; // [rsp+90h] [rbp-88h]
  __int64 v18; // [rsp+A0h] [rbp-78h]
  RPC_BINDING_HANDLE_OPTIONS_V1 v19; // [rsp+A8h] [rbp-70h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W v20; // [rsp+B8h] [rbp-60h] BYREF

  v10 = 0LL;
  Binding = 0LL;
  memset(&v20, 0, sizeof(v20));
  *(_QWORD *)&v19.ComTimeout = 5LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  *(_QWORD *)(&Security.Version + 1) = 0LL;
  HIDWORD(Security.ServerPrincName) = 0;
  Security.AuthIdentity = 0LL;
  v20.Version = 1;
  v20.ProtocolSequence = 3;
  *(_QWORD *)&v19.Version = 0x100000001LL;
  v13 = 5LL;
  v14 = 1;
  v15 = 3;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v13;
  v4 = RpcBindingCreateW(&v20, &Security, &v19, &Binding);
  Pointer = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      Pointer = (unsigned __int16)v4 | 0xC0070000;
  }
  else
  {
    v6 = RpcBindingBind(0LL, Binding, &unk_180015820);
    Pointer = v6;
    if ( v6 )
    {
      if ( v6 > 0 )
        Pointer = (unsigned __int16)v6 | 0xC0070000;
    }
    else
    {
      v10 = Binding;
      Binding = 0LL;
      Pointer = 0;
    }
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( Pointer >= 0 )
  {
    v7.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800157F0, 0, 0LL, v10, a1, a2).Pointer;
    Pointer = (signed int)v7.Pointer;
    Binding = (RPC_BINDING_HANDLE)v7.Simple;
    v11 = (int)v7.Pointer;
    if ( SLODWORD(v7.Simple) >= 0 )
      Pointer = 0;
  }
  if ( v10 )
    RpcBindingFree(&v10);
  return (unsigned int)Pointer;
}
