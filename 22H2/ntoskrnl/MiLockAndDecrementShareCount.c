/*
 * XREFs of MiLockAndDecrementShareCount @ 0x140263D30
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140210810 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216750 (MiResolveTransitionFault.c)
 *     MiCreateSharedZeroPages @ 0x1402410E0 (MiCreateSharedZeroPages.c)
 *     MmOutSwapProcess @ 0x140249E04 (MmOutSwapProcess.c)
 *     MiOutPageSingleKernelStack @ 0x1402638B0 (MiOutPageSingleKernelStack.c)
 *     MiIssueHardFault @ 0x14028F030 (MiIssueHardFault.c)
 *     MiCompleteRestrictedImageFault @ 0x14029D730 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x1402F3648 (MiMakeSystemCachePteValid.c)
 *     MiReleaseInPageRefs @ 0x14032397C (MiReleaseInPageRefs.c)
 *     MiConvertStandbyToProto @ 0x1403668C8 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14036A484 (MiResolveProtoCombine.c)
 *     MiDemoteCombinedPte @ 0x14036ABB0 (MiDemoteCombinedPte.c)
 *     MiDecommitLargePoolVa @ 0x1403714C0 (MiDecommitLargePoolVa.c)
 *     MiUnmapRetpolineStubs @ 0x140544188 (MiUnmapRetpolineStubs.c)
 *     MiHandleForkTransitionPte @ 0x14055A9A4 (MiHandleForkTransitionPte.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140660414 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmFreeIndependentPages @ 0x140763BF0 (MmFreeIndependentPages.c)
 *     MiMarkBootGuardPage @ 0x14079FDEC (MiMarkBootGuardPage.c)
 *     MiCaptureSparsePages @ 0x1408D85B4 (MiCaptureSparsePages.c)
 *     MiFreeBootDriverPages @ 0x140A50050 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockAndDecrementShareCount(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v3 = a2;
  v5 = (unsigned __int8)MiLockPageInline(a1, a2, a3);
  if ( (v3 & 1) != 0 )
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  v6 = MiDecrementShareCount(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return v6;
}
