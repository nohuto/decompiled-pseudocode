/*
 * XREFs of VfTargetDriversEnableVerifier @ 0x140A8AB50
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140A9A468 (VfSuspectApplyDifVolatileVerification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1402D8518 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14045F6C8 (VfAvlInitializeLockContext.c)
 *     ViTargetDriversFreeVerifiedData @ 0x1405FF00C (ViTargetDriversFreeVerifiedData.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140A8B104 (ViTargetDriversAllocateVerifiedData.c)
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
          ++dword_140C1B248;
        }
        VfAvlCleanupLockContext((__int64)&v7);
        if ( !v2 )
          ViTargetDriversFreeVerifiedData(VerifiedData);
      }
    }
  }
  return v2;
}
