/*
 * XREFs of MI_IS_SOFTWARE_PTE_SHADOW_STACK @ 0x1402E9820
 * Callers:
 *     MiCombineCandidate @ 0x14032C640 (MiCombineCandidate.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiDuplicateCloneLeaf @ 0x140661AA8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
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
