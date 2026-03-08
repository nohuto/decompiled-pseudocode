/*
 * XREFs of VerifierMmMapLockedPagesSpecifyCache @ 0x140AE0250
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfCheckPagePriority @ 0x140AC07A0 (VfCheckPagePriority.c)
 *     ViTargetAddToCounter @ 0x140AC8994 (ViTargetAddToCounter.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     VfFaultsInjectResourceFailure @ 0x140AD2FAC (VfFaultsInjectResourceFailure.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140AD30E8 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViMmMapLockedPagesSanityChecks @ 0x140AE0A58 (ViMmMapLockedPagesSanityChecks.c)
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
  if ( !_bittest16(&BugCheckParameter2->MdlFlags, 0xDu) && BugCheckOnFailure )
  {
    if ( (unsigned int)VfFaultsIsSystemSufficientlyBooted() && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(
        0xC4u,
        0x82uLL,
        (ULONG_PTR)BugCheckParameter2,
        BugCheckParameter2->MdlFlags,
        BugCheckOnFailure);
    goto LABEL_12;
  }
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) != 1
    && ((VfRuleClasses & 0x40000) == 0
     || !ViFnAutoFailInject
     || !(unsigned __int8)ViFnAutoFailInject("MmMapLockedPagesSpecifyCache")) )
  {
LABEL_12:
    v10 = MmMapLockedPagesSpecifyCache(BugCheckParameter2, a2, a3, a4, BugCheckOnFailure, Priority);
    if ( v10 )
    {
      if ( (MmVerifierData & 0x1000) != 0 )
        ViTargetAddToCounter(retaddr, 200LL, 0xD0u, BugCheckParameter2->ByteCount);
    }
    return v10;
  }
  if ( a2 )
    RtlRaiseStatus(-1073741670);
  return 0LL;
}
