/*
 * XREFs of _lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_ @ 0x1C00D3D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

const MIDL_STUBLESS_PROXY_INFO *lambda_2bb7a2ff8864d6893c712a9e9ac801fb_::_lambda_invoker_cdecl_()
{
  const MIDL_STUBLESS_PROXY_INFO *v0; // rbx
  const MIDL_STUBLESS_PROXY_INFO *result; // rax

  v0 = (const MIDL_STUBLESS_PROXY_INFO *)&off_1C030A300;
  do
  {
    ((void (*)(void))v0->pStubDesc)();
    result = &pProxyInfo;
    v0 = (const MIDL_STUBLESS_PROXY_INFO *)((char *)v0 + 8);
  }
  while ( v0 != &pProxyInfo );
  return result;
}
