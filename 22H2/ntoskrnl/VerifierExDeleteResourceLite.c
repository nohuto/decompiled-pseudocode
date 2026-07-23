/*
 * XREFs of VerifierExDeleteResourceLite @ 0x1409E1E30
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x140372304 (VfAvlCleanupLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14037E440 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14037E4A8 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14037E564 (VfAvlLookupTreeNode.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     VfAvlInitializeLockContext @ 0x1405A2514 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D0D64 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierExDeleteResourceLite(PVOID *BugCheckParameter2)
{
  unsigned __int64 v1; // rbx
  _SLIST_ENTRY *v3; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0LL;
  v8 = 0LL;
  if ( ViResourceInitialized && qword_140D4A380 )
  {
    v3 = 0LL;
    VfAvlInitializeLockContext((__int64)&v8, 0);
    if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v8, (unsigned __int64)BugCheckParameter2, 0LL) )
    {
      v3 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(
                             (__int64)&ViResourceAvl,
                             (__int64)&v8,
                             (unsigned __int64)BugCheckParameter2,
                             0LL);
    }
    else if ( !ViResourceNotTracked && !ViResourcesAlreadyLoadedDrivers && (MmVerifierData & 0x800) != 0 )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xD1uLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
    }
    VfAvlCleanupLockContext((__int64)&v8);
    if ( v3 )
    {
      if ( dword_140D4A398 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
      else
        VfUtilFreePoolCheckIRQL(v3);
    }
  }
  LODWORD(result) = ((__int64 (__fastcall *)(PVOID *))pXdvExDeleteResourceLite)(BugCheckParameter2);
  if ( (MmVerifierData & 0x800) != 0 && (int)result >= 0 )
  {
    v5 = BugCheckParameter2 + 13 >= BugCheckParameter2 ? 0xD : 0;
    if ( (BugCheckParameter2 + 13 >= BugCheckParameter2 ? 0xD : 0) != 0 )
    {
      if ( BugCheckParameter2 <= BugCheckParameter2 + 13
        && (BugCheckParameter2 > &MmBadPointer || &BugCheckParameter2[v5 - 1] < &MmBadPointer) )
      {
        v6 = BugCheckParameter2 + 13 >= BugCheckParameter2 ? 0xC : 0;
        do
          v1 += 2LL;
        while ( v1 < v6 );
        v7 = 8 * v6;
        memset64(BugCheckParameter2, (unsigned __int64)MmBadPointer, v7 >> 3);
        BugCheckParameter2 = (PVOID *)((char *)BugCheckParameter2 + v7);
      }
      while ( v1 < v5 )
      {
        ++v1;
        *BugCheckParameter2++ = MmBadPointer;
      }
    }
  }
  return (unsigned int)result;
}
