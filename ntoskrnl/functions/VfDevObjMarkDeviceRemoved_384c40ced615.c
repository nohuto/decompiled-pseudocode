void VfDevObjMarkDeviceRemoved()
{
  unsigned __int64 v0; // r8
  volatile signed __int32 *v1; // rax
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfAvlInitializeLockContext((__int64)&v2, 1);
    v1 = (volatile signed __int32 *)VfAvlLookupTreeNode(ViDevObjAvl, (__int64)&v2, v0, 0LL);
    if ( v1 )
      _InterlockedOr(v1 + 4, 2u);
    VfAvlCleanupLockContext((__int64)&v2);
  }
}
