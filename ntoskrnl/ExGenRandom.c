/*
 * XREFs of ExGenRandom @ 0x14027E2F0
 * Callers:
 *     KiUpdateProcessConcurrencyCount @ 0x14022B7A0 (KiUpdateProcessConcurrencyCount.c)
 *     KeStartThread @ 0x1402385C4 (KeStartThread.c)
 *     RtlRandomEx @ 0x1402A6210 (RtlRandomEx.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x14030B578 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x14030C0DC (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     MiBuildDynamicRegion @ 0x1403715AC (MiBuildDynamicRegion.c)
 *     MiInitializeColorTable @ 0x140393FAC (MiInitializeColorTable.c)
 *     MiAssignSoftwareWsleRegion @ 0x14039751C (MiAssignSoftwareWsleRegion.c)
 *     CcBcbProfiler @ 0x1403DD7C0 (CcBcbProfiler.c)
 *     RtlpLfhIncrementDataSlot @ 0x14040C250 (RtlpLfhIncrementDataSlot.c)
 *     VslpVerifySessionSpace @ 0x14054ABD0 (VslpVerifySessionSpace.c)
 *     IopInitializeInMemoryDumpData @ 0x140550F70 (IopInitializeInMemoryDumpData.c)
 *     KiAdaptThreadIdealProcessorForProcessIdealSetChange @ 0x140574290 (KiAdaptThreadIdealProcessorForProcessIdealSetChange.c)
 *     RtlpAllocateHeap @ 0x1405A8E28 (RtlpAllocateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x1405A9B40 (RtlpCreateHeapEncoding.c)
 *     sub_14066A530 @ 0x14066A530 (sub_14066A530.c)
 *     sub_14067C010 @ 0x14067C010 (sub_14067C010.c)
 *     MiSelectImageBase @ 0x1406A1934 (MiSelectImageBase.c)
 *     PspSetupUserStack @ 0x1406A2EF8 (PspSetupUserStack.c)
 *     PspPrepareSystemDllInitBlock @ 0x1407075A8 (PspPrepareSystemDllInitBlock.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x140728C14 (MiInitializeProcessBottomUpEntropy.c)
 *     MiInitializeProcessTopDownEntropy @ 0x140728DC4 (MiInitializeProcessTopDownEntropy.c)
 *     sub_140754B04 @ 0x140754B04 (sub_140754B04.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140756084 (MiAllocateNewSubAllocatedRegion.c)
 *     PspWow64InitThreadGuestx86 @ 0x14077D270 (PspWow64InitThreadGuestx86.c)
 *     MiProcessLoadConfigForDriver @ 0x140784998 (MiProcessLoadConfigForDriver.c)
 *     RtlRandom @ 0x140797410 (RtlRandom.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     PspNotifyThreadCreation @ 0x1407ED550 (PspNotifyThreadCreation.c)
 *     MiReserveDriverPtes @ 0x1407F6D70 (MiReserveDriverPtes.c)
 *     CmpCmdInit @ 0x140819024 (CmpCmdInit.c)
 *     MiGenerateSecureCookie @ 0x14085F580 (MiGenerateSecureCookie.c)
 *     VslVerifySessionSpace @ 0x1409405E0 (VslVerifySessionSpace.c)
 *     PspWow64InitThreadGuestArm @ 0x1409B3254 (PspWow64InitThreadGuestArm.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EDC1C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampStrideSamplerInitialize @ 0x1409F0034 (EtwpCovSampStrideSamplerInitialize.c)
 *     MiSelectOverflowDllBase @ 0x140A4555C (MiSelectOverflowDllBase.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 *     MiInitializeUltraSpace @ 0x140B38940 (MiInitializeUltraSpace.c)
 *     MiInitializeSystemPtes @ 0x140B391FC (MiInitializeSystemPtes.c)
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 *     ExpTimerInitialization @ 0x140B3EA2C (ExpTimerInitialization.c)
 *     CcInitializeCacheManager @ 0x140B3EB44 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 *     ExpInitSystemPhase0 @ 0x140B49BD0 (ExpInitSystemPhase0.c)
 *     MiInitializeNonPagedPool @ 0x140B5EDA4 (MiInitializeNonPagedPool.c)
 *     MiInitializeTopLevelBitmap @ 0x140B603C4 (MiInitializeTopLevelBitmap.c)
 *     MiAssignTopLevelRanges @ 0x140B604AC (MiAssignTopLevelRanges.c)
 *     MiAssignSystemVa @ 0x140B60784 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x140B609A8 (MiAddSubRegionEntropy.c)
 *     ExInitializePoolTracker @ 0x140B63C80 (ExInitializePoolTracker.c)
 *     PspTlsInitialize @ 0x140B641FC (PspTlsInitialize.c)
 *     MiInitializeSharedUserData @ 0x140B68D24 (MiInitializeSharedUserData.c)
 *     MiAssignSessionRanges @ 0x140B6BF00 (MiAssignSessionRanges.c)
 *     MiInitializeRelocations @ 0x140B6D9F8 (MiInitializeRelocations.c)
 *     MiInitializeBootDefaults @ 0x140B6EF9C (MiInitializeBootDefaults.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056F278 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExGenRandom(int a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned int v3; // ecx
  char *v4; // r9
  int v5; // edx
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // ebx
  unsigned int v10; // ebx
  int v11; // ecx
  _DWORD *SchedulerAssist; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int8 v18; // cl
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *v20; // rdi
  int v21; // eax
  bool v22; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v16) = 4;
    else
      v16 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v16;
  }
  KxAcquireSpinLock(&ExpLFGRngLock);
  if ( (_DWORD)v1 == 1 && ExpRemainingLeftoverBootRngData )
  {
    v17 = (unsigned int)(ExpRemainingLeftoverBootRngData - 1);
    v9 = ExpLeftoverBootRngData[v17];
    --ExpRemainingLeftoverBootRngData;
    memset(&ExpLeftoverBootRngData[v17], 0, sizeof(_DWORD));
  }
  else
  {
    v3 = 0;
    v4 = (char *)&ExpLFGRngState + 228 * v1;
    v5 = *((_DWORD *)v4 + 55);
    v6 = *((_DWORD *)v4 + 56);
    if ( v5 != 54 )
      v3 = v5 + 1;
    v7 = v3;
    v8 = 0LL;
    if ( v6 != 54 )
      v8 = (unsigned int)(v6 + 1);
    v9 = *(_DWORD *)&v4[4 * v7] - *(_DWORD *)&v4[4 * v8];
    *(_DWORD *)&v4[4 * v7] = v9;
    *((_DWORD *)v4 + 55) = v7;
    *((_DWORD *)v4 + 56) = v8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ExpLFGRngLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&ExpLFGRngLock, 0LL);
  if ( KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v22 = (v21 & v20[5]) == 0;
      v20[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  v10 = ExpRNGAuxiliarySeed ^ v9;
  if ( _bittest64(&KeFeatureBits, 0x20u) )
  {
    v11 = 0;
    while ( 1 )
    {
      __asm { rdrand  edx }
      if ( _CF )
        break;
      if ( (unsigned int)++v11 >= 0xA )
        return v10;
    }
    v10 ^= _EDX;
  }
  return v10;
}
