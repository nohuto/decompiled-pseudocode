/*
 * XREFs of VfDevObjMarkDeviceRemoved @ 0x1409D6048
 * Callers:
 *     IovpCallDriver1 @ 0x1409CFC4C (IovpCallDriver1.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140371B24 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14037EBF4 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1405A25D4 (VfAvlInitializeLockContext.c)
 */

char VfDevObjMarkDeviceRemoved()
{
  char result; // al
  unsigned __int64 v1; // r8
  volatile signed __int32 *v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  result = MmVerifierData;
  v3 = 0LL;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfAvlInitializeLockContext((__int64)&v3, 1);
    v2 = (volatile signed __int32 *)VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v3, v1, 0LL);
    if ( v2 )
      _InterlockedOr(v2 + 4, 2u);
    return VfAvlCleanupLockContext((__int64)&v3);
  }
  return result;
}
