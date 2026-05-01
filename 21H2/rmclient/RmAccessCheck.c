/*
 * XREFs of RmAccessCheck @ 0x180010140
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000FD30 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@K@Z @ 0x18000FE0C (-RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@K@Z.c)
 */

CLIENT_CALL_RETURN __fastcall RmAccessCheck(int a1, int a2)
{
  CLIENT_CALL_RETURN result; // rax
  struct ResourceManagerProxy *v5; // [rsp+40h] [rbp+18h] BYREF

  result.Simple = GetResourceManagerProxy(&v5);
  if ( SLODWORD(result.Simple) >= 0 )
    return ResourceManagerProxy::RmAccessCheck((__int64)v5, a1, a2);
  return result;
}
