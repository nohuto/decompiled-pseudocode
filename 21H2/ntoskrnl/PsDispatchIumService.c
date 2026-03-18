/*
 * XREFs of PsDispatchIumService @ 0x1405E1764
 * Callers:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 * Callees:
 *     KeWaitForAlertByThreadId @ 0x140217B04 (KeWaitForAlertByThreadId.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MmLockLoadedModuleListExclusive @ 0x1402D8E9C (MmLockLoadedModuleListExclusive.c)
 *     KeAlertThreadByThreadId @ 0x1402F5FD0 (KeAlertThreadByThreadId.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwTerminateProcess @ 0x14041BCE0 (ZwTerminateProcess.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DbgkPostModuleMessage @ 0x1405400A4 (DbgkPostModuleMessage.c)
 *     HvlpDepositPages @ 0x140544258 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x14054DB08 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x14054E1A8 (VslFreePoolTransferObject.c)
 *     VslHandleKsrCall @ 0x14054E490 (VslHandleKsrCall.c)
 *     MmFreeSecurePoolMemory @ 0x14059A9B4 (MmFreeSecurePoolMemory.c)
 *     MmMapHotPatchTablePage @ 0x1405A3E3C (MmMapHotPatchTablePage.c)
 *     PspIumAllocatePartitionState @ 0x1405E2170 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x1405E22E8 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405E2410 (PspIumAllocateSecurePool.c)
 *     PspIumFreePartitionState @ 0x1405E2740 (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x1405E281C (PspIumFreePhysicalPages.c)
 *     PspIumReplenishPartitionPages @ 0x1405E29C8 (PspIumReplenishPartitionPages.c)
 *     PspMapView @ 0x1405E2C2C (PspMapView.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405E2E00 (PsAdjustBasicEnclaveThreadList.c)
 *     EtwUnregister @ 0x1406B7470 (EtwUnregister.c)
 *     MmUnmapViewOfSection @ 0x1406CD150 (MmUnmapViewOfSection.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     EtwSetInformation @ 0x1406DEBF0 (EtwSetInformation.c)
 *     DbgkForwardException @ 0x1406EA7D0 (DbgkForwardException.c)
 *     DbgkMapViewOfSection @ 0x140757090 (DbgkMapViewOfSection.c)
 *     MmMapViewOfSection @ 0x140785150 (MmMapViewOfSection.c)
 *     PspTerminateThreadByPointer @ 0x14079F130 (PspTerminateThreadByPointer.c)
 *     MmFreeVirtualMemory @ 0x1407B99C0 (MmFreeVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1407B9FA0 (MmProtectVirtualMemory.c)
 *     MmAllocateVirtualMemory @ 0x1407E66D0 (MmAllocateVirtualMemory.c)
 *     PspIumGetPhysicalPage @ 0x1408824D0 (PspIumGetPhysicalPage.c)
 *     DbgkpSendErrorMessage @ 0x14092A29C (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x14092AAA4 (DbgkpResumeProcess.c)
 *     DbgkpSuspendProcess @ 0x14092AC20 (DbgkpSuspendProcess.c)
 *     MmGetSectionStrongImageReference @ 0x14097F148 (MmGetSectionStrongImageReference.c)
 *     MmMapProtectedKernelPage @ 0x14097F95C (MmMapProtectedKernelPage.c)
 *     MmUnmapProtectedKernelPageRange @ 0x14097FA08 (MmUnmapProtectedKernelPageRange.c)
 *     PspIumGetSystemData @ 0x1409B31F4 (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x1409B3230 (PspIumVerifyParentSd.c)
 *     PsTerminateVsmEnclave @ 0x1409B45F0 (PsTerminateVsmEnclave.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     MmUpdateSlabRangeType @ 0x140B52548 (MmUpdateSlabRangeType.c)
 */

void __fastcall PsDispatchIumService(ULONGLONG a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  GUID *RelatedActivityId; // rsi
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int PartitionState; // eax
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *v18; // r14
  _KPROCESS *v19; // rcx
  int v20; // ecx
  __int128 *v21; // r9
  unsigned __int64 v22; // rax
  int VirtualMemory; // eax
  int v24; // ebx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  _KPROCESS *Process; // rbx
  _KPROCESS *v30; // rcx
  int v31; // esi
  _KPROCESS *v32; // rcx
  void *v33; // r8
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  const GUID *ActivityId; // rcx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  __int64 v43; // r8
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  struct _MDL *v46; // rbx
  void *v47; // rcx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v49; // rbx
  int SecurePool; // eax
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned __int64 v55; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v59; // eax
  bool v60; // zf
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned __int8 v68[8]; // [rsp+60h] [rbp-1F8h] BYREF
  ULONGLONG RegHandle; // [rsp+68h] [rbp-1F0h] BYREF
  __int128 v70; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v71; // [rsp+80h] [rbp-1D8h] BYREF
  __int64 v72; // [rsp+90h] [rbp-1C8h]
  _OWORD v73[3]; // [rsp+98h] [rbp-1C0h] BYREF
  _BYTE v74[272]; // [rsp+D0h] [rbp-188h] BYREF
  _OWORD v75[5]; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v76; // [rsp+230h] [rbp-28h]
  int v77; // [rsp+238h] [rbp-20h]
  __int16 v78; // [rsp+23Ch] [rbp-1Ch]
  char v79; // [rsp+23Eh] [rbp-1Ah]

  RegHandle = a1;
  memset(v73, 0, sizeof(v73));
  RelatedActivityId = 0LL;
  v68[0] = 0;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  if ( *(_BYTE *)(a1 + 1) == 5 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, *(_DWORD *)(a1 + 16));
    }
    else
    {
      LOBYTE(a3) = 1;
      PspTerminateThreadByPointer(KeGetCurrentThread(), 0LL, a3);
    }
  }
  v6 = *(unsigned __int16 *)(a1 + 2);
  if ( v6 > 0x18 )
  {
    if ( v6 > 0x24 )
    {
      if ( v6 <= 0x2A )
      {
        if ( v6 == 42 )
        {
          MmUpdateSlabRangeType(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
          return;
        }
        v61 = v6 - 37;
        if ( !v61 )
        {
          ObfDereferenceObject(*(PVOID *)(a1 + 8));
          return;
        }
        v62 = v61 - 1;
        if ( !v62 )
        {
          KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
          return;
        }
        v63 = v62 - 1;
        if ( v63 )
        {
          v64 = v63 - 1;
          if ( v64 )
          {
            if ( v64 == 1 )
            {
              PsTerminateVsmEnclave(*(_QWORD *)(a1 + 8), 0x80000000LL);
              return;
            }
            goto LABEL_146;
          }
          *(_QWORD *)(a1 + 24) = 0LL;
          if ( (unsigned __int8)PspIumReplenishPartitionPages(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16)) )
            *(_QWORD *)(a1 + 24) = 1LL;
          return;
        }
        if ( !*(_QWORD *)(a1 + 8) )
        {
          PspIumFreePartitionState(*(PVOID *)(a1 + 16));
          return;
        }
        PartitionState = PspIumAllocatePartitionState(a1);
        goto LABEL_22;
      }
      v65 = v6 - 43;
      if ( !v65 )
      {
        ExQueueWorkItem(&PspIumWorkItem, DelayedWorkQueue);
        return;
      }
      v66 = v65 - 1;
      if ( !v66 )
      {
        PartitionState = PsAdjustBasicEnclaveThreadList(
                           *(_QWORD *)(a1 + 8),
                           *(_QWORD *)(a1 + 16),
                           *(unsigned int *)(a1 + 24));
        goto LABEL_22;
      }
      v67 = v66 - 1;
      if ( v67 )
      {
        if ( v67 == 1 )
        {
          MmFreeSecurePoolMemory(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
          return;
        }
        goto LABEL_146;
      }
      SecurePool = PspIumAllocateSecurePool(a1);
    }
    else
    {
      if ( v6 == 36 )
      {
        PartitionState = PspMapView(a1);
        goto LABEL_22;
      }
      if ( v6 > 0x1E )
      {
        v51 = v6 - 31;
        if ( v51 )
        {
          v52 = v51 - 1;
          if ( v52 )
          {
            v53 = v52 - 1;
            if ( v53 )
            {
              v54 = v53 - 1;
              if ( !v54 )
              {
                DbgkPostModuleMessage(
                  *(PVOID *)(a1 + 8),
                  *(PVOID *)(a1 + 16),
                  *(void **)(a1 + 24),
                  *(_DWORD *)(a1 + 32),
                  *(_DWORD *)(a1 + 40),
                  *(PRKEVENT *)(a1 + 48));
                return;
              }
              if ( v54 == 1 )
              {
                DbgkMapViewOfSection(*(PVOID *)(a1 + 8));
                return;
              }
              goto LABEL_146;
            }
            if ( *(_QWORD *)(a1 + 8) )
            {
              MmLockLoadedModuleListExclusive(v68);
            }
            else
            {
              v55 = *(unsigned __int8 *)(a1 + 16);
              ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v55 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
                    v60 = (v59 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v59;
                    if ( v60 )
                      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  }
                }
              }
              __writecr8(v55);
            }
            return;
          }
          PartitionState = MmUnmapViewOfSection(PsSecureSystemProcess, *(_QWORD *)(a1 + 8));
        }
        else
        {
          PartitionState = MmMapViewOfSection(
                             *(_QWORD *)(a1 + 8),
                             PsSecureSystemProcess,
                             a1 + 16,
                             0LL,
                             0LL,
                             a1 + 24,
                             a1 + 32,
                             2,
                             0x40000,
                             2);
        }
        goto LABEL_22;
      }
      if ( v6 == 30 )
      {
        MmUnmapProtectedKernelPageRange(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
        return;
      }
      v39 = v6 - 25;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( !v41 )
          {
            PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x646C6D4Du);
            v49 = PoolWithTag;
            if ( PoolWithTag )
            {
              PoolWithTag->Next = 0LL;
              *(_DWORD *)&PoolWithTag->Size = 56;
              PoolWithTag->StartVa = 0LL;
              *(_QWORD *)&PoolWithTag->ByteCount = 4096LL;
              PoolWithTag[1].Next = *(struct _MDL **)(a1 + 8);
              PoolWithTag->MdlFlags = 2;
              MmMapLockedPagesSpecifyCache(PoolWithTag, 0, MmCached, 0LL, 0, 0x40000010u);
              if ( (v49->MdlFlags & 1) != 0 )
              {
                *(_QWORD *)(a1 + 8) = 0LL;
                *(_QWORD *)(a1 + 16) = v49;
                *(_QWORD *)(a1 + 24) = v49->MappedSystemVa;
                return;
              }
              ExFreePoolWithTag(v49, 0);
            }
            v12 = 3221225626LL;
LABEL_25:
            *(_QWORD *)(a1 + 8) = v12;
            return;
          }
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 == 1 )
            {
              v43 = *(_QWORD *)(a1 + 24);
              v44 = *(_QWORD *)(a1 + 16);
              v45 = *(_QWORD *)(a1 + 8);
              if ( v43 )
                MmMapHotPatchTablePage(v45, v44, v43, *(_DWORD *)(a1 + 32));
              else
                MmMapProtectedKernelPage(v45, v44);
              return;
            }
LABEL_146:
            LOBYTE(a3) = 1;
            PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
            return;
          }
          v46 = *(struct _MDL **)(a1 + 8);
          MmUnmapLockedPages(v46->MappedSystemVa, v46);
          v47 = v46;
        }
        else
        {
          v47 = (void *)VslFreePoolTransferObject(*(__int64 ***)(a1 + 8), 0LL);
        }
        ExFreePoolWithTag(v47, 0);
        return;
      }
      SecurePool = VslAllocatePool(
                     *(_QWORD *)(a1 + 8),
                     *(_DWORD *)(a1 + 16),
                     (_QWORD *)(a1 + 16),
                     (_QWORD *)(a1 + 24),
                     (_QWORD *)(a1 + 32));
    }
    *(_DWORD *)(a1 + 8) = SecurePool;
    return;
  }
  if ( v6 == 24 )
  {
    PartitionState = HvlpDepositPages(0, a2, *(_QWORD *)(a1 + 8) != 0LL);
    goto LABEL_22;
  }
  if ( v6 > 0xC )
  {
    if ( v6 > 0x12 )
    {
      v34 = v6 - 19;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              if ( v37 == 1 )
              {
                VslHandleKsrCall(a1);
                return;
              }
              goto LABEL_146;
            }
            PartitionState = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
          }
          else
          {
            ActivityId = (const GUID *)(a1 + 32);
            if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
              ActivityId = 0LL;
            if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
              RelatedActivityId = (GUID *)(a1 + 48);
            PartitionState = EtwWriteEx(
                               *(_QWORD *)(a1 + 8),
                               (PCEVENT_DESCRIPTOR)(a1 + 16),
                               0LL,
                               0,
                               ActivityId,
                               RelatedActivityId,
                               *(_DWORD *)(a1 + 64),
                               *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
          }
        }
        else
        {
          PartitionState = EtwSetInformation(
                             *(_QWORD *)(a1 + 8),
                             *(EVENT_INFO_CLASS *)(a1 + 16),
                             *(PVOID *)(a1 + 24),
                             *(_DWORD *)(a1 + 32));
        }
      }
      else
      {
        PartitionState = EtwUnregister(*(_QWORD *)(a1 + 8));
      }
      goto LABEL_22;
    }
    if ( v6 == 18 )
    {
      RegHandle = 0LL;
      v33 = *(void **)(a1 + 24);
      if ( v33 )
        RelatedActivityId = (GUID *)VslIumEtwEnableCallback;
      *(_QWORD *)(a1 + 8) = EtwRegister((LPCGUID)(a1 + 8), (PETWENABLECALLBACK)RelatedActivityId, v33, &RegHandle);
      *(_QWORD *)(a1 + 16) = RegHandle;
      return;
    }
    v25 = v6 - 13;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( !v26 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        v30 = *(_KPROCESS **)(a1 + 8);
        if ( Process != v30 )
        {
          KiStackAttachProcess(v30, 0LL, (__int64)v73, a4);
          v30 = *(_KPROCESS **)(a1 + 8);
        }
        v31 = MmProtectVirtualMemory(
                *(_QWORD *)(a1 + 16),
                (_DWORD)v30,
                (int)a1 + 24,
                (int)a1 + 32,
                *(_DWORD *)(a1 + 40),
                a1 + 40);
        if ( Process != *(_KPROCESS **)(a1 + 8) )
          KiUnstackDetachProcess((__int64)v73, 0LL);
        *(_DWORD *)(a1 + 8) = v31;
        return;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
        LOBYTE(v12) = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
        goto LABEL_24;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
        return;
      }
      if ( v28 != 1 )
        goto LABEL_146;
      memset(v74, 0, sizeof(v74));
      PartitionState = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v74);
      goto LABEL_22;
    }
    v18 = KeGetCurrentThread()->ApcState.Process;
    v32 = *(_KPROCESS **)(a1 + 8);
    if ( v18 != v32 )
      KiStackAttachProcess(v32, 0LL, (__int64)v73, a4);
    VirtualMemory = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x10000000);
LABEL_42:
    v24 = VirtualMemory;
    if ( v18 != *(_KPROCESS **)(a1 + 8) )
      KiUnstackDetachProcess((__int64)v73, 0LL);
    *(_DWORD *)(a1 + 8) = v24;
    return;
  }
  if ( v6 == 12 )
  {
    v18 = KeGetCurrentThread()->ApcState.Process;
    v19 = *(_KPROCESS **)(a1 + 8);
    if ( v18 != v19 )
      KiStackAttachProcess(v19, 0LL, (__int64)v73, a4);
    v20 = 0;
    v21 = 0LL;
    v22 = *(_QWORD *)(a1 + 48);
    if ( v22 || *(_QWORD *)(a1 + 56) )
    {
      *(_QWORD *)&v70 = 1LL;
      *((_QWORD *)&v70 + 1) = &v71;
      v71 = v22;
      v72 = *(_QWORD *)(a1 + 56);
      v20 = 1;
      v21 = &v70;
    }
    VirtualMemory = MmAllocateVirtualMemory(
                      -1,
                      (int)a1 + 24,
                      (int)a1 + 32,
                      *(_DWORD *)(a1 + 40),
                      4,
                      v21,
                      v20,
                      0,
                      0x10000000,
                      0,
                      0LL);
    goto LABEL_42;
  }
  if ( v6 > 6 )
  {
    v13 = v6 - 7;
    if ( !v13 )
    {
      LOBYTE(v12) = KeAlertThreadByThreadId(*(_QWORD *)(a1 + 8), a2, a3, a4);
      goto LABEL_24;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        KeLeaveCriticalRegion();
        return;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
        *(_QWORD *)(a1 + 8) = 0LL;
        return;
      }
      if ( v16 != 1 )
        goto LABEL_146;
      LOBYTE(a2) = *(_BYTE *)(a1 + 24);
      PartitionState = MmGetSectionStrongImageReference(*(_QWORD *)(a1 + 8), a2, 0LL, a1 + 16);
    }
    else
    {
      PartitionState = KeWaitForAlertByThreadId(
                         *(_BYTE *)(a1 + 8),
                         (_QWORD *)((a1 + 24) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 16) >> 64)),
                         0LL);
    }
LABEL_22:
    *(_QWORD *)(a1 + 8) = PartitionState;
    return;
  }
  if ( v6 == 6 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 24);
    LOBYTE(a2) = *(_BYTE *)(a1 + 16);
    LOBYTE(v12) = DbgkForwardException(*(_QWORD *)(a1 + 8), a2, a3);
LABEL_24:
    v12 = (unsigned __int8)v12;
    goto LABEL_25;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    PartitionState = PspIumAllocatePhysicalPages(
                       *(_DWORD *)(a1 + 8),
                       *(_QWORD *)(a1 + 16),
                       *(_DWORD *)(a1 + 24),
                       (int)a1 + 16,
                       a1 + 24);
    goto LABEL_22;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    PspIumFreePhysicalPages(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 8));
    return;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      PspIumGetPhysicalPage(a1);
      return;
    }
    if ( v10 == 1 )
    {
      PspIumGetSystemData(a1);
      return;
    }
    goto LABEL_146;
  }
  v75[0] = *(_OWORD *)(a1 + 10);
  v75[1] = *(_OWORD *)(a1 + 26);
  v75[2] = *(_OWORD *)(a1 + 42);
  v75[3] = *(_OWORD *)(a1 + 58);
  v75[4] = *(_OWORD *)(a1 + 74);
  v76 = *(_QWORD *)(a1 + 90);
  v77 = *(_DWORD *)(a1 + 98);
  v78 = *(_WORD *)(a1 + 102);
  v79 = 0;
  DbgPrintEx(
    0,
    0,
    "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
    *(unsigned __int16 *)(a1 + 8) >> 13,
    *(_DWORD *)(a1 + 4),
    (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
    (const char *)v75);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}
