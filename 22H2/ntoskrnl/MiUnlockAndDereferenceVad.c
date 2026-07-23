/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x14021AF40
 * Callers:
 *     MiProbeAndLockPrepare @ 0x14020A2B0 (MiProbeAndLockPrepare.c)
 *     MiProbeAndLockPages @ 0x14020A820 (MiProbeAndLockPages.c)
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x14025AF50 (MiObtainReferencedSecureVad.c)
 *     NtGetWriteWatch @ 0x1402ACCE0 (NtGetWriteWatch.c)
 *     MiDeprioritizeVad @ 0x1403817D4 (MiDeprioritizeVad.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F3CA8 (MmUpdateUserShadowStackValue.c)
 *     MiScrubProcessLargePages @ 0x140564434 (MiScrubProcessLargePages.c)
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 *     MiLockVadRange @ 0x14061E040 (MiLockVadRange.c)
 *     MiUnmapViewOfSection @ 0x14061E510 (MiUnmapViewOfSection.c)
 *     MiCleanVad @ 0x14061ECB8 (MiCleanVad.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x14061FB80 (MmUnsecureVirtualMemory.c)
 *     MmSecureVirtualMemoryEx @ 0x140620040 (MmSecureVirtualMemoryEx.c)
 *     MiFreeToSubAllocatedRegion @ 0x140636BA4 (MiFreeToSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x140637BF0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 *     NtResetWriteWatch @ 0x14063A770 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x14063AD20 (MmFreeVirtualMemory.c)
 *     MmRotatePhysicalView @ 0x14065FD60 (MmRotatePhysicalView.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406991AC (MmStoreAllocateVirtualMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406C4F40 (MiAllocateFromSubAllocatedRegion.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406DAFE8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiCfgMarkValidEntries @ 0x1406FAA44 (MiCfgMarkValidEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x1406FAC44 (MiProcessVaRangesInfoClass.c)
 *     MiCfgInitializeProcess @ 0x1406FC70C (MiCfgInitializeProcess.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076ACC0 (MiMapLockedPagesInUserSpace.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14076D36C (MiUnmapLockedPagesInUserSpace.c)
 *     MmSetGraphicsPtes @ 0x1408C6F00 (MmSetGraphicsPtes.c)
 *     MiPerformImageHotPatch @ 0x1408CCF14 (MiPerformImageHotPatch.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CE554 (MiSetImageHotPatchAllowed.c)
 *     MiCreateEnclave @ 0x1408D282C (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x1408D2FE0 (MiInitializeEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D35C0 (MiLoadSectionIntoVsmEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1408D3CC4 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1408D44A0 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x1408D4B20 (NtTerminateEnclave.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B0B00 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(char *P)
{
  signed __int32 v2; // edx
  unsigned int SessionId; // r15d
  BOOL v4; // r12d
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v6; // rbx
  unsigned int v7; // edx
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned __int8 AbAllocationRegionCount; // [rsp+70h] [rbp+8h]

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  SessionId = -1;
  if ( v2 == -1 )
    __fastfail(0xEu);
  v4 = !v2 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 40);
  v6 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(P + 40) == 1 )
    SessionId = MmGetSessionIdEx(v6->ApcState.Process);
  --v6->SpecialApcDisable;
  ++v6->AbAllocationRegionCount;
  v7 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
  AbAllocationRegionCount = v6->AbAllocationRegionCount;
  v8 = !_BitScanReverse((unsigned int *)&v9, v7);
  if ( v8 )
    goto LABEL_30;
  while ( 1 )
  {
    v10 = (__int64)&v6->LockEntries[v9];
    v7 &= ~(1 << v9);
    if ( (*(_BYTE *)(v10 + 26) & 1) != 0
      && (*(_DWORD *)(v10 + 32) & 1) == 0
      && (*(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 40) & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v10 + 40) == SessionId )
    {
      *(_BYTE *)(v10 + 26) &= ~1u;
      if ( *(_QWORD *)(v10 + 32) )
        break;
    }
    v8 = !_BitScanReverse((unsigned int *)&v9, v7);
    if ( v8 )
      goto LABEL_30;
  }
  if ( !v10 )
  {
LABEL_30:
    if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)(P + 40), SessionId, 0LL);
  }
  else
  {
    *(_BYTE *)(v10 + 32) |= 2u;
    if ( *(__int64 *)(v10 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v10);
    *(_DWORD *)(v10 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v10 + 25) &= ~1u;
    *(_QWORD *)(v10 + 32) = 0LL;
    v11 = (signed __int64)(v10 - (unsigned __int64)v6->LockEntries) / 96;
    if ( AbAllocationRegionCount == 1 )
      v6->AbEntrySummary |= 1 << v11;
    else
      _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v11);
  }
  --v6->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v6);
  v8 = v6->SpecialApcDisable++ == -1;
  if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery();
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v4 )
    ExFreePoolWithTag(P, 0);
}
