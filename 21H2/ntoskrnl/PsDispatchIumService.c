/*
 * XREFs of PsDispatchIumService @ 0x140582CF4
 * Callers:
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140226CC0 (MmMapLockedPagesSpecifyCache.c)
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     KeWaitForAlertByThreadId @ 0x140257330 (KeWaitForAlertByThreadId.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     KeAlertThreadByThreadId @ 0x14025CA90 (KeAlertThreadByThreadId.c)
 *     EtwWriteEx @ 0x14025DD10 (EtwWriteEx.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     MmUnmapLockedPages @ 0x14031CA30 (MmUnmapLockedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     MmLockLoadedModuleListExclusive @ 0x140372568 (MmLockLoadedModuleListExclusive.c)
 *     DbgPrintEx @ 0x14037F820 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwTerminateProcess @ 0x1403FA920 (ZwTerminateProcess.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     DbgkPostModuleMessage @ 0x1404EDF6C (DbgkPostModuleMessage.c)
 *     HvlpDepositPages @ 0x1404F2C04 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x1404FBED8 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x1404FC510 (VslFreePoolTransferObject.c)
 *     VslHandleKsrCall @ 0x1404FC810 (VslHandleKsrCall.c)
 *     MmMapHotPatchTablePage @ 0x14053F4B0 (MmMapHotPatchTablePage.c)
 *     MmFreeSecurePoolMemory @ 0x140544F08 (MmFreeSecurePoolMemory.c)
 *     PspIumAllocatePartitionState @ 0x1405836F4 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x140583854 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x14058397C (PspIumAllocateSecurePool.c)
 *     PspIumFreePartitionState @ 0x140583CF0 (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x140583DCC (PspIumFreePhysicalPages.c)
 *     PspIumReplenishPartitionPages @ 0x140583F78 (PspIumReplenishPartitionPages.c)
 *     PspMapView @ 0x1405841DC (PspMapView.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405843D4 (PsAdjustBasicEnclaveThreadList.c)
 *     MmAllocateVirtualMemory @ 0x1405F94E0 (MmAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 *     MmMapViewOfSection @ 0x140612470 (MmMapViewOfSection.c)
 *     MmUnmapViewOfSection @ 0x1406AE460 (MmUnmapViewOfSection.c)
 *     PspTerminateThreadByPointer @ 0x1406DA1F0 (PspTerminateThreadByPointer.c)
 *     MmFreeVirtualMemory @ 0x1406ED600 (MmFreeVirtualMemory.c)
 *     DbgkMapViewOfSection @ 0x1407129A4 (DbgkMapViewOfSection.c)
 *     DbgkForwardException @ 0x1407321F0 (DbgkForwardException.c)
 *     EtwUnregister @ 0x1407601D0 (EtwUnregister.c)
 *     EtwRegister @ 0x140762CB0 (EtwRegister.c)
 *     EtwSetInformation @ 0x14077F0F0 (EtwSetInformation.c)
 *     DbgkpSendErrorMessage @ 0x140887370 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x140887B78 (DbgkpResumeProcess.c)
 *     DbgkpSuspendProcess @ 0x140887CE0 (DbgkpSuspendProcess.c)
 *     MmChangeKernelCfgBitmap @ 0x1408D7958 (MmChangeKernelCfgBitmap.c)
 *     MmGetSectionStrongImageReference @ 0x1408D7F28 (MmGetSectionStrongImageReference.c)
 *     PspIumGetPhysicalPage @ 0x14090CB3C (PspIumGetPhysicalPage.c)
 *     PspIumGetSystemData @ 0x14090CC78 (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x14090CCB4 (PspIumVerifyParentSd.c)
 *     PsTerminateVsmEnclave @ 0x14090E224 (PsTerminateVsmEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     MmUpdateSlabRangeProtection @ 0x140A929A8 (MmUpdateSlabRangeProtection.c)
 */

void __fastcall PsDispatchIumService(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ETWENABLECALLBACK *RelatedActivityId; // rsi
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
  const GUID *ActivityId; // rcx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  struct _MDL *v42; // rbx
  void *v43; // rcx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v45; // rbx
  CSHORT MdlFlags; // ax
  int SecurePool; // eax
  __int64 v48; // r8
  __int64 v49; // rdx
  unsigned __int64 v50; // rcx
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
  ULONG UserDataCount[2]; // [rsp+30h] [rbp-228h]
  unsigned __int8 v69[8]; // [rsp+60h] [rbp-1F8h] BYREF
  ULONGLONG RegHandle[2]; // [rsp+68h] [rbp-1F0h] BYREF
  __int128 v71; // [rsp+78h] [rbp-1E0h] BYREF
  __int128 v72; // [rsp+88h] [rbp-1D0h] BYREF
  __int64 v73; // [rsp+98h] [rbp-1C0h]
  _OWORD v74[3]; // [rsp+A0h] [rbp-1B8h] BYREF
  _BYTE v75[272]; // [rsp+D0h] [rbp-188h] BYREF
  _OWORD v76[5]; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v77; // [rsp+230h] [rbp-28h]
  int v78; // [rsp+238h] [rbp-20h]
  __int16 v79; // [rsp+23Ch] [rbp-1Ch]
  char v80; // [rsp+23Eh] [rbp-1Ah]

  RegHandle[1] = a1;
  memset(v74, 0, sizeof(v74));
  RelatedActivityId = 0LL;
  v69[0] = 0;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
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
  if ( v6 > 0x17 )
  {
    if ( v6 > 0x23 )
    {
      if ( v6 <= 0x29 )
      {
        if ( v6 == 41 )
        {
          MmUpdateSlabRangeProtection(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 24));
          return;
        }
        v61 = v6 - 36;
        if ( !v61 )
        {
          HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 8));
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
      v65 = v6 - 42;
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
      if ( v6 == 35 )
      {
        PartitionState = PspMapView(a1);
        goto LABEL_22;
      }
      if ( v6 > 0x1D )
      {
        v51 = v6 - 30;
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
              MmLockLoadedModuleListExclusive(v69);
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
      if ( v6 == 29 )
      {
        v48 = *(_QWORD *)(a1 + 24);
        v49 = *(_QWORD *)(a1 + 16);
        v50 = *(_QWORD *)(a1 + 8);
        if ( v48 )
          MmMapHotPatchTablePage(v50, v49, v48);
        else
          MmChangeKernelCfgBitmap(v50, v49, *(unsigned __int8 *)(a1 + 32));
        return;
      }
      v38 = v6 - 24;
      if ( !v38 )
      {
        PartitionState = HvlpDepositPages(0, a2, *(_QWORD *)(a1 + 8) != 0LL);
        goto LABEL_22;
      }
      v39 = v38 - 1;
      if ( v39 )
      {
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( !v41 )
          {
            PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x646C6D4Du);
            v45 = PoolWithTag;
            if ( PoolWithTag )
            {
              PoolWithTag->Next = 0LL;
              *(_DWORD *)&PoolWithTag->Size = 56;
              PoolWithTag->StartVa = 0LL;
              *(_QWORD *)&PoolWithTag->ByteCount = 4096LL;
              PoolWithTag[1].Next = *(struct _MDL **)(a1 + 8);
              PoolWithTag->MdlFlags |= 2u;
              MdlFlags = PoolWithTag->MdlFlags;
              if ( (MdlFlags & 5) == 0 )
              {
                MmMapLockedPagesSpecifyCache(v45, 0, MmCached, 0LL, 0, 0x40000010u);
                MdlFlags = v45->MdlFlags;
              }
              if ( (MdlFlags & 1) != 0 )
              {
                *(_QWORD *)(a1 + 8) = 0LL;
                *(_QWORD *)(a1 + 16) = v45;
                *(_QWORD *)(a1 + 24) = v45->MappedSystemVa;
                return;
              }
              ExFreePoolWithTag(v45, 0);
            }
            v12 = 3221225626LL;
LABEL_25:
            *(_QWORD *)(a1 + 8) = v12;
            return;
          }
          if ( v41 != 1 )
            goto LABEL_146;
          v42 = *(struct _MDL **)(a1 + 8);
          MmUnmapLockedPages(v42->MappedSystemVa, v42);
          v43 = v42;
        }
        else
        {
          v43 = (void *)VslFreePoolTransferObject(*(__int64 ***)(a1 + 8), 0LL);
        }
        ExFreePoolWithTag(v43, 0);
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
  if ( v6 == 23 )
  {
    VslHandleKsrCall(a1);
    return;
  }
  if ( v6 > 0xC )
  {
    if ( v6 <= 0x12 )
    {
      if ( v6 == 18 )
      {
        RegHandle[0] = 0LL;
        v33 = *(void **)(a1 + 24);
        if ( v33 )
          RelatedActivityId = VslIumEtwEnableCallback;
        *(_QWORD *)(a1 + 8) = EtwRegister((LPCGUID)(a1 + 8), RelatedActivityId, v33, RegHandle);
        *(_QWORD *)(a1 + 16) = RegHandle[0];
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
            KiStackAttachProcess(v30, 0LL, (__int64)v74, a4);
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
            KiUnstackDetachProcess((__int64)v74, 0);
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
        memset(v75, 0, sizeof(v75));
        PartitionState = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v75);
        goto LABEL_22;
      }
      v18 = KeGetCurrentThread()->ApcState.Process;
      v32 = *(_KPROCESS **)(a1 + 8);
      if ( v18 != v32 )
        KiStackAttachProcess(v32, 0LL, (__int64)v74, a4);
      VirtualMemory = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x10000000);
LABEL_42:
      v24 = VirtualMemory;
      if ( v18 != *(_KPROCESS **)(a1 + 8) )
        KiUnstackDetachProcess((__int64)v74, 0);
      *(_DWORD *)(a1 + 8) = v24;
      return;
    }
    v34 = v6 - 19;
    if ( !v34 )
    {
      PartitionState = EtwUnregister(*(_QWORD *)(a1 + 8));
      goto LABEL_22;
    }
    v35 = v34 - 1;
    if ( !v35 )
    {
      PartitionState = EtwSetInformation(
                         *(_QWORD *)(a1 + 8),
                         *(EVENT_INFO_CLASS *)(a1 + 16),
                         *(PVOID *)(a1 + 24),
                         *(_DWORD *)(a1 + 32));
      goto LABEL_22;
    }
    v36 = v35 - 1;
    if ( !v36 )
    {
      ActivityId = (const GUID *)(a1 + 32);
      if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
        ActivityId = 0LL;
      if ( *(_QWORD *)(a1 + 48) || *(_QWORD *)(a1 + 56) )
        RelatedActivityId = (ETWENABLECALLBACK *)(a1 + 48);
      PartitionState = EtwWriteEx(
                         *(_QWORD *)(a1 + 8),
                         (PCEVENT_DESCRIPTOR)(a1 + 16),
                         0LL,
                         0,
                         ActivityId,
                         (LPCGUID)RelatedActivityId,
                         *(_DWORD *)(a1 + 64),
                         *(PEVENT_DATA_DESCRIPTOR *)(a1 + 72));
      goto LABEL_22;
    }
    if ( v36 == 1 )
    {
      PartitionState = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
      goto LABEL_22;
    }
LABEL_146:
    LOBYTE(a3) = 1;
    PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
    return;
  }
  if ( v6 == 12 )
  {
    v18 = KeGetCurrentThread()->ApcState.Process;
    v19 = *(_KPROCESS **)(a1 + 8);
    if ( v18 != v19 )
      KiStackAttachProcess(v19, 0LL, (__int64)v74, a4);
    v20 = 0;
    v21 = 0LL;
    v22 = *(_QWORD *)(a1 + 48);
    if ( v22 || *(_QWORD *)(a1 + 56) )
    {
      *(_QWORD *)&v71 = 1LL;
      *((_QWORD *)&v71 + 1) = &v72;
      v72 = v22;
      v73 = *(_QWORD *)(a1 + 56);
      v20 = 1;
      v21 = &v71;
    }
    UserDataCount[0] = v20;
    VirtualMemory = MmAllocateVirtualMemory(
                      -1,
                      (int)a1 + 24,
                      (int)a1 + 32,
                      *(_DWORD *)(a1 + 40),
                      4,
                      v21,
                      *(ULONGLONG *)UserDataCount,
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
    LOBYTE(a2) = *(_BYTE *)(a1 + 16);
    LOBYTE(v12) = DbgkForwardException(*(_QWORD *)(a1 + 8), a2);
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
  v76[0] = *(_OWORD *)(a1 + 10);
  v76[1] = *(_OWORD *)(a1 + 26);
  v76[2] = *(_OWORD *)(a1 + 42);
  v76[3] = *(_OWORD *)(a1 + 58);
  v76[4] = *(_OWORD *)(a1 + 74);
  v77 = *(_QWORD *)(a1 + 90);
  v78 = *(_DWORD *)(a1 + 98);
  v79 = *(_WORD *)(a1 + 102);
  v80 = 0;
  DbgPrintEx(
    0,
    0,
    "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
    *(unsigned __int16 *)(a1 + 8) >> 13,
    *(_DWORD *)(a1 + 4),
    (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
    (const char *)v76);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}
