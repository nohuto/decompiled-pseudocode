/*
 * XREFs of MiInitSystem @ 0x140B39508
 * Callers:
 *     MmInitSystem @ 0x140B393A4 (MmInitSystem.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x14020AA94 (PsSetPagePriorityThread.c)
 *     MiGetAnyMultiplexedVm @ 0x14020F4D4 (MiGetAnyMultiplexedVm.c)
 *     MiLockPagableImageSection @ 0x1402252E0 (MiLockPagableImageSection.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     MiSetPageTablePfnBuddy @ 0x1402A6F18 (MiSetPageTablePfnBuddy.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     MiAcquireNonPagedResources @ 0x140348D54 (MiAcquireNonPagedResources.c)
 *     ExInitializePagedHeaps @ 0x140374F94 (ExInitializePagedHeaps.c)
 *     KeFlushCurrentTbOnly @ 0x1403876F4 (KeFlushCurrentTbOnly.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403A9C3C (MiInitializeWorkingSetManagerParameters.c)
 *     MiInitializeBootKernelShadowStacks @ 0x1403B0CCC (MiInitializeBootKernelShadowStacks.c)
 *     MiSetSlabAllocatorPolicy @ 0x1403B0F08 (MiSetSlabAllocatorPolicy.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     VslInitializeSecurePool @ 0x140549210 (VslInitializeSecurePool.c)
 *     KdSetDbgPrintBufferSize @ 0x140565744 (KdSetDbgPrintBufferSize.c)
 *     MiInitializeSystemWorkingSetList @ 0x140726074 (MiInitializeSystemWorkingSetList.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x14079C808 (MmConfigurePrefetchSeekThreshold.c)
 *     PsCreateSystemThread @ 0x1407DE2E0 (PsCreateSystemThread.c)
 *     MmLockPagableDataSection @ 0x1407EBF70 (MmLockPagableDataSection.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     MiInitializeMemoryEvents @ 0x1408096D8 (MiInitializeMemoryEvents.c)
 *     MiWriteProtectSystemImages @ 0x14080A578 (MiWriteProtectSystemImages.c)
 *     MiGenerateSecureCookie @ 0x14085F580 (MiGenerateSecureCookie.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1408612A4 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiInitializeBootProcess @ 0x140B38C84 (MiInitializeBootProcess.c)
 *     MiInitializeHotPatches @ 0x140B39AE8 (MiInitializeHotPatches.c)
 *     MiAddLoaderHalIoMappings @ 0x140B39B80 (MiAddLoaderHalIoMappings.c)
 *     MiAllocateDummyPage @ 0x140B39E68 (MiAllocateDummyPage.c)
 *     MiInitializeRetpoline @ 0x140B39F78 (MiInitializeRetpoline.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140B39FD4 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B3A034 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiInitializeSystemSpaceMap @ 0x140B3A390 (MiInitializeSystemSpaceMap.c)
 *     MiCreateEnclaveRegions @ 0x140B3A434 (MiCreateEnclaveRegions.c)
 *     MiInitializeApiSets @ 0x140B3A510 (MiInitializeApiSets.c)
 *     MiInitializeCfg @ 0x140B3A5E8 (MiInitializeCfg.c)
 *     MiInitializeMirroring @ 0x140B3AF20 (MiInitializeMirroring.c)
 *     MiInitializeDriverImages @ 0x140B3B090 (MiInitializeDriverImages.c)
 *     PsInitializeQuotaSystem @ 0x140B4988C (PsInitializeQuotaSystem.c)
 *     MiInitializeTbFlushing @ 0x140B5CBA8 (MiInitializeTbFlushing.c)
 *     MiUnlockBootPageSections @ 0x140B5F47C (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140B5F508 (MiEnablePagingTheExecutive.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B5F834 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiInitializeCacheFlushing @ 0x140B675DC (MiInitializeCacheFlushing.c)
 *     MiInitializeSharedUserData @ 0x140B68D24 (MiInitializeSharedUserData.c)
 *     MiSectionInitialization @ 0x140B6D268 (MiSectionInitialization.c)
 *     MiInitializeRelocations @ 0x140B6D9F8 (MiInitializeRelocations.c)
 *     MiInitializeSessionIds @ 0x140B70248 (MiInitializeSessionIds.c)
 *     MiInitializeModifiedWriterParameters @ 0x140B721EC (MiInitializeModifiedWriterParameters.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B72430 (MiFlushStrongCodeDriverLoadFailures.c)
 */

char __fastcall MiInitSystem(int a1, __int64 a2)
{
  _KPROCESS *Process; // rbx
  ULONG_PTR v4; // rax
  unsigned int v5; // r14d
  PKSTART_ROUTINE *v6; // r15
  char *AnyMultiplexedVm; // rax
  unsigned int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  ULONG_PTR v12; // rax
  HANDLE ThreadHandle; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v14[4]; // [rsp+48h] [rbp-40h] BYREF

  v14[0] = KeBalanceSetManager;
  v14[1] = KeSwapProcessOrStack;
  v14[2] = MiRebuildLargePagesThread;
  v14[3] = MiZeroPageThread;
  ThreadHandle = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      MiSetPageTablePfnBuddy(48 * (Process->DirectoryTableBase >> 12) - 0x220000000000LL, (__int64)Process, 0);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x400u);
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x800u);
      *(_DWORD *)(MmWriteableSharedUserData + 580) = 0x200000;
      if ( (MiFlags & 0x4000) != 0 && (int)VslInitializeSecurePool(qword_140C6A218) < 0 )
      {
        byte_140C67BC2 = 100;
      }
      else if ( (unsigned int)MiSectionInitialization() )
      {
        if ( (int)MiInitializeCfg() < 0 )
        {
          byte_140C67BC2 = 107;
        }
        else if ( (unsigned int)MiCreateEnclaveRegions(a2) )
        {
          qword_140C66EC8 = 0LL;
          MiInitializeSessionIds();
          v4 = MiReservePtes((__int64)&qword_140C695C0, 4u);
          if ( v4 )
          {
            qword_140C69368 = v4;
            MiInitializeCacheFlushing();
            if ( MiInitializeMemoryEvents(MiSystemPartition) )
            {
              if ( (int)MiAcquireNonPagedResources((unsigned __int64)MiSystemPartition, 0x20uLL, 0LL, 6u) < 0 )
              {
                byte_140C67BC2 = 0x80;
              }
              else
              {
                dword_140C6B0C4 |= 4u;
                MiInitializeModifiedWriterParameters();
                MiComputeMemoryNodeProcessorAssignments();
                LOWORD(stru_140C66F68.Header.Lock) = 0;
                qword_140C69488 = (__int64)&qword_140C69480;
                qword_140C69480 = &qword_140C69480;
                stru_140C66F68.Header.Size = 6;
                stru_140C66F68.Header.WaitListHead.Blink = &stru_140C66F68.Header.WaitListHead;
                stru_140C66F68.Header.WaitListHead.Flink = &stru_140C66F68.Header.WaitListHead;
                MxDeferredBootAddMemoryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiHotAddBootDeferredDescriptors;
                stru_140C66F68.Header.SignalState = 0;
                MxDeferredBootAddMemoryWorkItem.Parameter = 0LL;
                MxDeferredBootAddMemoryWorkItem.List.Flink = 0LL;
                ExQueueWorkItem(&MxDeferredBootAddMemoryWorkItem, NormalWorkQueue);
                v5 = 0;
                v6 = (PKSTART_ROUTINE *)v14;
                do
                {
                  if ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *v6, MiSystemPartition) < 0 )
                  {
                    byte_140C67BC2 = -120;
                    return 0;
                  }
                  ObCloseHandle(ThreadHandle, 0);
                  ++v5;
                  ++v6;
                }
                while ( v5 < 4 );
                if ( (unsigned int)MiInitializeMirroring() )
                {
                  qword_140C65660 = 0LL;
                  MiWriteProtectSystemImages();
                  _InterlockedDecrement(&dword_140C69448);
                  if ( (int)MiInitializeApiSets(a2) < 0 )
                  {
                    byte_140C67BC2 = -112;
                  }
                  else
                  {
                    if ( (unsigned int)MiInitializeHotPatches(a2, 1LL) )
                      return 1;
                    byte_140C67BC2 = -108;
                  }
                }
                else
                {
                  byte_140C67BC2 = -117;
                }
              }
            }
            else
            {
              byte_140C67BC2 = 123;
            }
          }
          else
          {
            byte_140C67BC2 = 116;
          }
        }
        else
        {
          byte_140C67BC2 = 32;
        }
      }
      else
      {
        byte_140C67BC2 = 104;
      }
      return 0;
    }
    if ( a1 == 2 )
    {
      qword_140C69488 = (__int64)&qword_140C69480;
      qword_140C69480 = &qword_140C69480;
      MiUnlockBootPageSections();
      MiFlushStrongCodeDriverLoadFailures();
      MiFlushDeferredRetpolineImageLoadEvents();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    qword_140C67B30 = MiReservePtes((__int64)&qword_140C695C0, 0x20u);
    _InterlockedIncrement(&dword_140C69448);
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)MiSystemPartition) )
    {
      if ( (int)ExInitializePagedHeaps() < 0 )
      {
        byte_140C67BC2 = 52;
      }
      else
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        if ( (unsigned int)MiInitializeSystemWorkingSetList(
                             (__int64)MiSystemPartition,
                             (__int64)AnyMultiplexedVm,
                             4,
                             0LL) )
        {
          if ( (unsigned __int8)PsInitializeQuotaSystem(0LL) )
          {
            qword_140C656C0 = MiGenerateSecureCookie();
            Seed = 305419896;
            if ( (unsigned int)MiInitializeSharedUserData() )
            {
              if ( (int)MiInitializeBootProcess() < 0 )
              {
                byte_140C67BC2 = 68;
              }
              else
              {
                KeFlushCurrentTbOnly(3u);
                MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
                MiAddLoaderHalIoMappings(qword_140C6A238, qword_140C6A238 + 0x7FFFFFFFFFLL);
                if ( KdPrintBufferAllocateSize )
                  KdSetDbgPrintBufferSize(KdPrintBufferAllocateSize);
                MiSetSlabAllocatorPolicy((__int64)MiSystemPartition);
                if ( (unsigned int)MiInitializeHotPatches(a2, 0LL) )
                {
                  if ( (int)MiInitializeRetpoline() < 0 )
                  {
                    byte_140C67BC2 = 75;
                  }
                  else
                  {
                    v9 = ExGenRandom(1);
                    qword_140C66970 = v9;
                    dword_140C66978 = 8 * (v9 & 3) + 8;
                    qword_140D81828 = KeQueryPerformanceCounter(0LL).QuadPart;
                    if ( (unsigned int)dword_140D1D228 > 2 )
                      dword_140D1D228 = 0;
                    if ( (MiFlags & 4) != 0 && (int)MiCreateSlabAllocationsFromKernelHal() < 0 )
                    {
                      byte_140C67BC2 = 80;
                    }
                    else if ( (int)MiCreateSlabAllocationsFromLoaderBlock(a2) < 0 )
                    {
                      byte_140C67BC2 = 84;
                    }
                    else
                    {
                      MiInitializeSystemSpaceMap();
                      qword_140C653B0 = 0LL;
                      qword_140C66EE8 = 0LL;
                      qword_140C66EF8 = 0LL;
                      qword_140D81830 = KeQueryPerformanceCounter(0LL).QuadPart;
                      MiInitializeBootKernelShadowStacks(a2);
                      if ( (unsigned int)MiInitializeDriverImages(a2) )
                      {
                        qword_140D81838 = KeQueryPerformanceCounter(0LL).QuadPart;
                        v10 = -1;
                        v11 = MmWriteableSharedUserData;
                        if ( qword_140C6F350 <= 0xFFFFFFFF )
                          v10 = qword_140C6F350;
                        *(_DWORD *)(MmWriteableSharedUserData + 744) = v10;
                        *(_DWORD *)(v11 + 580) = 0;
                        LODWORD(MiFlags) = MiFlags | 0x800000;
                        qword_140C6B4F8[0] = 0LL;
                        MmConfigurePrefetchSeekThreshold(32);
                        PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                        MiEnablePagingTheExecutive();
                        ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                        MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
                        qword_140C69380 = MiAllocateDummyPage();
                        qword_140C69388 = 0xAAAAAAAAAAAAAAABuLL * ((qword_140C69380 + 0x220000000000LL) >> 4);
                        v12 = MiReservePtes((__int64)&qword_140C695C0, 1u);
                        MmBadPointer = (PVOID)v12;
                        if ( v12 )
                        {
                          MmBadPointer = (PVOID)((__int64)(v12 << 25) >> 16);
                          if ( (unsigned int)MiInitializeRelocations() )
                          {
                            qword_140D81848 = KeQueryPerformanceCounter(0LL).QuadPart;
                            MiInitializeTbFlushing();
                            qword_140D81850 = KeQueryPerformanceCounter(0LL).QuadPart;
                            qword_140C69588 = (__int64)&qword_140C69580;
                            qword_140C69580 = (__int64)&qword_140C69580;
                            return 1;
                          }
                          byte_140C67BC2 = 96;
                        }
                        else
                        {
                          byte_140C67BC2 = 91;
                        }
                      }
                      else
                      {
                        byte_140C67BC2 = 88;
                      }
                    }
                  }
                }
                else
                {
                  byte_140C67BC2 = 72;
                }
              }
            }
            else
            {
              byte_140C67BC2 = 64;
            }
          }
          else
          {
            byte_140C67BC2 = 59;
          }
        }
        else
        {
          byte_140C67BC2 = 56;
        }
      }
    }
    else
    {
      byte_140C67BC2 = 48;
    }
  }
  return 0;
}
