/*
 * XREFs of RmAccessCheckOnSelf @ 0x180010180
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000FD30 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@@Z @ 0x18000FD9C (-RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@@Z.c)
 */

CLIENT_CALL_RETURN __fastcall RmAccessCheckOnSelf(int a1)
{
  CLIENT_CALL_RETURN result; // rax
  struct ResourceManagerProxy *v3; // [rsp+38h] [rbp+10h] BYREF

  result.Simple = GetResourceManagerProxy(&v3);
  if ( SLODWORD(result.Simple) >= 0 )
    return ResourceManagerProxy::RmAccessCheck((__int64)v3, a1);
  return result;
}
