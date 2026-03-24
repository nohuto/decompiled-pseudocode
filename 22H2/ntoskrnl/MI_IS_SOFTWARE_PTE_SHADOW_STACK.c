/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x14031218C
 * Callers:
 *     MiIssueHardFault @ 0x14028F030 (MiIssueHardFault.c)
 *     MiCombineCandidate @ 0x1403690F0 (MiCombineCandidate.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x14055A174 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x14055A9A4 (MiHandleForkTransitionPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_IS_SOFTWARE_PTE_SHADOW_STACK(_QWORD *a1)
{
  if ( (*a1 & 0x400LL) != 0 )
    return 0LL;
  else
    return (*a1 >> 26) & 1LL;
}
