/*
 * XREFs of MiIsPteInStore @ 0x1402E1DE0
 * Callers:
 *     MiFinishHardFault @ 0x140239200 (MiFinishHardFault.c)
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiUpdatePfnPriorityByPte @ 0x1402AC5A0 (MiUpdatePfnPriorityByPte.c)
 *     MiResolvePageFileFault @ 0x1402E0F08 (MiResolvePageFileFault.c)
 *     MiComputeFaultCluster @ 0x1402E3EC4 (MiComputeFaultCluster.c)
 *     MiUpdatePfnPriority @ 0x140339DB4 (MiUpdatePfnPriority.c)
 *     MiResolveProtoCombine @ 0x14036A484 (MiResolveProtoCombine.c)
 *     MiCheckCommitReleaseFromVad @ 0x14052B04C (MiCheckCommitReleaseFromVad.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPteInStore(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( (a2 & 4) == 0 || a2 >> 12 != *(_DWORD *)(a1 + 1156) )
    return 0LL;
  return result;
}
