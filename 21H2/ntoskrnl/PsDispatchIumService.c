/*
 * XREFs of PsDispatchIumService @ 0x140582F24
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeWaitForAlertByThreadId @ 0x1402788A0 (KeWaitForAlertByThreadId.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KeAlertThreadByThreadId @ 0x14027E000 (KeAlertThreadByThreadId.c)
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     MmUnmapLockedPages @ 0x140327780 (MmUnmapLockedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     MmLockLoadedModuleListExclusive @ 0x1403720B8 (MmLockLoadedModuleListExclusive.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwTerminateProcess @ 0x1403FAB00 (ZwTerminateProcess.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     DbgkPostModuleMessage @ 0x1404EE1AC (DbgkPostModuleMessage.c)
 *     HvlpDepositPages @ 0x1404F2B84 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x1404FBE58 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x1404FC490 (VslFreePoolTransferObject.c)
 *     VslHandleKsrCall @ 0x1404FC790 (VslHandleKsrCall.c)
 *     MmMapHotPatchTablePage @ 0x14053F6F0 (MmMapHotPatchTablePage.c)
 *     MmFreeSecurePoolMemory @ 0x140545148 (MmFreeSecurePoolMemory.c)
 *     PspIumAllocatePartitionState @ 0x140583924 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x140583A84 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x140583BAC (PspIumAllocateSecurePool.c)
 *     PspIumFreePartitionState @ 0x140583F20 (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x140583FFC (PspIumFreePhysicalPages.c)
 *     PspIumReplenishPartitionPages @ 0x1405841A8 (PspIumReplenishPartitionPages.c)
 *     PspMapView @ 0x14058440C (PspMapView.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x140584604 (PsAdjustBasicEnclaveThreadList.c)
 *     MmUnmapViewOfSection @ 0x14060CD00 (MmUnmapViewOfSection.c)
 *     MmMapViewOfSection @ 0x1406A1F20 (MmMapViewOfSection.c)
 *     PspTerminateThreadByPointer @ 0x1406B14D0 (PspTerminateThreadByPointer.c)
 *     DbgkMapViewOfSection @ 0x1406C0FF4 (DbgkMapViewOfSection.c)
 *     MmAllocateVirtualMemory @ 0x1406E8C40 (MmAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406E97C0 (MmProtectVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x1407049E0 (MmFreeVirtualMemory.c)
 *     DbgkForwardException @ 0x1407323B0 (DbgkForwardException.c)
 *     EtwUnregister @ 0x140760390 (EtwUnregister.c)
 *     EtwRegister @ 0x140762E70 (EtwRegister.c)
 *     EtwSetInformation @ 0x14077F2B0 (EtwSetInformation.c)
 *     DbgkpSendErrorMessage @ 0x1408874D0 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x140887CD8 (DbgkpResumeProcess.c)
 *     DbgkpSuspendProcess @ 0x140887E40 (DbgkpSuspendProcess.c)
 *     MmChangeKernelCfgBitmap @ 0x1408D7AB8 (MmChangeKernelCfgBitmap.c)
 *     MmGetSectionStrongImageReference @ 0x1408D8088 (MmGetSectionStrongImageReference.c)
 *     PspIumGetPhysicalPage @ 0x14090CC9C (PspIumGetPhysicalPage.c)
 *     PspIumGetSystemData @ 0x14090CDD8 (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x14090CE14 (PspIumVerifyParentSd.c)
 *     PsTerminateVsmEnclave @ 0x14090E384 (PsTerminateVsmEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     MmUpdateSlabRangeProtection @ 0x140A939A8 (MmUpdateSlabRangeProtection.c)
 */

void __fastcall PsDispatchIumService(__int64 a1, __int64 a2, __int64 a3)
{
  ETWENABLECALLBACK *RelatedActivityId; // rsi
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  int PartitionState; // eax
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *v17; // r14
  _KPROCESS *v18; // rcx
  int v19; // ecx
  __int128 *v20; // r9
  unsigned __int64 v21; // rax
  int VirtualMemory; // eax
  int v23; // ebx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  _KPROCESS *Process; // rbx
  _KPROCESS *v29; // rcx
  int v30; // esi
  _KPROCESS *v31; // rcx
  void *v32; // r8
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  const GUID *ActivityId; // rcx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  struct _MDL *v41; // rbx
  void *v42; // rcx
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v44; // rbx
  CSHORT MdlFlags; // ax
  int SecurePool; // eax
  __int64 v47; // r8
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned __int64 v54; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v58; // eax
  bool v59; // zf
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  ULONG UserDataCount[2]; // [rsp+30h] [rbp-228h]
  unsigned __int8 v68[8]; // [rsp+60h] [rbp-1F8h] BYREF
  ULONGLONG RegHandle[2]; // [rsp+68h] [rbp-1F0h] BYREF
  __int128 v70; // [rsp+78h] [rbp-1E0h] BYREF
  __int128 v71; // [rsp+88h] [rbp-1D0h] BYREF
  __int64 v72; // [rsp+98h] [rbp-1C0h]
  _OWORD v73[3]; // [rsp+A0h] [rbp-1B8h] BYREF
  _BYTE v74[272]; // [rsp+D0h] [rbp-188h] BYREF
  _OWORD v75[5]; // [rsp+1E0h] [rbp-78h] BYREF
  __int64 v76; // [rsp+230h] [rbp-28h]
  int v77; // [rsp+238h] [rbp-20h]
  __int16 v78; // [rsp+23Ch] [rbp-1Ch]
  char v79; // [rsp+23Eh] [rbp-1Ah]

  RegHandle[1] = a1;
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
  v5 = *(unsigned __int16 *)(a1 + 2);
  if ( v5 > 0x17 )
  {
    if ( v5 > 0x23 )
    {
      if ( v5 <= 0x29 )
      {
        if ( v5 == 41 )
        {
          MmUpdateSlabRangeProtection(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 24));
          return;
        }
        v60 = v5 - 36;
        if ( !v60 )
        {
          HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 8));
          return;
        }
        v61 = v60 - 1;
        if ( !v61 )
        {
          KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
          return;
        }
        v62 = v61 - 1;
        if ( v62 )
        {
          v63 = v62 - 1;
          if ( v63 )
          {
            if ( v63 == 1 )
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
      v64 = v5 - 42;
      if ( !v64 )
      {
        ExQueueWorkItem(&PspIumWorkItem, DelayedWorkQueue);
        return;
      }
      v65 = v64 - 1;
      if ( !v65 )
      {
        PartitionState = PsAdjustBasicEnclaveThreadList(
                           *(_QWORD *)(a1 + 8),
                           *(_QWORD *)(a1 + 16),
                           *(unsigned int *)(a1 + 24));
        goto LABEL_22;
      }
      v66 = v65 - 1;
      if ( v66 )
      {
        if ( v66 == 1 )
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
      if ( v5 == 35 )
      {
        PartitionState = PspMapView(a1);
        goto LABEL_22;
      }
      if ( v5 > 0x1D )
      {
        v50 = v5 - 30;
        if ( v50 )
        {
          v51 = v50 - 1;
          if ( v51 )
          {
            v52 = v51 - 1;
            if ( v52 )
            {
              v53 = v52 - 1;
              if ( !v53 )
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
              if ( v53 == 1 )
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
              v54 = *(unsigned __int8 *)(a1 + 16);
              ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v54 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
                    v59 = (v58 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v58;
                    if ( v59 )
                      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  }
                }
              }
              __writecr8(v54);
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
      if ( v5 == 29 )
      {
        v47 = *(_QWORD *)(a1 + 24);
        v48 = *(_QWORD *)(a1 + 16);
        v49 = *(_QWORD *)(a1 + 8);
        if ( v47 )
          MmMapHotPatchTablePage(v49, v48, v47);
        else
          MmChangeKernelCfgBitmap(v49, v48, *(unsigned __int8 *)(a1 + 32));
        return;
      }
      v37 = v5 - 24;
      if ( !v37 )
      {
        PartitionState = HvlpDepositPages(0, a2, *(_QWORD *)(a1 + 8) != 0LL);
        goto LABEL_22;
      }
      v38 = v37 - 1;
      if ( v38 )
      {
        v39 = v38 - 1;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( !v40 )
          {
            PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x646C6D4Du);
            v44 = PoolWithTag;
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
                MmMapLockedPagesSpecifyCache(v44, 0, MmCached, 0LL, 0, 0x40000010u);
                MdlFlags = v44->MdlFlags;
              }
              if ( (MdlFlags & 1) != 0 )
              {
                *(_QWORD *)(a1 + 8) = 0LL;
                *(_QWORD *)(a1 + 16) = v44;
                *(_QWORD *)(a1 + 24) = v44->MappedSystemVa;
                return;
              }
              ExFreePoolWithTag(v44, 0);
            }
            v11 = 3221225626LL;
LABEL_25:
            *(_QWORD *)(a1 + 8) = v11;
            return;
          }
          if ( v40 != 1 )
            goto LABEL_146;
          v41 = *(struct _MDL **)(a1 + 8);
          MmUnmapLockedPages(v41->MappedSystemVa, v41);
          v42 = v41;
        }
        else
        {
          v42 = (void *)VslFreePoolTransferObject(*(__int64 ***)(a1 + 8), 0LL);
        }
        ExFreePoolWithTag(v42, 0);
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
  if ( v5 == 23 )
  {
    VslHandleKsrCall(a1);
    return;
  }
  if ( v5 > 0xC )
  {
    if ( v5 <= 0x12 )
    {
      if ( v5 == 18 )
      {
        RegHandle[0] = 0LL;
        v32 = *(void **)(a1 + 24);
        if ( v32 )
          RelatedActivityId = VslIumEtwEnableCallback;
        *(_QWORD *)(a1 + 8) = EtwRegister((LPCGUID)(a1 + 8), RelatedActivityId, v32, RegHandle);
        *(_QWORD *)(a1 + 16) = RegHandle[0];
        return;
      }
      v24 = v5 - 13;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( !v25 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          v29 = *(_KPROCESS **)(a1 + 8);
          if ( Process != v29 )
          {
            KiStackAttachProcess(v29, 0, (__int64)v73);
            v29 = *(_KPROCESS **)(a1 + 8);
          }
          v30 = MmProtectVirtualMemory(
                  *(_QWORD *)(a1 + 16),
                  (_DWORD)v29,
                  (int)a1 + 24,
                  (int)a1 + 32,
                  *(_DWORD *)(a1 + 40),
                  a1 + 40);
          if ( Process != *(_KPROCESS **)(a1 + 8) )
            KiUnstackDetachProcess((__int64)v73, 0LL);
          *(_DWORD *)(a1 + 8) = v30;
          return;
        }
        v26 = v25 - 1;
        if ( !v26 )
        {
          LOBYTE(v11) = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
          goto LABEL_24;
        }
        v27 = v26 - 1;
        if ( !v27 )
        {
          DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
          return;
        }
        if ( v27 != 1 )
          goto LABEL_146;
        memset(v74, 0, sizeof(v74));
        PartitionState = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v74);
        goto LABEL_22;
      }
      v17 = KeGetCurrentThread()->ApcState.Process;
      v31 = *(_KPROCESS **)(a1 + 8);
      if ( v17 != v31 )
        KiStackAttachProcess(v31, 0, (__int64)v73);
      VirtualMemory = MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, 0, 0x10000000);
LABEL_42:
      v23 = VirtualMemory;
      if ( v17 != *(_KPROCESS **)(a1 + 8) )
        KiUnstackDetachProcess((__int64)v73, 0LL);
      *(_DWORD *)(a1 + 8) = v23;
      return;
    }
    v33 = v5 - 19;
    if ( !v33 )
    {
      PartitionState = EtwUnregister(*(_QWORD *)(a1 + 8));
      goto LABEL_22;
    }
    v34 = v33 - 1;
    if ( !v34 )
    {
      PartitionState = EtwSetInformation(
                         *(_QWORD *)(a1 + 8),
                         *(EVENT_INFO_CLASS *)(a1 + 16),
                         *(PVOID *)(a1 + 24),
                         *(_DWORD *)(a1 + 32));
      goto LABEL_22;
    }
    v35 = v34 - 1;
    if ( !v35 )
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
    if ( v35 == 1 )
    {
      PartitionState = PspIumVerifyParentSd(*(unsigned int *)(a1 + 8), a2, *(_QWORD *)(a1 + 24));
      goto LABEL_22;
    }
LABEL_146:
    LOBYTE(a3) = 1;
    PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
    return;
  }
  if ( v5 == 12 )
  {
    v17 = KeGetCurrentThread()->ApcState.Process;
    v18 = *(_KPROCESS **)(a1 + 8);
    if ( v17 != v18 )
      KiStackAttachProcess(v18, 0, (__int64)v73);
    v19 = 0;
    v20 = 0LL;
    v21 = *(_QWORD *)(a1 + 48);
    if ( v21 || *(_QWORD *)(a1 + 56) )
    {
      *(_QWORD *)&v70 = 1LL;
      *((_QWORD *)&v70 + 1) = &v71;
      v71 = v21;
      v72 = *(_QWORD *)(a1 + 56);
      v19 = 1;
      v20 = &v70;
    }
    UserDataCount[0] = v19;
    VirtualMemory = MmAllocateVirtualMemory(
                      -1,
                      (int)a1 + 24,
                      (int)a1 + 32,
                      *(_DWORD *)(a1 + 40),
                      4,
                      v20,
                      *(ULONGLONG *)UserDataCount,
                      0,
                      0x10000000,
                      0,
                      0LL);
    goto LABEL_42;
  }
  if ( v5 > 6 )
  {
    v12 = v5 - 7;
    if ( !v12 )
    {
      LOBYTE(v11) = KeAlertThreadByThreadId(*(_QWORD *)(a1 + 8));
      goto LABEL_24;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        KeLeaveCriticalRegion();
        return;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        memmove(*(void **)(a1 + 8), *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
        *(_QWORD *)(a1 + 8) = 0LL;
        return;
      }
      if ( v15 != 1 )
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
  if ( v5 == 6 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 16);
    LOBYTE(v11) = DbgkForwardException(*(_QWORD *)(a1 + 8), a2);
LABEL_24:
    v11 = (unsigned __int8)v11;
    goto LABEL_25;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    PartitionState = PspIumAllocatePhysicalPages(
                       *(_DWORD *)(a1 + 8),
                       *(_QWORD *)(a1 + 16),
                       *(_DWORD *)(a1 + 24),
                       (int)a1 + 16,
                       a1 + 24);
    goto LABEL_22;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    PspIumFreePhysicalPages(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 8));
    return;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      PspIumGetPhysicalPage(a1);
      return;
    }
    if ( v9 == 1 )
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
