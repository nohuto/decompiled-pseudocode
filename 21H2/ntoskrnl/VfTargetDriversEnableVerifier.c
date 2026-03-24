/*
 * XREFs of VfTargetDriversEnableVerifier @ 0x1409D6D94
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409D9B98 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140371B24 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14037EBF4 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1405A25D4 (VfAvlInitializeLockContext.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1409D7350 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversEnableVerifier(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *VerifiedData; // rdi
  _QWORD *v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v7 = 0LL;
  if ( !VfSafeMode )
  {
    if ( ViTargetInitialized )
    {
      VerifiedData = (void *)ViTargetDriversAllocateVerifiedData(a2);
      if ( VerifiedData )
      {
        VfAvlInitializeLockContext((__int64)&v7, 0);
        v5 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v7, a1, 1LL);
        if ( v5 )
        {
          v5[7] = VerifiedData;
          v2 = 1;
          ++dword_140C1D0A8;
        }
        VfAvlCleanupLockContext((__int64)&v7);
        if ( !v2 )
          ExFreePoolWithTag(VerifiedData, 0x44566656u);
      }
    }
  }
  return v2;
}
