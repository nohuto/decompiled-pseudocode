/*
 * XREFs of VfTargetDriversEnableVerifier @ 0x140ACC480
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140ADB288 (VfSuspectApplyDifVolatileVerification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x14020A004 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A374 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140465E48 (VfAvlInitializeLockContext.c)
 *     ViTargetDriversFreeVerifiedData @ 0x1405CF39C (ViTargetDriversFreeVerifiedData.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140ACCA34 (ViTargetDriversAllocateVerifiedData.c)
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
          ++dword_140C37348;
        }
        VfAvlCleanupLockContext((__int64)&v7);
        if ( !v2 )
          ViTargetDriversFreeVerifiedData(VerifiedData);
      }
    }
  }
  return v2;
}
