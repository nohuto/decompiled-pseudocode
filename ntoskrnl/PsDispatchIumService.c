/*
 * XREFs of PsDispatchIumService @ 0x1405A2A44
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     KeWaitForAlertByThreadId @ 0x140293354 (KeWaitForAlertByThreadId.c)
 *     MmLockLoadedModuleListExclusive @ 0x1402B29E0 (MmLockLoadedModuleListExclusive.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     KeAlertThreadByThreadId @ 0x1402D52B8 (KeAlertThreadByThreadId.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x140412890 (ZwTerminateProcess.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DbgkPostModuleMessage @ 0x1405395FC (DbgkPostModuleMessage.c)
 *     HvlpDepositPages @ 0x14053E7A4 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x140548688 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x140548C84 (VslFreePoolTransferObject.c)
 *     VslHandleKsrCall @ 0x140549084 (VslHandleKsrCall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PspIumAllocatePartitionState @ 0x1405A34F0 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x1405A36E0 (PspIumAllocatePhysicalPages.c)
 *     PspIumAllocateSecurePool @ 0x1405A3804 (PspIumAllocateSecurePool.c)
 *     PspIumFreePartitionState @ 0x1405A3B3C (PspIumFreePartitionState.c)
 *     PspIumFreePhysicalPages @ 0x1405A3C30 (PspIumFreePhysicalPages.c)
 *     PspIumReplenishPartitionPages @ 0x1405A3DE0 (PspIumReplenishPartitionPages.c)
 *     PspMapView @ 0x1405A404C (PspMapView.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405A4260 (PsAdjustBasicEnclaveThreadList.c)
 *     MmFreeSecurePoolMemory @ 0x14063F668 (MmFreeSecurePoolMemory.c)
 *     MmMapHotPatchTablePage @ 0x140640C8C (MmMapHotPatchTablePage.c)
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 *     MmUnmapViewOfSection @ 0x1406A07B0 (MmUnmapViewOfSection.c)
 *     MmFreeVirtualMemory @ 0x1406EC820 (MmFreeVirtualMemory.c)
 *     MmAllocateVirtualMemory @ 0x140728160 (MmAllocateVirtualMemory.c)
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 *     EtwSetInformation @ 0x1407882D0 (EtwSetInformation.c)
 *     MmProtectVirtualMemory @ 0x1407C77B0 (MmProtectVirtualMemory.c)
 *     DbgkMapViewOfSection @ 0x1407D2C6C (DbgkMapViewOfSection.c)
 *     PspTerminateThreadByPointer @ 0x1407DA8F0 (PspTerminateThreadByPointer.c)
 *     PspIumGetPhysicalPage @ 0x1408A11F0 (PspIumGetPhysicalPage.c)
 *     DbgkpResumeProcess @ 0x140936438 (DbgkpResumeProcess.c)
 *     DbgkpSuspendProcess @ 0x1409365B4 (DbgkpSuspendProcess.c)
 *     DbgkForwardException @ 0x1409365F4 (DbgkForwardException.c)
 *     DbgkpSendErrorMessage @ 0x14093730C (DbgkpSendErrorMessage.c)
 *     PspIumGetSystemData @ 0x1409B3428 (PspIumGetSystemData.c)
 *     PspIumVerifyParentSd @ 0x1409B3464 (PspIumVerifyParentSd.c)
 *     PsTerminateVsmEnclave @ 0x1409B48B0 (PsTerminateVsmEnclave.c)
 *     MmPrepareImagePagesForHotPatch @ 0x140A395A0 (MmPrepareImagePagesForHotPatch.c)
 *     MmGetSectionStrongImageReference @ 0x140A40B7C (MmGetSectionStrongImageReference.c)
 *     MmMapProtectedKernelPage @ 0x140A414B4 (MmMapProtectedKernelPage.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A41560 (MmUnmapProtectedKernelPageRange.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     MmUpdateSlabRangeType @ 0x140B9732C (MmUpdateSlabRangeType.c)
 */

void __fastcall PsDispatchIumService(ULONGLONG a1, __int64 a2, __int64 a3)
{
  GUID *RelatedActivityId; // rsi
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
  _KPROCESS *v17; // r15
  _KPROCESS *v18; // rcx
  int v19; // ecx
  __int128 *v20; // r9
  unsigned __int64 v21; // rax
  int VirtualMemory; // ebx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  _KPROCESS *v27; // rbx
  _KPROCESS *v28; // rcx
  int v29; // eax
  _KPROCESS *v30; // rcx
  int v31; // esi
  void *v32; // r8
  __int64 v33; // rcx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  const GUID *ActivityId; // rcx
  int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct _MDL *v47; // rbx
  void *v48; // rcx
  __int64 Pool2; // rax
  __int64 v50; // r14
  int SecurePool; // eax
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  _KPROCESS *v56; // rbx
  _KPROCESS *Process; // rsi
  int v58; // eax
  __int64 v59; // r14
  unsigned __int64 v60; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v64; // eax
  bool v65; // zf
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  unsigned int v70; // ecx
  unsigned int v71; // ecx
  unsigned int v72; // ecx
  unsigned int v73; // ecx
  ULONG UserDataCount[2]; // [rsp+30h] [rbp-238h]
  unsigned __int8 v75[8]; // [rsp+60h] [rbp-208h] BYREF
  ULONGLONG RegHandle; // [rsp+68h] [rbp-200h] BYREF
  __int128 v77; // [rsp+70h] [rbp-1F8h] BYREF
  __int128 v78; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v79; // [rsp+90h] [rbp-1D8h]
  $115DCDF994C6370D29323EAB0E0C9502 v80; // [rsp+98h] [rbp-1D0h] BYREF
  _BYTE v81[272]; // [rsp+D0h] [rbp-198h] BYREF
  _OWORD v82[5]; // [rsp+1E0h] [rbp-88h] BYREF
  __int64 v83; // [rsp+230h] [rbp-38h]
  int v84; // [rsp+238h] [rbp-30h]
  __int16 v85; // [rsp+23Ch] [rbp-2Ch]
  char v86; // [rsp+23Eh] [rbp-2Ah]

  RegHandle = a1;
  memset(&v80, 0, sizeof(v80));
  RelatedActivityId = 0LL;
  v75[0] = 0;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
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
  if ( v5 > 0x18 )
  {
    if ( v5 > 0x24 )
    {
      if ( v5 <= 0x2A )
      {
        if ( v5 == 42 )
        {
          ExQueueWorkItem(&PspIumWorkItem, DelayedWorkQueue);
          return;
        }
        v66 = v5 - 37;
        if ( !v66 )
        {
          KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
          return;
        }
        v67 = v66 - 1;
        if ( v67 )
        {
          v68 = v67 - 1;
          if ( v68 )
          {
            v69 = v68 - 1;
            if ( !v69 )
            {
              PsTerminateVsmEnclave(*(_QWORD *)(a1 + 8), 0x80000000LL);
              return;
            }
            if ( v69 == 1 )
            {
              MmUpdateSlabRangeType(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
              return;
            }
            goto LABEL_154;
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
        goto LABEL_162;
      }
      v70 = v5 - 43;
      if ( !v70 )
      {
        PartitionState = PsAdjustBasicEnclaveThreadList(
                           *(_QWORD *)(a1 + 8),
                           *(_QWORD *)(a1 + 16),
                           *(unsigned int *)(a1 + 24));
        goto LABEL_162;
      }
      v71 = v70 - 1;
      if ( !v71 )
      {
        SecurePool = PspIumAllocateSecurePool(a1);
        goto LABEL_106;
      }
      v72 = v71 - 1;
      if ( !v72 )
      {
        MmFreeSecurePoolMemory(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
        return;
      }
      v73 = v72 - 1;
      if ( v73 )
      {
        if ( v73 == 1 )
        {
          MmUnlockPages(*(PMDL *)(a1 + 8));
          IoFreeMdl(*(PMDL *)(a1 + 8));
          return;
        }
        goto LABEL_154;
      }
      v56 = *(_KPROCESS **)(a1 + 8);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != v56 )
        KiStackAttachProcess(*(_KPROCESS **)(a1 + 8), 0, (__int64)&v80);
      v58 = MmPrepareImagePagesForHotPatch(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a1 + 16);
    }
    else
    {
      if ( v5 == 36 )
      {
        ObfDereferenceObject(*(PVOID *)(a1 + 8));
        return;
      }
      if ( v5 <= 0x1E )
      {
        if ( v5 == 30 )
        {
          MmUnmapProtectedKernelPageRange(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
          return;
        }
        v40 = v5 - 25;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( v41 )
          {
            v42 = v41 - 1;
            if ( !v42 )
            {
              Pool2 = ExAllocatePool2(64LL, 56LL, 1684827469LL);
              v50 = Pool2;
              if ( Pool2 )
              {
                *(_QWORD *)Pool2 = 0LL;
                *(_DWORD *)(Pool2 + 8) = 56;
                *(_QWORD *)(Pool2 + 32) = 0LL;
                *(_QWORD *)(Pool2 + 40) = 4096LL;
                *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(a1 + 8);
                *(_WORD *)(Pool2 + 10) = 2;
                MmMapLockedPagesSpecifyCache((PMDL)Pool2, 0, MmCached, 0LL, 0, 0x40000010u);
                if ( (*(_BYTE *)(v50 + 10) & 1) != 0 )
                {
                  *(_QWORD *)(a1 + 8) = 0LL;
                  *(_QWORD *)(a1 + 16) = v50;
                  *(_QWORD *)(a1 + 24) = *(_QWORD *)(v50 + 24);
                  return;
                }
                ExFreePoolWithTag((PVOID)v50, 0);
              }
              v11 = 3221225626LL;
LABEL_24:
              *(_QWORD *)(a1 + 8) = v11;
              return;
            }
            v43 = v42 - 1;
            if ( v43 )
            {
              if ( v43 == 1 )
              {
                v44 = *(_QWORD *)(a1 + 24);
                v45 = *(_QWORD *)(a1 + 16);
                v46 = *(_QWORD *)(a1 + 8);
                if ( v44 )
                  MmMapHotPatchTablePage(v46, v45, v44, *(unsigned int *)(a1 + 32));
                else
                  MmMapProtectedKernelPage(v46, v45);
                return;
              }
              goto LABEL_154;
            }
            v47 = *(struct _MDL **)(a1 + 8);
            MmUnmapLockedPages(v47->MappedSystemVa, v47);
            v48 = v47;
          }
          else
          {
            v48 = (void *)VslFreePoolTransferObject(*(__int64 ***)(a1 + 8), 0LL);
          }
          ExFreePoolWithTag(v48, 0);
          return;
        }
        SecurePool = VslAllocatePool(
                       *(_QWORD *)(a1 + 8),
                       *(_DWORD *)(a1 + 16),
                       (_QWORD *)(a1 + 16),
                       (_QWORD *)(a1 + 24),
                       (_QWORD *)(a1 + 32));
LABEL_106:
        *(_DWORD *)(a1 + 8) = SecurePool;
        return;
      }
      v52 = v5 - 31;
      if ( !v52 )
      {
        if ( *(_QWORD *)(a1 + 8) )
        {
          MmLockLoadedModuleListExclusive(v75);
        }
        else
        {
          v60 = *(unsigned __int8 *)(a1 + 16);
          ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v60 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
              v65 = (v64 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v64;
              if ( v65 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
          __writecr8(v60);
        }
        return;
      }
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
      v54 = v53 - 1;
      if ( !v54 )
      {
        DbgkMapViewOfSection(*(PVOID *)(a1 + 8));
        return;
      }
      v55 = v54 - 1;
      if ( !v55 )
      {
        PartitionState = PspMapView(a1);
        goto LABEL_162;
      }
      if ( v55 != 1 )
      {
LABEL_154:
        LOBYTE(a3) = 1;
        PspTerminateThreadByPointer(KeGetCurrentThread(), 3221225477LL, a3);
        return;
      }
      v56 = *(_KPROCESS **)(a1 + 8);
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process != v56 )
        KiStackAttachProcess(*(_KPROCESS **)(a1 + 8), 0, (__int64)&v80);
      v58 = MmUnmapViewOfSection(v56, *(_QWORD *)(a1 + 16));
    }
    v59 = v58;
    if ( Process != v56 )
      KiUnstackDetachProcess(&v80);
    *(_QWORD *)(a1 + 8) = v59;
    return;
  }
  if ( v5 == 24 )
  {
    v39 = *(_DWORD *)(a1 + 8);
    if ( v39 == -1070268299 || v39 == -1070268286 )
      LOBYTE(RelatedActivityId) = 1;
    PartitionState = HvlpDepositPages(0, a2, (char)RelatedActivityId, (unsigned int)(v39 + 1070268287) <= 1);
    goto LABEL_162;
  }
  if ( v5 > 0xC )
  {
    if ( v5 > 0x12 )
    {
      v34 = v5 - 19;
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
              goto LABEL_154;
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
      goto LABEL_162;
    }
    if ( v5 == 18 )
    {
      RegHandle = 0LL;
      v32 = *(void **)(a1 + 24);
      if ( v32 )
        RelatedActivityId = (GUID *)VslIumEtwEnableCallback;
      v33 = EtwRegister((LPCGUID)(a1 + 8), (PETWENABLECALLBACK)RelatedActivityId, v32, &RegHandle);
      *(_QWORD *)(a1 + 16) = RegHandle;
      goto LABEL_163;
    }
    v23 = v5 - 13;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( !v26 )
          {
            DbgkpResumeProcess(*(_QWORD *)(a1 + 8));
            return;
          }
          if ( v26 != 1 )
            goto LABEL_154;
          memset(v81, 0, sizeof(v81));
          PartitionState = DbgkpSendErrorMessage(*(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16), v81);
          goto LABEL_162;
        }
        LOBYTE(v11) = DbgkpSuspendProcess(*(_QWORD *)(a1 + 8));
        goto LABEL_23;
      }
      v27 = KeGetCurrentThread()->ApcState.Process;
      v28 = *(_KPROCESS **)(a1 + 8);
      if ( v27 != v28 )
        KiStackAttachProcess(v28, 0, (__int64)&v80);
      v29 = MmProtectVirtualMemory(
              *(_QWORD *)(a1 + 16),
              *(_QWORD *)(a1 + 8),
              (int)a1 + 24,
              (int)a1 + 32,
              *(_DWORD *)(a1 + 40),
              a1 + 40);
    }
    else
    {
      v27 = KeGetCurrentThread()->ApcState.Process;
      v30 = *(_KPROCESS **)(a1 + 8);
      if ( v27 != v30 )
        KiStackAttachProcess(v30, 0, (__int64)&v80);
      v29 = MmFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0, 0x10000000);
    }
    v31 = v29;
    if ( v27 != *(_KPROCESS **)(a1 + 8) )
      KiUnstackDetachProcess(&v80);
    *(_DWORD *)(a1 + 8) = v31;
    return;
  }
  if ( v5 == 12 )
  {
    v17 = KeGetCurrentThread()->ApcState.Process;
    v18 = *(_KPROCESS **)(a1 + 8);
    if ( v17 != v18 )
      KiStackAttachProcess(v18, 0, (__int64)&v80);
    v19 = 0;
    v20 = 0LL;
    v21 = *(_QWORD *)(a1 + 48);
    if ( v21 || *(_QWORD *)(a1 + 56) )
    {
      *(_QWORD *)&v77 = 1LL;
      *((_QWORD *)&v77 + 1) = &v78;
      v78 = v21;
      v79 = *(_QWORD *)(a1 + 56);
      v19 = 1;
      v20 = &v77;
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
    if ( v17 != *(_KPROCESS **)(a1 + 8) )
      KiUnstackDetachProcess(&v80);
    *(_DWORD *)(a1 + 8) = VirtualMemory;
    return;
  }
  if ( v5 > 6 )
  {
    v12 = v5 - 7;
    if ( v12 )
    {
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
          goto LABEL_154;
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
      goto LABEL_162;
    }
    LOBYTE(v11) = KeAlertThreadByThreadId(*(_QWORD *)(a1 + 8));
    goto LABEL_23;
  }
  if ( v5 == 6 )
  {
    LOBYTE(a3) = *(_BYTE *)(a1 + 24);
    LOBYTE(a2) = *(_BYTE *)(a1 + 16);
    LOBYTE(v11) = DbgkForwardException(*(_QWORD *)(a1 + 8), a2, a3);
LABEL_23:
    v11 = (unsigned __int8)v11;
    goto LABEL_24;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    PartitionState = PspIumAllocatePhysicalPages(
                       *(unsigned int *)(a1 + 8),
                       *(_QWORD *)(a1 + 16),
                       *(unsigned int *)(a1 + 24),
                       a1 + 16,
                       a1 + 24);
LABEL_162:
    v33 = PartitionState;
LABEL_163:
    *(_QWORD *)(a1 + 8) = v33;
    return;
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
    goto LABEL_154;
  }
  v82[0] = *(_OWORD *)(a1 + 10);
  v82[1] = *(_OWORD *)(a1 + 26);
  v82[2] = *(_OWORD *)(a1 + 42);
  v82[3] = *(_OWORD *)(a1 + 58);
  v82[4] = *(_OWORD *)(a1 + 74);
  v83 = *(_QWORD *)(a1 + 90);
  v84 = *(_DWORD *)(a1 + 98);
  v85 = *(_WORD *)(a1 + 102);
  v86 = 0;
  DbgPrintEx(
    0,
    0,
    "IUM [VP:%u,TK:%#02x,LN:%04u] %s\n",
    *(unsigned __int16 *)(a1 + 8) >> 13,
    *(_DWORD *)(a1 + 4),
    (*(unsigned __int16 *)(a1 + 8) >> 1) & 0xFFF,
    (const char *)v82);
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    __debugbreak();
}
