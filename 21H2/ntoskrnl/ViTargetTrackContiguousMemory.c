/*
 * XREFs of ViTargetTrackContiguousMemory @ 0x140A8B450
 * Callers:
 *     VerifierMmAllocateContiguousMemory @ 0x140A9F2C0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140A9F440 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140A9F580 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140A9F6A0 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140A9F900 (VerifierMmAllocateNonCachedMemory.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1402D8518 (VfAvlLookupTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1402DB870 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlInitializeLockContext @ 0x14045F6C8 (VfAvlInitializeLockContext.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     ViTargetUpdateTreeAllowed @ 0x140A8B564 (ViTargetUpdateTreeAllowed.c)
 */

char __fastcall ViTargetTrackContiguousMemory(unsigned __int64 a1, _SLIST_ENTRY *a2, __int64 a3)
{
  struct _SLIST_ENTRY *Pool2; // rax
  struct _SLIST_ENTRY *v7; // rbx
  int v8; // esi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  struct _SLIST_ENTRY **v13; // rax
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF

  v15 = 0LL;
  LODWORD(Pool2) = ViTargetUpdateTreeAllowed(a1, a2, a3);
  if ( (_DWORD)Pool2 )
  {
    Pool2 = (struct _SLIST_ENTRY *)ExAllocatePool2(64LL, 0x28uLL, 0x61436656u);
    v7 = Pool2;
    if ( Pool2 )
    {
      Pool2[1].Next = a2;
      *((_QWORD *)&Pool2[1].Next + 1) = a3;
      v8 = 0;
      Pool2[2].Next = (_SLIST_ENTRY *)a1;
      VfAvlInitializeLockContext((__int64)&v15, 0);
      v9 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v15, a1, 1LL);
      if ( v9 )
      {
        v10 = v9[7];
        if ( v10 )
        {
          qword_140C1B250 += a3;
          v11 = a3 + *(_QWORD *)(v10 + 248);
          *(_QWORD *)(v10 + 248) = v11;
          if ( *(_QWORD *)(v10 + 256) < v11 )
            *(_QWORD *)(v10 + 256) = v11;
          v12 = v10 + 264;
          v13 = *(struct _SLIST_ENTRY ***)(v12 + 8);
          if ( *v13 != (struct _SLIST_ENTRY *)v12 )
            __fastfail(3u);
          v7->Next = (_SLIST_ENTRY *)v12;
          v8 = 1;
          *((_QWORD *)&v7->Next + 1) = v13;
          *v13 = v7;
          *(_QWORD *)(v12 + 8) = v7;
        }
      }
      LOBYTE(Pool2) = VfAvlCleanupLockContext((__int64)&v15);
      if ( !v8 )
        LOBYTE(Pool2) = VfUtilFreePoolCheckIRQL(v7);
    }
  }
  return (char)Pool2;
}
