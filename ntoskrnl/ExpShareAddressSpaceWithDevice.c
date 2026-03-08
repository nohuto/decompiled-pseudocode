/*
 * XREFs of ExpShareAddressSpaceWithDevice @ 0x14060B7D4
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1409FEAE0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAllocateAsid @ 0x14060B064 (ExpAllocateAsid.c)
 *     ExpConvertSvmDevice @ 0x14060B3A8 (ExpConvertSvmDevice.c)
 *     ExpPrepareNewSvmDevice @ 0x14060B56C (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14060C208 (ExpSvmDereferenceDevice.c)
 *     MmEnableProcessSvm @ 0x1406173A4 (MmEnableProcessSvm.c)
 *     IoQueryInterface @ 0x140822260 (IoQueryInterface.c)
 *     ExpAssignPasid @ 0x1409FEB10 (ExpAssignPasid.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpShareAddressSpaceWithDevice(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // r12d
  struct _LIST_ENTRY *v6; // r15
  __int64 v7; // r13
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rdi
  _DWORD *v11; // r9
  int Interface; // r14d
  __int64 p_Blink; // rcx
  struct _KTHREAD *v14; // rsi
  __int64 v15; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v17; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  int SessionId; // eax
  unsigned __int64 *v23; // rsi
  __int64 Blink_low; // rcx
  __int64 v25; // rcx
  unsigned __int8 CurrentIrql; // di
  _DWORD *v27; // r9
  __int64 v28; // rdx
  unsigned __int8 v29; // cl
  struct _KPRCB *v30; // r10
  int v31; // eax
  bool v32; // zf
  struct _KTHREAD *v33; // rsi
  __int64 v34; // rdi
  unsigned int v35; // eax
  unsigned int v36; // ecx
  struct _KPRCB *v37; // rcx
  signed __int32 *v38; // r8
  signed __int32 v39; // eax
  signed __int32 v40; // ett
  __int64 *v42; // rax
  __int64 *v43; // rsi
  __int64 *v44; // rdi
  __int64 Pool2; // rax
  char v46; // si
  unsigned __int8 v47; // di
  _DWORD *v48; // r9
  __int64 v49; // rdx
  _LIST_ENTRY *p_ThreadListHead; // rcx
  _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v52; // rax
  __int64 v53; // rcx
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // eax
  unsigned __int8 v57; // di
  _DWORD *v58; // r8
  __int64 v59; // r9
  struct _LIST_ENTRY *v60; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  struct _KTHREAD *v66; // rdx
  _KPROCESS *Object; // [rsp+48h] [rbp-C0h]
  unsigned __int64 *v68; // [rsp+50h] [rbp-B8h]
  struct _LIST_ENTRY *Flink; // [rsp+58h] [rbp-B0h] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+68h] [rbp-A0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-98h] BYREF
  __int64 v73; // [rsp+88h] [rbp-80h]
  struct _KTHREAD *v74; // [rsp+A0h] [rbp-68h]
  PEX_RUNDOWN_REF RunRef; // [rsp+A8h] [rbp-60h]
  _QWORD v76[18]; // [rsp+B8h] [rbp-50h] BYREF
  int Asid; // [rsp+160h] [rbp+58h]
  unsigned int v80; // [rsp+170h] [rbp+68h]

  memset(v76, 0, 0x50uLL);
  v5 = -1;
  *a3 = -1;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v73 = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  Flink = 0LL;
  if ( !ExpSvmIommuSystemContext )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  CurrentThread = KeGetCurrentThread();
  v74 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  Object = Process;
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    return 3221225659LL;
  RunRef = (PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    return 3221225738LL;
  Interface = IoQueryInterface(a1, 0, (int)&GUID_IOMMU_BUS_INTERFACE, 80, 1, a1, v76);
  if ( Interface < 0 )
    goto LABEL_134;
  p_Blink = (__int64)&Process[2].ProfileListHead.Blink;
  v68 = (unsigned __int64 *)&Process[2].ProfileListHead.Blink;
  --CurrentThread->SpecialApcDisable;
  v14 = KeGetCurrentThread();
  v15 = 0LL;
  _disable();
  AbEntrySummary = v14->AbEntrySummary;
  if ( v14->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(p_Blink, (__int64)v14)) != 0 )
  {
    _BitScanForward(&v17, AbEntrySummary);
    v80 = v17;
    v14->AbEntrySummary = AbEntrySummary & ~(1 << v17);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v20 = *SchedulerAssist;
      do
      {
        v21 = v20;
        v20 = _InterlockedCompareExchange(SchedulerAssist, v20 & 0xFFDFFFFF, v20);
      }
      while ( v21 != v20 );
      if ( (v20 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v15 = (__int64)(&v14[1].Process + 12 * v80);
    if ( (unsigned __int64)v68 - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v14->ApcState.Process);
    v23 = v68;
    *(_DWORD *)(v15 + 8) = SessionId;
    *(_QWORD *)v15 = (unsigned __int64)v68 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    v23 = v68;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
    ExfAcquirePushLockExclusiveEx(v23, v15, (__int64)v23);
  if ( v15 )
    *(_BYTE *)(v15 + 18) = 1;
  Process = Object;
  LODWORD(LockHandle.LockQueue.Next) = 0x8000;
  Blink_low = LODWORD(Object[2].Header.WaitListHead.Blink);
  if ( !(_DWORD)Blink_low )
  {
    Asid = ExpAllocateAsid(Blink_low, (__int64)Object);
    if ( !Asid )
    {
      Interface = -1073741709;
      goto LABEL_110;
    }
    if ( (unsigned int)ExpAssignPasid(Object) )
      LODWORD(Blink_low) = Asid;
    else
      LODWORD(Blink_low) = Object[2].Header.WaitListHead.Blink;
  }
  v25 = (unsigned int)(Blink_low - 1);
  Asid = v25;
  Flink = Object[2].ProfileListHead.Flink;
  if ( !Flink )
  {
    Interface = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _LIST_ENTRY **))(HalIommuDispatch + 16))(
                  v25,
                  0LL,
                  &Flink);
    if ( Interface < 0 )
      goto LABEL_110;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v27 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v28) = LockHandle.LockQueue.Next;
      else
        v28 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      v27[5] |= v28;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(
      &Object[2].DirectoryTableBase,
      (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
    if ( Object[2].ProfileListHead.Flink )
    {
      v7 = (__int64)Flink;
      Flink = Object[2].ProfileListHead.Flink;
    }
    else
    {
      Object[2].ProfileListHead.Flink = Flink;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle.LockQueue.Lock);
    if ( KiIrqlFlags )
    {
      v29 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v11 = v30->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v32 = (v31 & v11[5]) == 0;
        v11[5] &= v31;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick((__int64)v30);
      }
    }
    __writecr8(CurrentIrql);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(HalIommuDispatch + 64))(v7);
  }
  LODWORD(v71) = 0;
  v33 = KeGetCurrentThread();
  v34 = 0LL;
  _disable();
  v35 = v33->AbEntrySummary;
  if ( v33->AbEntrySummary
    || (v35 = KiAbTryReclaimOrphanedEntries((__int64)&ExpAtsSvmDeviceListLock, (__int64)v33)) != 0 )
  {
    _BitScanForward(&v36, v35);
    LODWORD(v71) = v36;
    v33->AbEntrySummary = v35 & ~(1 << v36);
    v37 = KeGetCurrentPrcb();
    v38 = (signed __int32 *)v37->SchedulerAssist;
    if ( v38 )
    {
      _m_prefetchw(v38);
      v39 = *v38;
      do
      {
        v40 = v39;
        v39 = _InterlockedCompareExchange(v38, v39 & 0xFFDFFFFF, v39);
      }
      while ( v40 != v39 );
      if ( (v39 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v37);
    }
    _enable();
    v34 = (__int64)(&v33[1].Process + 12 * (unsigned int)v71);
    if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C65668 < 0x8000000000LL )
      v5 = MmGetSessionIdEx((__int64)v33->ApcState.Process);
    *(_DWORD *)(v34 + 8) = v5;
    *(_QWORD *)v34 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v34, (__int64)&ExpAtsSvmDeviceListLock);
  if ( v34 )
    *(_BYTE *)(v34 + 18) = 1;
  v42 = (__int64 *)ExpAtsSvmDevices;
  if ( (__int64 *)ExpAtsSvmDevices == &ExpAtsSvmDevices )
    goto LABEL_70;
  do
  {
    v43 = v42;
    v44 = v42;
    P = v42;
    if ( v42[3] == a1 )
      break;
    v42 = (__int64 *)*v42;
  }
  while ( v42 != &ExpAtsSvmDevices );
  if ( v43[3] != a1 )
  {
    P = 0LL;
    goto LABEL_70;
  }
  if ( !v43 )
  {
LABEL_70:
    Interface = ExpPrepareNewSvmDevice(a1, (__int64)Flink, (__int64)v76, (char)v11, &P);
    if ( Interface >= 0 )
      goto LABEL_71;
LABEL_78:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
    goto LABEL_81;
  }
  if ( *((_BYTE *)v43 + 17) )
  {
    Interface = -1073741637;
    goto LABEL_78;
  }
  if ( *((_BYTE *)v43 + 16) )
  {
    Interface = ExpConvertSvmDevice((__int64)Flink, v44);
    if ( Interface < 0 )
      goto LABEL_78;
    *((_BYTE *)v43 + 16) = 0;
  }
  ++*((_DWORD *)v44 + 8);
  ++*((_DWORD *)v44 + 9);
LABEL_71:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
  Pool2 = ExAllocatePool2(64LL, 24LL, 1682995269LL);
  v6 = (struct _LIST_ENTRY *)Pool2;
  if ( !Pool2 )
  {
    Interface = -1073741670;
LABEL_81:
    Process = Object;
    goto LABEL_109;
  }
  v46 = 0;
  *(_QWORD *)(Pool2 + 16) = P;
  v47 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v47 <= 0xFu )
  {
    v48 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v47 == 15 )
      LODWORD(v49) = LockHandle.LockQueue.Next;
    else
      v49 = (-1LL << (v47 + 1)) & 0xFFFC;
    v48[5] |= v49;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(
    &Object[2].DirectoryTableBase,
    (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  p_ThreadListHead = &Object[2].ThreadListHead;
  for ( i = Object[2].ThreadListHead.Flink; i != p_ThreadListHead; i = i->Flink )
  {
    if ( i[1].Flink[1].Blink == (struct _LIST_ENTRY *)a1 )
    {
      v46 = 1;
      goto LABEL_99;
    }
  }
  v52 = p_ThreadListHead->Flink;
  if ( p_ThreadListHead->Flink->Blink != p_ThreadListHead )
    goto LABEL_142;
  v6->Flink = v52;
  v6->Blink = p_ThreadListHead;
  v52->Blink = v6;
  p_ThreadListHead->Flink = v6;
LABEL_99:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle.LockQueue.Lock);
  if ( KiIrqlFlags )
  {
    v53 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)v53 <= 0xFu && v47 <= 0xFu && (unsigned __int8)v53 >= 2u )
    {
      v54 = KeGetCurrentPrcb();
      v53 = (unsigned int)v47 + 1;
      v55 = v54->SchedulerAssist;
      v56 = ~(unsigned __int16)(-1LL << (v47 + 1));
      v32 = (v56 & v55[5]) == 0;
      v55[5] &= v56;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick((__int64)v54);
    }
  }
  __writecr8(v47);
  if ( v46 )
  {
    ExFreePoolWithTag(v6, 0);
    v6 = 0LL;
  }
  else
  {
    MmEnableProcessSvm(v53);
    Interface = (*(__int64 (__fastcall **)(struct _LIST_ENTRY *, _QWORD))(HalIommuDispatch + 32))(
                  Flink,
                  *((_QWORD *)P + 22));
    if ( Interface >= 0 )
    {
      Process = Object;
      Interface = (*(__int64 (__fastcall **)(struct _LIST_ENTRY *, unsigned __int64))(HalIommuDispatch + 40))(
                    Flink,
                    Object->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL);
      goto LABEL_109;
    }
  }
  Process = Object;
LABEL_109:
  v23 = v68;
LABEL_110:
  ((void (__fastcall *)(_QWORD))v76[3])(v76[1]);
  if ( Interface >= 0 )
  {
    *a3 = Asid;
    goto LABEL_135;
  }
  if ( P )
    ExpSvmDereferenceDevice(P);
  if ( v6 )
  {
    v57 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v57 <= 0xFu )
    {
      v58 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v57 == 15 )
        LODWORD(v59) = LockHandle.LockQueue.Next;
      else
        v59 = (-1LL << (v57 + 1)) & 0xFFFC;
      v58[5] |= v59;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel(
      &Object[2].DirectoryTableBase,
      (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
    v60 = v6->Flink;
    Blink = v6->Blink;
    if ( v6->Flink->Blink == v6 && Blink->Flink == v6 )
    {
      Blink->Flink = v60;
      v60->Blink = Blink;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle.LockQueue.Lock);
      if ( KiIrqlFlags )
      {
        v62 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v62 <= 0xFu && v57 <= 0xFu && v62 >= 2u )
        {
          v63 = KeGetCurrentPrcb();
          v64 = v63->SchedulerAssist;
          v65 = ~(unsigned __int16)(-1LL << (v57 + 1));
          v32 = (v65 & v64[5]) == 0;
          v64[5] &= v65;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick((__int64)v63);
        }
      }
      __writecr8(v57);
      ExFreePoolWithTag(v6, 0);
      Process = Object;
      goto LABEL_134;
    }
LABEL_142:
    __fastfail(3u);
  }
LABEL_134:
  v23 = (unsigned __int64 *)&Process[2].ProfileListHead.Blink;
LABEL_135:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v23);
  KeAbPostRelease((ULONG_PTR)v23);
  v66 = v74;
  v32 = v74->SpecialApcDisable++ == -1;
  if ( v32 && ($C71981A45BEB2B45F82C232A7085991E *)v66->ApcState.ApcListHead[0].Flink != &v66->152 )
    KiCheckForKernelApcDelivery();
  ExReleaseRundownProtection_0(RunRef);
  return (unsigned int)Interface;
}
