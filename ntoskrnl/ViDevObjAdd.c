/*
 * XREFs of ViDevObjAdd @ 0x140ACF440
 * Callers:
 *     VerifierIoCreateDevice @ 0x140ACEFB0 (VerifierIoCreateDevice.c)
 * Callees:
 *     VfAvlReserveNode @ 0x140303910 (VfAvlReserveNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140303A48 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
 */

char __fastcall ViDevObjAdd(__int64 a1)
{
  char v1; // bl
  char *v2; // rax
  _QWORD *v3; // rax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v1 = 1;
  v5 = 0LL;
  if ( ViDevObjInitialized )
  {
    v2 = VfAvlReserveNode(ViDevObjAvl, a1, 336LL);
    if ( v2 )
    {
      *((_DWORD *)v2 + 4) = 0;
      VfAvlInitializeLockContext((__int64)&v5, 0);
      VfAvlInsertReservedTreeNode((__int64)ViDevObjAvl, (__int64)&v5, v3);
      VfAvlCleanupLockContext((__int64)&v5);
      return v1;
    }
    _InterlockedExchange(&ViDevObjAllocationFailures, 1);
  }
  return 0;
}
