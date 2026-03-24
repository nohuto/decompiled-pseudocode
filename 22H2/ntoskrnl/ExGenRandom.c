/*
 * XREFs of ExGenRandom @ 0x14022C200
 * Callers:
 *     RtlpHeapGenerateRandomValue64 @ 0x1402FF5BC (RtlpHeapGenerateRandomValue64.c)
 *     MiGenerateRandomPte @ 0x140318308 (MiGenerateRandomPte.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x140324714 (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     RtlRandomEx @ 0x1403572D0 (RtlRandomEx.c)
 *     MiInitializeColorTable @ 0x1403ABB3C (MiInitializeColorTable.c)
 *     MiBuildDynamicRegion @ 0x1403B5924 (MiBuildDynamicRegion.c)
 *     MiAssignSoftwareWsleRegion @ 0x1403B6B00 (MiAssignSoftwareWsleRegion.c)
 *     CcBcbProfiler @ 0x1403DB290 (CcBcbProfiler.c)
 *     RtlpLfhIncrementDataSlot @ 0x1403F8014 (RtlpLfhIncrementDataSlot.c)
 *     IopInitializeInMemoryDumpData @ 0x140503F50 (IopInitializeInMemoryDumpData.c)
 *     RtlpAllocateHeap @ 0x140588A70 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x140589758 (RtlpCreateHeapEncoding.c)
 *     sub_1405BF110 @ 0x1405BF110 (sub_1405BF110.c)
 *     sub_1405CC010 @ 0x1405CC010 (sub_1405CC010.c)
 *     PspPrepareSystemDllInitBlock @ 0x140611E28 (PspPrepareSystemDllInitBlock.c)
 *     MiMapViewOfImageSection @ 0x14061D2D0 (MiMapViewOfImageSection.c)
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     sub_140667500 @ 0x140667500 (sub_140667500.c)
 *     MiSelectImageBase @ 0x14066AAC0 (MiSelectImageBase.c)
 *     PspWow64InitThreadGuestx86 @ 0x140679FAC (PspWow64InitThreadGuestx86.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140683A58 (MiAllocateNewSubAllocatedRegion.c)
 *     RtlRandom @ 0x14069FF60 (RtlRandom.c)
 *     PspUserThreadStartup @ 0x1406BFC00 (PspUserThreadStartup.c)
 *     PspSetupUserStack @ 0x1406C5144 (PspSetupUserStack.c)
 *     MiInitializeProcessTopDownEntropy @ 0x1406FC058 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x1406FC130 (MiInitializeProcessBottomUpEntropy.c)
 *     MiProcessLoadConfigForDriver @ 0x14075C52C (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x14075F694 (MiReserveDriverPtes.c)
 *     CmpCmdInit @ 0x140799498 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x1407D3188 (MiGenerateSecureCookie.c)
 *     MiSelectOverflowDllBase @ 0x1408D7D4C (MiSelectOverflowDllBase.c)
 *     PspWow64InitThreadGuestArm @ 0x14090C93C (PspWow64InitThreadGuestArm.c)
 *     EtwpCovSampCaptureContextStart @ 0x140942308 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1409460AC (EtwpCovSampStrideSamplerInitialize.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 *     ExpTimerInitialization @ 0x140A3C164 (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x140A3C5E8 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140A3D968 (ObInitSystem.c)
 *     MiInitializeSystemPtes @ 0x140A4E1C4 (MiInitializeSystemPtes.c)
 *     MiInitializeNonPagedPool @ 0x140A4E39C (MiInitializeNonPagedPool.c)
 *     MiAssignTopLevelRanges @ 0x140A508A8 (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x140A50B28 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x140A50C18 (MiAddSubRegionEntropy.c)
 *     MiInitializeTopLevelBitmap @ 0x140A50CF0 (MiInitializeTopLevelBitmap.c)
 *     MiInitializeRelocations @ 0x140A55780 (MiInitializeRelocations.c)
 *     MiInitializeSharedUserData @ 0x140A579E0 (MiInitializeSharedUserData.c)
 *     MiAssignSessionRanges @ 0x140A684D4 (MiAssignSessionRanges.c)
 *     ExInitializePoolTracker @ 0x140A68AF4 (ExInitializePoolTracker.c)
 *     ExpInitSystemPhase0 @ 0x140A69014 (ExpInitSystemPhase0.c)
 *     ExRngInitializeSystem @ 0x140A6E660 (ExRngInitializeSystem.c)
 *     MiInitializeUltraSpace @ 0x140A6EA40 (MiInitializeUltraSpace.c)
 *     MiInitializeBootDefaults @ 0x140A7160C (MiInitializeBootDefaults.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140229570 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExGenRandom(int a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // rcx
  char *v4; // r9
  int v5; // edx
  int v6; // edi
  __int64 v7; // rdx
  int v8; // ebx
  unsigned int v9; // ebx
  int v10; // ecx
  __int64 v14; // rax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *v18; // rdi
  int v19; // eax
  bool v20; // zf

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  KxAcquireSpinLock(&ExpLFGRngLock);
  if ( (_DWORD)v1 == 1 && ExpRemainingLeftoverBootRngData )
  {
    v14 = (unsigned int)(ExpRemainingLeftoverBootRngData - 1);
    v8 = ExpLeftoverBootRngData[v14];
    --ExpRemainingLeftoverBootRngData;
    memset(&ExpLeftoverBootRngData[v14], 0, sizeof(_DWORD));
  }
  else
  {
    v3 = 0LL;
    v4 = (char *)&ExpLFGRngState + 228 * v1;
    v5 = *((_DWORD *)v4 + 55);
    v6 = *((_DWORD *)v4 + 56);
    if ( v5 != 54 )
      v3 = (unsigned int)(v5 + 1);
    v7 = 0LL;
    if ( v6 != 54 )
      v7 = (unsigned int)(v6 + 1);
    v8 = *(_DWORD *)&v4[4 * v3] - *(_DWORD *)&v4[4 * v7];
    *(_DWORD *)&v4[4 * v3] = v8;
    *((_DWORD *)v4 + 55) = v3;
    *((_DWORD *)v4 + 56) = v7;
  }
  KxReleaseSpinLock(&ExpLFGRngLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  v9 = ExpRNGAuxiliarySeed ^ v8;
  if ( (KeFeatureBits & 0x100000000LL) != 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      __asm { rdrand  edx }
      if ( _CF )
        break;
      if ( (unsigned int)++v10 >= 0xA )
        return v9;
    }
    v9 ^= _EDX;
  }
  return v9;
}
