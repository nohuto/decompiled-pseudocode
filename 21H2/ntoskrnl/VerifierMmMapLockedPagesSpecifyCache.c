/*
 * XREFs of VerifierMmMapLockedPagesSpecifyCache @ 0x1409E7BF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     VfCheckPagePriority @ 0x1409C8C14 (VfCheckPagePriority.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1409D82B0 (ViTargetAddToCounter.c)
 *     VfFaultsInjectResourceFailure @ 0x1409DD82C (VfFaultsInjectResourceFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x1409DD968 (VfFaultsIsSystemSufficientlyBooted.c)
 *     VfAllocPoolNotification @ 0x1409E0FB4 (VfAllocPoolNotification.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x1409E8588 (ViMmMapLockedPagesSanityChecks.c)
 */

PVOID __fastcall VerifierMmMapLockedPagesSpecifyCache(
        struct _MDL *BugCheckParameter2,
        KPROCESSOR_MODE a2,
        MEMORY_CACHING_TYPE a3,
        void *a4,
        ULONG BugCheckOnFailure,
        ULONG Priority)
{
  PVOID v10; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 1) != 0 )
    ViMmMapLockedPagesSanityChecks((ULONG_PTR)BugCheckParameter2);
  VfCheckPagePriority(Priority, retaddr);
  if ( (BugCheckParameter2->MdlFlags & 0x2000) == 0 && BugCheckOnFailure )
  {
    if ( (unsigned int)VfFaultsIsSystemSufficientlyBooted() && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(
        0xC4u,
        0x82uLL,
        (ULONG_PTR)BugCheckParameter2,
        BugCheckParameter2->MdlFlags,
        BugCheckOnFailure);
    goto LABEL_8;
  }
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) != 1 )
  {
LABEL_8:
    v10 = MmMapLockedPagesSpecifyCache(BugCheckParameter2, a2, a3, a4, BugCheckOnFailure, Priority);
    VfAllocPoolNotification();
    if ( v10 )
    {
      if ( (MmVerifierData & 0x1000) != 0 )
        ViTargetAddToCounter(retaddr, 192LL, 0xC8u, BugCheckParameter2->ByteCount);
    }
    return v10;
  }
  if ( a2 )
    RtlRaiseStatus(-1073741670);
  return 0LL;
}
