/*
 * XREFs of MiObtainReferencedVadEx @ 0x14021B260
 * Callers:
 *     MiProbeAndLockPrepare @ 0x14020A2B0 (MiProbeAndLockPrepare.c)
 *     NtGetWriteWatch @ 0x1402ACCE0 (NtGetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x1403378AC (MiGetWorkingSetInfoList.c)
 *     MmUpdateUserShadowStackValue @ 0x1403F3CA8 (MmUpdateUserShadowStackValue.c)
 *     MiPrefetchPreallocatePages @ 0x140539560 (MiPrefetchPreallocatePages.c)
 *     MmGetEnclaveModuleList @ 0x14054B674 (MmGetEnclaveModuleList.c)
 *     MiProcessVaContiguityInformation @ 0x140552200 (MiProcessVaContiguityInformation.c)
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 *     MiUnmapViewOfSection @ 0x14061E510 (MiUnmapViewOfSection.c)
 *     MmSecureVirtualMemoryEx @ 0x140620040 (MmSecureVirtualMemoryEx.c)
 *     MmDeleteTeb @ 0x140636AF0 (MmDeleteTeb.c)
 *     NtResetWriteWatch @ 0x14063A770 (NtResetWriteWatch.c)
 *     MmFreeVirtualMemory @ 0x14063AD20 (MmFreeVirtualMemory.c)
 *     MmRotatePhysicalView @ 0x14065FD60 (MmRotatePhysicalView.c)
 *     MmFlushVirtualMemory @ 0x140668FB4 (MmFlushVirtualMemory.c)
 *     MiCheckShadowStackOverflow @ 0x140679CAC (MiCheckShadowStackOverflow.c)
 *     NtAreMappedFilesTheSame @ 0x1406A0330 (NtAreMappedFilesTheSame.c)
 *     MmStoreFreeVirtualMemory @ 0x1406A1BF0 (MmStoreFreeVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1406DAFE8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiCfgMarkValidEntries @ 0x1406FAA44 (MiCfgMarkValidEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x1406FAC44 (MiProcessVaRangesInfoClass.c)
 *     MiReferenceCfgVad @ 0x1406FD0BC (MiReferenceCfgVad.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14076D36C (MiUnmapLockedPagesInUserSpace.c)
 *     MmGetFileNameForAddress @ 0x1408C4094 (MmGetFileNameForAddress.c)
 *     MmSetGraphicsPtes @ 0x1408C6F00 (MmSetGraphicsPtes.c)
 *     MiSetImageHotPatchAllowed @ 0x1408CE554 (MiSetImageHotPatchAllowed.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x1408D12F0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiHandleEnclaveFault @ 0x1408D1D58 (MiHandleEnclaveFault.c)
 *     MiInitializeEnclave @ 0x1408D2FE0 (MiInitializeEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x1408D3CC4 (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x1408D44A0 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x1408D4B20 (NtTerminateEnclave.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B0B00 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021AF40 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockVadShared @ 0x14025A96C (MiUnlockVadShared.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14025AAB0 (MiUnlockAndDereferenceVadShared.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1402C8E20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MiWaitForVadDeletion @ 0x14055BD50 (MiWaitForVadDeletion.c)
 */

volatile signed __int32 *__fastcall MiObtainReferencedVadEx(unsigned __int64 a1, char a2, int *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r14
  _KPROCESS *v8; // rdx
  volatile signed __int32 *v9; // rbx
  unsigned __int64 v10; // rsi
  ULONG_PTR v11; // rcx
  int v12; // r15d
  bool v13; // zf
  int v15; // edx
  int v16; // eax

  *a3 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL);
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  v8 = KeGetCurrentThread()->ApcState.Process;
  v9 = *(volatile signed __int32 **)&v8[1].Spare2[23];
  if ( !v9 )
  {
LABEL_15:
    v15 = -1073741664;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
      v15 = -1073741558;
    goto LABEL_17;
  }
  v10 = a1 >> 12;
  if ( v10 < (*((unsigned int *)v9 + 6) | ((unsigned __int64)*((unsigned __int8 *)v9 + 32) << 32))
    || v10 > (*((unsigned int *)v9 + 7) | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32)) )
  {
    v9 = *(volatile signed __int32 **)&v8[1].Spare2[15];
    if ( v9 )
    {
      while ( 1 )
      {
        if ( v10 > (*((unsigned int *)v9 + 7) | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32)) )
        {
          v9 = (volatile signed __int32 *)*((_QWORD *)v9 + 1);
        }
        else
        {
          if ( v10 >= (*((unsigned int *)v9 + 6) | ((unsigned __int64)*((unsigned __int8 *)v9 + 32) << 32)) )
          {
            *(_QWORD *)&v8[1].Spare2[23] = v9;
            goto LABEL_4;
          }
          v9 = *(volatile signed __int32 **)v9;
        }
        if ( !v9 )
          goto LABEL_15;
      }
    }
    goto LABEL_15;
  }
LABEL_4:
  if ( (a2 & 1) == 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v15 = -1073741558;
LABEL_17:
    *a3 = v15;
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    return 0LL;
  }
  if ( !_InterlockedIncrement(v9 + 9) )
    __fastfail(0xEu);
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  --CurrentThread->SpecialApcDisable;
  v11 = (ULONG_PTR)(v9 + 10);
  v12 = a2 & 2;
  if ( v12 )
  {
    ExAcquirePushLockSharedEx(v11, 0LL);
    BYTE1(CurrentThread[1].Queue) |= 0x40u;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(v11, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( (v9[12] & 4) != 0 )
  {
    if ( v12 )
    {
      MiUnlockVadShared(CurrentThread, v9);
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 10), 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    }
    MiWaitForVadDeletion(v9);
    MiUnlockAndDereferenceVad((char *)v9);
    v16 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v16 = -1073741664;
    *a3 = v16;
  }
  else
  {
    if ( v10 >= (*((unsigned int *)v9 + 6) | ((unsigned __int64)*((unsigned __int8 *)v9 + 32) << 32))
      && v10 <= (*((unsigned int *)v9 + 7) | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32)) )
    {
      return v9;
    }
    if ( v12 )
      MiUnlockAndDereferenceVadShared((PVOID)v9);
    else
      MiUnlockAndDereferenceVad((char *)v9);
    *a3 = -1073741664;
  }
  return 0LL;
}
