/*
 * XREFs of MiInitSystem @ 0x140B47C18
 * Callers:
 *     MmInitSystem @ 0x140B47AB4 (MmInitSystem.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     MiLockPagableImageSection @ 0x14025A6C0 (MiLockPagableImageSection.c)
 *     MiReservePtes @ 0x14027D070 (MiReservePtes.c)
 *     MiSetPageTablePfnBuddy @ 0x1402923FC (MiSetPageTablePfnBuddy.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     PsSetPagePriorityThread @ 0x1402C1718 (PsSetPagePriorityThread.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 *     ExGenRandom @ 0x1403173F0 (ExGenRandom.c)
 *     KeFlushCurrentTbOnly @ 0x14038A330 (KeFlushCurrentTbOnly.c)
 *     ExInitializePagedHeaps @ 0x140397374 (ExInitializePagedHeaps.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403AE98C (MiInitializeWorkingSetManagerParameters.c)
 *     MiInitializeBootKernelShadowStacks @ 0x1403B595C (MiInitializeBootKernelShadowStacks.c)
 *     MiSetSlabAllocatorPolicy @ 0x1403B5B98 (MiSetSlabAllocatorPolicy.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     VslInitializeSecurePool @ 0x14054B6B0 (VslInitializeSecurePool.c)
 *     KdSetDbgPrintBufferSize @ 0x140567BE4 (KdSetDbgPrintBufferSize.c)
 *     MmLockPagableDataSection @ 0x1406AD5B0 (MmLockPagableDataSection.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407AA178 (MiInitializeSystemWorkingSetList.c)
 *     PsCreateSystemThread @ 0x1407B86B0 (PsCreateSystemThread.c)
 *     MmConfigurePrefetchSeekThreshold @ 0x1407EB578 (MmConfigurePrefetchSeekThreshold.c)
 *     MiInitializeMemoryEvents @ 0x14081E318 (MiInitializeMemoryEvents.c)
 *     MiWriteProtectSystemImages @ 0x14081F1B8 (MiWriteProtectSystemImages.c)
 *     MiGenerateSecureCookie @ 0x1408636D0 (MiGenerateSecureCookie.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1408658B4 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MiInitializeBootProcess @ 0x140B47394 (MiInitializeBootProcess.c)
 *     MiInitializeHotPatches @ 0x140B481F8 (MiInitializeHotPatches.c)
 *     MiAddLoaderHalIoMappings @ 0x140B48290 (MiAddLoaderHalIoMappings.c)
 *     MiAllocateDummyPage @ 0x140B48578 (MiAllocateDummyPage.c)
 *     MiInitializeRetpoline @ 0x140B48688 (MiInitializeRetpoline.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140B486E4 (MiCreateSlabAllocationsFromKernelHal.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B48744 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiInitializeSystemSpaceMap @ 0x140B48AA0 (MiInitializeSystemSpaceMap.c)
 *     MiCreateEnclaveRegions @ 0x140B48B44 (MiCreateEnclaveRegions.c)
 *     MiInitializeApiSets @ 0x140B48C20 (MiInitializeApiSets.c)
 *     MiInitializeCfg @ 0x140B48CF8 (MiInitializeCfg.c)
 *     MiInitializeMirroring @ 0x140B49630 (MiInitializeMirroring.c)
 *     MiInitializeDriverImages @ 0x140B497A0 (MiInitializeDriverImages.c)
 *     MiInitializeTbFlushing @ 0x140B5F078 (MiInitializeTbFlushing.c)
 *     MiUnlockBootPageSections @ 0x140B6276C (MiUnlockBootPageSections.c)
 *     MiEnablePagingTheExecutive @ 0x140B627F8 (MiEnablePagingTheExecutive.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B62B24 (MiComputeMemoryNodeProcessorAssignments.c)
 *     PsInitializeQuotaSystem @ 0x140B68CC8 (PsInitializeQuotaSystem.c)
 *     MiInitializeCacheFlushing @ 0x140B6B46C (MiInitializeCacheFlushing.c)
 *     MiInitializeSharedUserData @ 0x140B6CD50 (MiInitializeSharedUserData.c)
 *     MiSectionInitialization @ 0x140B71584 (MiSectionInitialization.c)
 *     MiInitializeRelocations @ 0x140B71D14 (MiInitializeRelocations.c)
 *     MiInitializeSessionIds @ 0x140B741D4 (MiInitializeSessionIds.c)
 *     MiInitializeModifiedWriterParameters @ 0x140B76764 (MiInitializeModifiedWriterParameters.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B7693C (MiFlushStrongCodeDriverLoadFailures.c)
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
      if ( (MiFlags & 0x4000) != 0 && (int)VslInitializeSecurePool(qword_140C6A698) < 0 )
      {
        byte_140C68042 = 100;
      }
      else if ( (unsigned int)MiSectionInitialization() )
      {
        if ( (int)MiInitializeCfg() < 0 )
        {
          byte_140C68042 = 107;
        }
        else if ( (unsigned int)MiCreateEnclaveRegions(a2) )
        {
          qword_140C67348 = 0LL;
          MiInitializeSessionIds();
          v4 = MiReservePtes((__int64)&qword_140C69A40, 4u);
          if ( v4 )
          {
            qword_140C697E8 = v4;
            MiInitializeCacheFlushing();
            if ( MiInitializeMemoryEvents(MiSystemPartition) )
            {
              if ( (int)MiAcquireNonPagedResources((unsigned __int64)MiSystemPartition, 0x20uLL, 0LL, 6u) < 0 )
              {
                byte_140C68042 = 0x80;
              }
              else
              {
                dword_140C6B504 |= 4u;
                MiInitializeModifiedWriterParameters();
                MiComputeMemoryNodeProcessorAssignments();
                LOWORD(stru_140C673E8.Header.Lock) = 0;
                qword_140C69908 = (__int64)&qword_140C69900;
                qword_140C69900 = &qword_140C69900;
                stru_140C673E8.Header.Size = 6;
                stru_140C673E8.Header.WaitListHead.Blink = &stru_140C673E8.Header.WaitListHead;
                stru_140C673E8.Header.WaitListHead.Flink = &stru_140C673E8.Header.WaitListHead;
                MxDeferredBootAddMemoryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiHotAddBootDeferredDescriptors;
                stru_140C673E8.Header.SignalState = 0;
                MxDeferredBootAddMemoryWorkItem.Parameter = 0LL;
                MxDeferredBootAddMemoryWorkItem.List.Flink = 0LL;
                ExQueueWorkItem(&MxDeferredBootAddMemoryWorkItem, NormalWorkQueue);
                v5 = 0;
                v6 = (PKSTART_ROUTINE *)v14;
                do
                {
                  if ( PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *v6, MiSystemPartition) < 0 )
                  {
                    byte_140C68042 = -120;
                    return 0;
                  }
                  ObCloseHandle(ThreadHandle, 0);
                  ++v5;
                  ++v6;
                }
                while ( v5 < 4 );
                if ( (unsigned int)MiInitializeMirroring() )
                {
                  qword_140C65AE0 = 0LL;
                  MiWriteProtectSystemImages();
                  _InterlockedDecrement(&dword_140C698C8);
                  if ( (int)MiInitializeApiSets(a2) < 0 )
                  {
                    byte_140C68042 = -112;
                  }
                  else
                  {
                    if ( (unsigned int)MiInitializeHotPatches(a2, 1LL) )
                      return 1;
                    byte_140C68042 = -108;
                  }
                }
                else
                {
                  byte_140C68042 = -117;
                }
              }
            }
            else
            {
              byte_140C68042 = 123;
            }
          }
          else
          {
            byte_140C68042 = 116;
          }
        }
        else
        {
          byte_140C68042 = 32;
        }
      }
      else
      {
        byte_140C68042 = 104;
      }
      return 0;
    }
    if ( a1 == 2 )
    {
      qword_140C69908 = (__int64)&qword_140C69900;
      qword_140C69900 = &qword_140C69900;
      MiUnlockBootPageSections();
      MiFlushStrongCodeDriverLoadFailures();
      MiFlushDeferredRetpolineImageLoadEvents();
      return 1;
    }
  }
  else
  {
    MmTrackLockedPages &= 1u;
    qword_140C67FB0 = MiReservePtes((__int64)&qword_140C69A40, 0x20u);
    _InterlockedIncrement(&dword_140C698C8);
    if ( (unsigned int)MiInitializeWorkingSetManagerParameters((__int64)MiSystemPartition) )
    {
      if ( (int)ExInitializePagedHeaps() < 0 )
      {
        byte_140C68042 = 52;
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
            qword_140C65B40 = MiGenerateSecureCookie();
            Seed = 305419896;
            if ( (unsigned int)MiInitializeSharedUserData() )
            {
              if ( (int)MiInitializeBootProcess() < 0 )
              {
                byte_140C68042 = 68;
              }
              else
              {
                KeFlushCurrentTbOnly(3u);
                MiAddLoaderHalIoMappings(MiLowHalVa, -1LL);
                MiAddLoaderHalIoMappings(qword_140C6A6B8, qword_140C6A6B8 + 0x7FFFFFFFFFLL);
                if ( KdPrintBufferAllocateSize )
                  KdSetDbgPrintBufferSize(KdPrintBufferAllocateSize);
                MiSetSlabAllocatorPolicy((__int64)MiSystemPartition);
                if ( (unsigned int)MiInitializeHotPatches(a2, 0LL) )
                {
                  if ( (int)MiInitializeRetpoline() < 0 )
                  {
                    byte_140C68042 = 75;
                  }
                  else
                  {
                    v9 = ExGenRandom(1);
                    qword_140C66DF0 = v9;
                    dword_140C66DF8 = 8 * (v9 & 3) + 8;
                    qword_140D81828 = KeQueryPerformanceCounter(0LL).QuadPart;
                    if ( (unsigned int)dword_140D1D228 > 2 )
                      dword_140D1D228 = 0;
                    if ( (MiFlags & 4) != 0 && (int)MiCreateSlabAllocationsFromKernelHal() < 0 )
                    {
                      byte_140C68042 = 80;
                    }
                    else if ( (int)MiCreateSlabAllocationsFromLoaderBlock(a2) < 0 )
                    {
                      byte_140C68042 = 84;
                    }
                    else
                    {
                      MiInitializeSystemSpaceMap();
                      qword_140C65830 = 0LL;
                      qword_140C67368 = 0LL;
                      qword_140C67378 = 0LL;
                      qword_140D81830 = KeQueryPerformanceCounter(0LL).QuadPart;
                      MiInitializeBootKernelShadowStacks(a2);
                      if ( (unsigned int)MiInitializeDriverImages(a2) )
                      {
                        qword_140D81838 = KeQueryPerformanceCounter(0LL).QuadPart;
                        v10 = -1;
                        v11 = MmWriteableSharedUserData;
                        if ( qword_140C6F790 <= 0xFFFFFFFF )
                          v10 = qword_140C6F790;
                        *(_DWORD *)(MmWriteableSharedUserData + 744) = v10;
                        *(_DWORD *)(v11 + 580) = 0;
                        LODWORD(MiFlags) = MiFlags | 0x800000;
                        qword_140C6B938[0] = 0LL;
                        MmConfigurePrefetchSeekThreshold(32);
                        PsSetPagePriorityThread((__int64)KeGetCurrentThread(), 5);
                        MiEnablePagingTheExecutive();
                        ExPageLockHandle = MmLockPagableDataSection(MmShutdownSystem);
                        MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
                        qword_140C69800 = MiAllocateDummyPage();
                        qword_140C69808 = 0xAAAAAAAAAAAAAAABuLL * ((qword_140C69800 + 0x220000000000LL) >> 4);
                        v12 = MiReservePtes((__int64)&qword_140C69A40, 1u);
                        MmBadPointer = (PVOID)v12;
                        if ( v12 )
                        {
                          MmBadPointer = (PVOID)((__int64)(v12 << 25) >> 16);
                          if ( (unsigned int)MiInitializeRelocations() )
                          {
                            qword_140D81848 = KeQueryPerformanceCounter(0LL).QuadPart;
                            MiInitializeTbFlushing();
                            qword_140D81850 = KeQueryPerformanceCounter(0LL).QuadPart;
                            qword_140C69A08 = (__int64)&qword_140C69A00;
                            qword_140C69A00 = (__int64)&qword_140C69A00;
                            return 1;
                          }
                          byte_140C68042 = 96;
                        }
                        else
                        {
                          byte_140C68042 = 91;
                        }
                      }
                      else
                      {
                        byte_140C68042 = 88;
                      }
                    }
                  }
                }
                else
                {
                  byte_140C68042 = 72;
                }
              }
            }
            else
            {
              byte_140C68042 = 64;
            }
          }
          else
          {
            byte_140C68042 = 59;
          }
        }
        else
        {
          byte_140C68042 = 56;
        }
      }
    }
    else
    {
      byte_140C68042 = 48;
    }
  }
  return 0;
}
