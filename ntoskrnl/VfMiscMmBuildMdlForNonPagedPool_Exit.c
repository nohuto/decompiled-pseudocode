/*
 * XREFs of VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140ADD240
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckRuleEnforcement @ 0x140ABF634 (VfUtilCheckRuleEnforcement.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     MmAreMdlPagesLocked @ 0x140AE5198 (MmAreMdlPagesLocked.c)
 */

void __fastcall VfMiscMmBuildMdlForNonPagedPool_Exit(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u
    && !VerifierNewRuleWorkaround
    && !(unsigned int)MmAreMdlPagesLocked(*(_QWORD *)(a1 + 8))
    && VfUtilCheckRuleEnforcement(*(_QWORD *)a1) )
  {
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0x140uLL,
      CurrentIrql,
      *(_QWORD *)(a1 + 8),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL));
  }
}
