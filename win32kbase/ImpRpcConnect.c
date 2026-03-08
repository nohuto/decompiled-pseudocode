/*
 * XREFs of ImpRpcConnect @ 0x1C008CAE8
 * Callers:
 *     ImSessionStart @ 0x1C008BE98 (ImSessionStart.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C008D2C0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall ImpRpcConnect(__int64 a1, __int64 a2, __int64 a3)
{
  RPC_STATUS v3; // eax
  CLIENT_CALL_RETURN v4; // rbx
  bool v5; // cc
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C8h] BYREF
  CLIENT_CALL_RETURN v9; // [rsp+48h] [rbp-C0h]
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v11[4]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v12; // [rsp+88h] [rbp-80h]
  PSID SeLocalSystemSid; // [rsp+98h] [rbp-70h]
  __int128 v14; // [rsp+A0h] [rbp-68h]
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+B0h] [rbp-58h] BYREF
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+E8h] [rbp-20h] BYREF

  *(&Security.Version + 1) = 0;
  if ( ImpRpcContext )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(ImpRpcContext != 0, a2, a3);
  if ( ImpRpcBinding )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(ImpRpcBinding != 0LL, a2, a3);
  v8 = 0LL;
  Binding = 0LL;
  *(_QWORD *)(&Template.ProtocolSequence + 1) = 0LL;
  HIDWORD(Template.NetworkAddress) = 0;
  Template.u1.Reserved = 0LL;
  *(_QWORD *)(&Security.Version + 1) = 0LL;
  HIDWORD(Security.ServerPrincName) = 0;
  Security.AuthIdentity = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  Options.CallTimeout = 0;
  Template.Version = 1;
  Template.Flags = 1;
  Template.ProtocolSequence = 3;
  Template.StringEndpoint = L"imsfk";
  Template.ObjectUuid = (UUID)xmmword_1C0278F14;
  v11[0] = 5;
  v11[2] = 0;
  v11[3] = 3;
  SeLocalSystemSid = SeExports->SeLocalSystemSid;
  v11[1] = 17;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 20;
  Security.SecurityQos = (RPC_SECURITY_QOS *)v11;
  Options.Version = 1;
  Options.Flags = 2;
  Options.ComTimeout = 5;
  v3 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
  LODWORD(v4.Pointer) = v3;
  v5 = v3 <= 0;
  if ( v3 || (v3 = RpcBindingBind(0LL, Binding, &unk_1C0278F10), LODWORD(v4.Pointer) = v3, v5 = v3 <= 0, v3) )
  {
    if ( !v5 )
      LODWORD(v4.Pointer) = (unsigned __int16)v3 | 0xC0070000;
  }
  else
  {
    v9.Simple = 0LL;
    v4.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 2u, 0LL, Binding, &v8).Pointer;
    v9.Pointer = v4.Pointer;
    if ( SLODWORD(v4.Simple) >= 0 )
    {
      ImpRpcContext = v8;
      ImpRpcBinding = Binding;
      Binding = 0LL;
      v8 = 0LL;
    }
  }
  if ( v8 )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, &v8);
  if ( Binding )
    RpcBindingFree(&Binding);
  return LODWORD(v4.Pointer);
}
