/*
 * XREFs of ViTargetAddToCounter @ 0x140AC8994
 * Callers:
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140ADD2B0 (VfMiscMmUnmapLockedPages_Entry.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x140ADF970 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140ADFAF0 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140ADFC00 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmFreePagesFromMdl @ 0x140ADFF50 (VerifierMmFreePagesFromMdl.c)
 *     VerifierMmMapIoSpace @ 0x140ADFFF0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140AE0180 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140AE0250 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140AE0450 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140AE0540 (VerifierMmProbeAndLockProcessPages.c)
 *     VerifierMmUnlockPages @ 0x140AE0680 (VerifierMmUnlockPages.c)
 *     VerifierMmUnmapIoSpace @ 0x140AE07C0 (VerifierMmUnmapIoSpace.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
 *     ViTargetUpdateTreeAllowed @ 0x140AC8E94 (ViTargetUpdateTreeAllowed.c)
 */

void __fastcall ViTargetAddToCounter(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  volatile signed __int64 *v12; // rcx
  volatile signed __int64 v13; // rtt
  _OWORD v14[2]; // [rsp+28h] [rbp-20h] BYREF

  v4 = a3;
  v14[0] = 0LL;
  v6 = (unsigned int)a2;
  if ( (unsigned int)ViTargetUpdateTreeAllowed(a1, a2, a1) )
  {
    VfAvlInitializeLockContext((__int64)v14, 1);
    v9 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v14, v7, v8);
    if ( v9 )
    {
      v10 = v9[7];
      if ( v10 )
      {
        v11 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + v10), a4);
        v12 = (volatile signed __int64 *)(v10 + v4);
        do
        {
          if ( *v12 > v11 )
            break;
          v13 = *v12;
        }
        while ( v13 != _InterlockedCompareExchange64(v12, v11, *v12) );
      }
    }
    VfAvlCleanupLockContext((__int64)v14);
  }
}
