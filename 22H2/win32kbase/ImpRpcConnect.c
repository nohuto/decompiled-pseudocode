/*
 * XREFs of ImpRpcConnect @ 0x1C00BB890
 * Callers:
 *     ImSessionStart @ 0x1C00BB5B0 (ImSessionStart.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00ADF88 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

__int64 ImpRpcConnect()
{
  RPC_STATUS v0; // eax
  CLIENT_CALL_RETURN v1; // rbx
  bool v2; // cc
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v5; // [rsp+40h] [rbp-C8h] BYREF
  CLIENT_CALL_RETURN v6; // [rsp+48h] [rbp-C0h]
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v8[4]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v9; // [rsp+88h] [rbp-80h]
  PSID SeLocalSystemSid; // [rsp+98h] [rbp-70h]
  __int128 v11; // [rsp+A0h] [rbp-68h]
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+B0h] [rbp-58h] BYREF
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+E8h] [rbp-20h] BYREF

  *(&Security.Version + 1) = 0;
  if ( ImpRpcContext )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( ImpRpcBinding )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v5 = 0LL;
  Binding = 0LL;
  *(_QWORD *)(&Template.ProtocolSequence + 1) = 0LL;
  HIDWORD(Template.NetworkAddress) = 0;
  Template.u1.Reserved = 0LL;
  *(_QWORD *)(&Security.Version + 1) = 0LL;
  HIDWORD(Security.ServerPrincName) = 0;
  Security.AuthIdentity = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  Options.CallTimeout = 0;
  Template.Version = 1;
  Template.Flags = 1;
  Template.ProtocolSequence = 3;
  Template.StringEndpoint = L"imsfk";
  Template.ObjectUuid = (UUID)xmmword_1C023C824;
  v8[0] = 5;
  v8[2] = 0;
  v8[3] = 3;
  SeLocalSystemSid = SeExports->SeLocalSystemSid;
  v8[1] = 17;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 20;
  Security.SecurityQos = (RPC_SECURITY_QOS *)v8;
  Options.Version = 1;
  Options.Flags = 2;
  Options.ComTimeout = 5;
  v0 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
  LODWORD(v1.Pointer) = v0;
  v2 = v0 <= 0;
  if ( v0 || (v0 = RpcBindingBind(0LL, Binding, &unk_1C023C820), LODWORD(v1.Pointer) = v0, v2 = v0 <= 0, v0) )
  {
    if ( !v2 )
      LODWORD(v1.Pointer) = (unsigned __int16)v0 | 0xC0070000;
  }
  else
  {
    v6.Simple = 0LL;
    v1.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 2u, 0LL, Binding, &v5).Pointer;
    v6.Pointer = v1.Pointer;
    if ( SLODWORD(v1.Simple) >= 0 )
    {
      ImpRpcContext = v5;
      ImpRpcBinding = Binding;
      Binding = 0LL;
      v5 = 0LL;
    }
  }
  if ( v5 )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 1u, 0LL, &v5);
  if ( Binding )
    RpcBindingFree(&Binding);
  return LODWORD(v1.Pointer);
}
