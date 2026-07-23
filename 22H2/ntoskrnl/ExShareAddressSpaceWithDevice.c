/*
 * XREFs of ExShareAddressSpaceWithDevice @ 0x1405B71C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14022C490 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     MmEnableProcessSvm @ 0x14052CBD0 (MmEnableProcessSvm.c)
 *     ExpAllocateAsid @ 0x1405B864C (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x1405B8A78 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x1405B8DB4 (ExpSvmDereferenceDevice.c)
 *     IoQueryInterface @ 0x140764BB0 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x140956CA4 (ExpAssignPasid.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExShareAddressSpaceWithDevice(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // r12d
  struct _LIST_ENTRY *v6; // r15
  struct _LIST_ENTRY *v7; // r14
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r13
  struct _KTHREAD *v11; // rbx
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v13; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v15; // dl
  int SessionId; // eax
  bool v17; // zf
  unsigned int Blink; // r12d
  int v19; // ebx
  unsigned __int8 v20; // bl
  _DWORD *v21; // r9
  struct _LIST_ENTRY *v22; // rcx
  struct _LIST_ENTRY *v23; // rax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v32; // r9
  int v33; // eax
  struct _KTHREAD *v34; // rbx
  __int64 v35; // rcx
  unsigned __int8 v36; // al
  char v37; // dl
  __int64 v38; // rsi
  int v39; // eax
  __int64 v40; // rcx
  __int64 *v42; // rax
  __int64 *v43; // rdx
  __int64 *v44; // rcx
  struct _KTHREAD *v45; // rbx
  unsigned int v46; // edx
  unsigned __int8 v47; // r14
  unsigned int v48; // r8d
  __int64 v49; // rcx
  __int64 v50; // rsi
  int v51; // eax
  unsigned int v52; // ecx
  unsigned __int8 v53; // al
  __int64 v54; // rcx
  struct _LIST_ENTRY *PoolWithTag; // rax
  char v56; // di
  unsigned __int8 v57; // bl
  _DWORD *v58; // r9
  _LIST_ENTRY *p_ThreadListHead; // rcx
  _LIST_ENTRY *v60; // rdx
  struct _LIST_ENTRY *v61; // rax
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  struct _KTHREAD *v66; // rbx
  unsigned __int8 v67; // r14
  unsigned int v68; // edx
  __int64 v69; // rdi
  __int64 v70; // rcx
  int v71; // ecx
  unsigned int v72; // edx
  __int64 v73; // rdx
  struct _LIST_ENTRY *Flink; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h] BYREF
  _DWORD v76[2]; // [rsp+50h] [rbp-79h] BYREF
  int v77; // [rsp+58h] [rbp-71h] BYREF
  int v78; // [rsp+5Ch] [rbp-6Dh]
  int v79; // [rsp+60h] [rbp-69h] BYREF
  int v80; // [rsp+64h] [rbp-65h]
  int v81; // [rsp+68h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-59h] BYREF
  struct _KTHREAD *v83; // [rsp+88h] [rbp-41h]
  _QWORD v84[18]; // [rsp+90h] [rbp-39h] BYREF
  int Interface; // [rsp+140h] [rbp+77h]

  v2 = 0LL;
  Flink = 0LL;
  memset(v84, 0, 0x50uLL);
  v5 = -1;
  P = 0LL;
  *a2 = -1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v7 = 0LL;
  if ( !ExpSvmIommuSystemContext )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v83 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0, (unsigned int)&GUID_IOMMU_BUS_INTERFACE, 80, 1, a1, v84);
  if ( Interface >= 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = KeGetCurrentThread();
    p_Blink = &Process[2].ProfileListHead.Blink;
    v79 = 0;
    --v11->SpecialApcDisable;
    if ( ++v11->AbAllocationRegionCount != 1 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v11, (ULONG_PTR)&Process[2].ProfileListHead.Blink, KeGetCurrentIrql(), 0LL);
    LOBYTE(v13) = v11->AbEntrySummary;
    v78 = 0;
    if ( !(_BYTE)v13 )
    {
      if ( !v11->AbOrphanedEntrySummary )
      {
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion((__int64)v11, (__int64)&Process[2].ProfileListHead.Blink);
        goto LABEL_14;
      }
      AbOrphanedEntrySummary = v11->AbOrphanedEntrySummary;
      v11->AbOrphanedEntrySummary = 0;
      LOBYTE(v13) = AbOrphanedEntrySummary | v11->AbEntrySummary;
    }
    v15 = v13;
    _BitScanForward((unsigned int *)&v13, (unsigned __int8)v13);
    v78 = v13;
    v11->AbEntrySummary = v15 & ~(1 << v13);
    v2 = (__int64)&v11->LockEntries[v13];
    if ( v2 )
    {
      if ( (unsigned __int64)p_Blink >= 0xFFFF800000000000uLL
        && *((_BYTE *)&MiState[1537] + (((unsigned __int64)p_Blink >> 39) & 0x1FF)) == 1 )
      {
        SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v2 + 40) = SessionId;
      *(_QWORD *)(v2 + 32) = (unsigned __int64)p_Blink & 0x7FFFFFFFFFFFFFFCLL;
LABEL_22:
      --v11->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v11, (__int64)&Process[2].ProfileListHead.Blink, &v79);
      v17 = v11->SpecialApcDisable++ == -1;
      if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
        KiCheckForKernelApcDelivery(1LL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)p_Blink, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&Process[2].ProfileListHead.Blink,
          v2,
          (ULONG_PTR)&Process[2].ProfileListHead.Blink);
      if ( v2 )
        *(_BYTE *)(v2 + 26) |= 1u;
      Blink = (unsigned int)Process[2].Header.WaitListHead.Blink;
      if ( !Blink )
      {
        Blink = ExpAllocateAsid();
        if ( !Blink )
        {
          v19 = -1073741709;
          Interface = -1073741709;
          goto LABEL_32;
        }
        if ( !(unsigned int)ExpAssignPasid((PADAPTER_OBJECT)Process) )
          Blink = (unsigned int)Process[2].Header.WaitListHead.Blink;
      }
      --Blink;
      Flink = Process[2].ProfileListHead.Flink;
      if ( !Flink )
      {
        Interface = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _LIST_ENTRY **))(HalIommuDispatch + 16))(
                      Blink,
                      0LL,
                      &Flink);
        v19 = Interface;
        if ( Interface < 0 )
          goto LABEL_32;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
        }
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].DirectoryTableBase, &LockHandle);
        if ( Process[2].ProfileListHead.Flink )
        {
          v7 = Flink;
          Flink = Process[2].ProfileListHead.Flink;
        }
        else
        {
          Process[2].ProfileListHead.Flink = Flink;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v30 = KeGetCurrentIrql();
            if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v32 = CurrentPrcb->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v17 = (v33 & v32[5]) == 0;
              v32[5] &= v33;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( v7 )
          (*(void (__fastcall **)(struct _LIST_ENTRY *))(HalIommuDispatch + 64))(v7);
      }
      v34 = KeGetCurrentThread();
      v81 = 0;
      --v34->SpecialApcDisable;
      if ( ++v34->AbAllocationRegionCount != 1 )
        KeBugCheckEx(0x192u, (ULONG_PTR)v34, (ULONG_PTR)&ExpSvmDeviceListLock, KeGetCurrentIrql(), 0LL);
      v80 = 0;
      LOBYTE(v35) = v34->AbEntrySummary;
      if ( !(_BYTE)v35 )
      {
        if ( !v34->AbOrphanedEntrySummary )
        {
          v38 = 0LL;
          if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            EtwTraceAutoBoostEntryExhaustion((__int64)v34, (__int64)&ExpSvmDeviceListLock);
          goto LABEL_81;
        }
        v36 = v34->AbOrphanedEntrySummary;
        v34->AbOrphanedEntrySummary = 0;
        LOBYTE(v35) = v36 | v34->AbEntrySummary;
      }
      v37 = v35;
      _BitScanForward((unsigned int *)&v35, (unsigned __int8)v35);
      v80 = v35;
      v34->AbEntrySummary = v37 & ~(1 << v35);
      v38 = (__int64)&v34->LockEntries[v35];
      if ( v38 )
      {
        if ( (unsigned __int64)&ExpSvmDeviceListLock >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1537] + (((unsigned __int64)&ExpSvmDeviceListLock >> 39) & 0x1FF)) == 1 )
        {
          v39 = MmGetSessionIdEx((__int64)v34->ApcState.Process);
        }
        else
        {
          v39 = -1;
        }
        *(_DWORD *)(v38 + 40) = v39;
        *(_QWORD *)(v38 + 32) = (unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
        goto LABEL_84;
      }
LABEL_81:
      _interlockedbittestandset((volatile signed __int32 *)&v34->116 + 1, 0x10u);
LABEL_84:
      --v34->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v34, (__int64)&ExpSvmDeviceListLock, &v81);
      v17 = v34->SpecialApcDisable++ == -1;
      if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
        KiCheckForKernelApcDelivery(v40);
      if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL) )
        ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v38, (ULONG_PTR)&ExpSvmDeviceListLock);
      if ( v38 )
        *(_BYTE *)(v38 + 26) |= 1u;
      v42 = (__int64 *)ExpSvmDevices;
      if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
        goto LABEL_98;
      do
      {
        v43 = v42;
        v44 = v42;
        P = v42;
        if ( v42[2] == a1 )
          break;
        v42 = (__int64 *)*v42;
      }
      while ( v42 != &ExpSvmDevices );
      if ( v44[2] != a1 )
      {
        v44 = 0LL;
        P = 0LL;
        v43 = 0LL;
      }
      if ( !v43 )
LABEL_98:
        Interface = ExpPrepareNewSvmDevice(a1, Flink, v84, &P);
      else
        ++*((_DWORD *)v44 + 6);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
      v76[0] = 0;
      v45 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&ExpSvmDeviceListLock) == 1 )
        v46 = MmGetSessionIdEx((__int64)v45->ApcState.Process);
      else
        v46 = -1;
      --v45->SpecialApcDisable;
      v47 = ++v45->AbAllocationRegionCount;
      v48 = ((char)v45->AbEntrySummary | (char)v45->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v17 = !_BitScanReverse((unsigned int *)&v49, v48);
        if ( v17 )
          break;
        v50 = (__int64)&v45->LockEntries[v49];
        v48 &= ~(1 << v49);
        if ( (*(_BYTE *)(v50 + 26) & 1) != 0
          && (*(_DWORD *)(v50 + 32) & 1) == 0
          && (*(_QWORD *)(v50 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v50 + 40) == v46 )
        {
          *(_BYTE *)(v50 + 26) &= ~1u;
          if ( *(_QWORD *)(v50 + 32) )
          {
            if ( v50 )
            {
              *(_BYTE *)(v50 + 32) |= 2u;
              if ( *(__int64 *)(v50 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v50);
              v51 = *(_DWORD *)(v50 + 88) & 0x1FFFF;
              v52 = *(_DWORD *)(v50 + 88) & 0xFFFE0000;
              *(_BYTE *)(v50 + 25) &= ~1u;
              v76[0] = v51;
              *(_DWORD *)(v50 + 88) = v52;
              *(_QWORD *)(v50 + 32) = 0LL;
              v53 = 1 << ((char)(v50 - LOBYTE(v45->LockEntries)) / 96);
              if ( v47 == 1 )
                v45->AbEntrySummary |= v53;
              else
                _InterlockedOr8((volatile signed __int8 *)&v45->AbOrphanedEntrySummary, v53);
              goto LABEL_117;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v45->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v45, (ULONG_PTR)&ExpSvmDeviceListLock, v46, 0LL);
LABEL_117:
      --v45->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v45, (__int64)&ExpSvmDeviceListLock, v76);
      v17 = v45->SpecialApcDisable++ == -1;
      if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)v45->ApcState.ApcListHead[0].Flink != &v45->152 )
        KiCheckForKernelApcDelivery(v54);
      v19 = Interface;
      if ( Interface >= 0 )
      {
        PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x64507845u);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v56 = 0;
          PoolWithTag[1].Flink = (struct _LIST_ENTRY *)P;
          v57 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v57 <= 0xFu )
          {
            v58 = KeGetCurrentPrcb()->SchedulerAssist;
            v58[5] |= (-1 << (v57 + 1)) & 0xFFFC;
          }
          KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].DirectoryTableBase, &LockHandle);
          p_ThreadListHead = &Process[2].ThreadListHead;
          v60 = Process[2].ThreadListHead.Flink;
          if ( v60 == &Process[2].ThreadListHead )
          {
LABEL_133:
            v61 = p_ThreadListHead->Flink;
            if ( p_ThreadListHead->Flink->Blink != p_ThreadListHead )
              goto LABEL_147;
            v6->Flink = v61;
            v6->Blink = p_ThreadListHead;
            v61->Blink = v6;
            p_ThreadListHead->Flink = v6;
          }
          else
          {
            while ( v60[1].Flink[1].Flink != (struct _LIST_ENTRY *)a1 )
            {
              v60 = v60->Flink;
              if ( v60 == p_ThreadListHead )
                goto LABEL_133;
            }
            v56 = 1;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v62 = KeGetCurrentIrql();
              if ( v62 <= 0xFu && v57 <= 0xFu && v62 >= 2u )
              {
                v63 = KeGetCurrentPrcb();
                v64 = v63->SchedulerAssist;
                v65 = ~(unsigned __int16)(-1LL << (v57 + 1));
                v17 = (v65 & v64[5]) == 0;
                v64[5] &= v65;
                if ( v17 )
                  KiRemoveSystemWorkPriorityKick((__int64)v63);
              }
            }
          }
          __writecr8(v57);
          if ( v56 )
          {
            ExFreePoolWithTag(v6, 0);
            v19 = Interface;
            v6 = 0LL;
          }
          else
          {
            MmEnableProcessSvm();
            Interface = (*(__int64 (__fastcall **)(struct _LIST_ENTRY *, _QWORD))(HalIommuDispatch + 32))(
                          Flink,
                          *((_QWORD *)P + 15));
            v19 = Interface;
            if ( Interface >= 0 )
            {
              v19 = (*(__int64 (__fastcall **)(struct _LIST_ENTRY *, unsigned __int64))(HalIommuDispatch + 40))(
                      Flink,
                      Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL);
              Interface = v19;
            }
          }
        }
        else
        {
          v19 = -1073741670;
          Interface = -1073741670;
        }
      }
LABEL_32:
      ((void (__fastcall *)(_QWORD))v84[3])(v84[1]);
      if ( v19 >= 0 )
      {
        *a2 = Blink;
LABEL_149:
        v5 = -1;
        goto LABEL_150;
      }
      if ( P )
        ExpSvmDereferenceDevice(P);
      if ( !v6 )
        goto LABEL_149;
      v20 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 <= 0xFu )
      {
        v21 = KeGetCurrentPrcb()->SchedulerAssist;
        v21[5] |= (-1 << (v20 + 1)) & 0xFFFC;
      }
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&Process[2].DirectoryTableBase, &LockHandle);
      v22 = v6->Flink;
      v23 = v6->Blink;
      if ( v6->Flink->Blink == v6 && v23->Flink == v6 )
      {
        v23->Flink = v22;
        v22->Blink = v23;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && v20 <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = v25->SchedulerAssist;
              v27 = ~(unsigned __int16)(-1LL << (v20 + 1));
              v17 = (v27 & v26[5]) == 0;
              v26[5] &= v27;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick((__int64)v25);
            }
          }
        }
        __writecr8(v20);
        ExFreePoolWithTag(v6, 0);
        goto LABEL_149;
      }
LABEL_147:
      __fastfail(3u);
    }
LABEL_14:
    _interlockedbittestandset((volatile signed __int32 *)&v11->116 + 1, 0x10u);
    goto LABEL_22;
  }
LABEL_150:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[2].ProfileListHead.Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[2].ProfileListHead.Blink);
  v66 = KeGetCurrentThread();
  v77 = 0;
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&Process[2].ProfileListHead.Blink) == 1 )
    v5 = MmGetSessionIdEx((__int64)v66->ApcState.Process);
  --v66->SpecialApcDisable;
  v67 = ++v66->AbAllocationRegionCount;
  v68 = ((char)v66->AbEntrySummary | (char)v66->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v17 = !_BitScanReverse((unsigned int *)&v70, v68);
    v76[1] = v70;
    if ( v17 )
      goto LABEL_161;
    v69 = (__int64)&v66->LockEntries[v70];
    v68 &= ~(1 << v70);
    if ( (*(_BYTE *)(v69 + 26) & 1) != 0
      && (*(_DWORD *)(v69 + 32) & 1) == 0
      && (*(_QWORD *)(v69 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&Process[2].ProfileListHead.Blink & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v69 + 40) == v5 )
    {
      *(_BYTE *)(v69 + 26) &= ~1u;
      if ( *(_QWORD *)(v69 + 32) )
        break;
    }
  }
  if ( !v69 )
  {
LABEL_161:
    if ( (*((_DWORD *)&v66->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v66, (ULONG_PTR)&Process[2].ProfileListHead.Blink, v5, 0LL);
    goto LABEL_168;
  }
  *(_BYTE *)(v69 + 32) |= 2u;
  if ( *(__int64 *)(v69 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v69);
  v71 = *(_DWORD *)(v69 + 88) & 0x1FFFF;
  v72 = *(_DWORD *)(v69 + 88) & 0xFFFE0000;
  *(_BYTE *)(v69 + 25) &= ~1u;
  v77 = v71;
  *(_DWORD *)(v69 + 88) = v72;
  *(_QWORD *)(v69 + 32) = 0LL;
  v73 = (signed __int64)(v69 - (unsigned __int64)v66->LockEntries) / 96;
  if ( v67 == 1 )
    v66->AbEntrySummary |= 1 << v73;
  else
    _InterlockedOr8((volatile signed __int8 *)&v66->AbOrphanedEntrySummary, 1 << v73);
LABEL_168:
  --v66->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v66, (__int64)&Process[2].ProfileListHead.Blink, &v77);
  v17 = v66->SpecialApcDisable++ == -1;
  if ( v17 && ($C459BD0D405E8E46662177FB3D0A143F *)v66->ApcState.ApcListHead[0].Flink != &v66->152 )
    KiCheckForKernelApcDelivery(1LL);
  KiLeaveGuardedRegionUnsafe((__int64)v83);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  return (unsigned int)Interface;
}
