/*
 * XREFs of PlaySoundConnect @ 0x1C039CDE4
 * Callers:
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x1C00F6B4C (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 * Callees:
 *     StringCchPrintfW @ 0x1C00F6CAC (StringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall PlaySoundConnect(unsigned int a1, __int64 a2, RPC_BINDING_HANDLE *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp-118h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+60h] [rbp-E8h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+88h] [rbp-C0h] BYREF
  wchar_t v9[56]; // [rsp+C0h] [rbp-88h] BYREF

  v4 = 0;
  Template.Version = 1;
  Template.Flags = 0;
  *(_QWORD *)&Template.ProtocolSequence = 3LL;
  memset(&Template.NetworkAddress, 0, 40);
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v6;
  if ( StringCchPrintfW(
         v9,
         0x32uLL,
         L"PlaySoundKRpc%X",
         a1,
         0,
         a3,
         0x100000004LL,
         0x200000000LL,
         0LL,
         0LL,
         a2,
         1LL,
         1LL,
         0LL,
         0xA00000006LL,
         0LL) >= 0 )
  {
    Template.StringEndpoint = v9;
    v4 = RpcBindingCreateW(&Template, &Security, &Options, a3);
    if ( !v4 )
      v4 = RpcBindingBind(0LL, *a3, &unk_1C030A3C0);
    if ( v4 && *a3 )
    {
      RpcBindingFree(a3);
      *a3 = 0LL;
    }
  }
  return v4;
}
