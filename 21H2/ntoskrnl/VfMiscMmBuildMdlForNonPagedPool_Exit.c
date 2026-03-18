/*
 * XREFs of VfMiscMmBuildMdlForNonPagedPool_Exit @ 0x140AA44E0
 * Callers:
 *     <none>
 * Callees:
 *     MmAreMdlPagesLocked @ 0x140A8142C (MmAreMdlPagesLocked.c)
 *     VfUtilCheckRuleEnforcement @ 0x140A81CBC (VfUtilCheckRuleEnforcement.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfMiscMmBuildMdlForNonPagedPool_Exit(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u
    && !VerifierNewRuleWorkaround
    && !(unsigned int)MmAreMdlPagesLocked(*(_DWORD **)(a1 + 8))
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
