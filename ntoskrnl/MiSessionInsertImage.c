/*
 * XREFs of MiSessionInsertImage @ 0x14036BEC4
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiGetSystemAddressForImage @ 0x1407F6010 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MmLockLoadedModuleListExclusive @ 0x1402B29E0 (MmLockLoadedModuleListExclusive.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     MiReferenceActiveSubsection @ 0x1403323F0 (MiReferenceActiveSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiManageSubsectionView @ 0x140335DC0 (MiManageSubsectionView.c)
 *     MiControlAreaRequiresCharge @ 0x14034C4DC (MiControlAreaRequiresCharge.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1406238BC (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiBytesToMapSystemImage @ 0x1407F6A64 (MiBytesToMapSystemImage.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSessionInsertImage(unsigned __int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // r8
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r9
  PVOID Pool; // rbp
  unsigned __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // r8
  int v13; // r13d
  volatile LONG *SharedVm; // rbx
  unsigned __int64 v15; // rbx
  bool v16; // r15
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // bl
  __int64 v19; // r8
  unsigned __int8 v21; // bl
  int active; // ebx
  __int64 v23; // r8
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r8
  int v27; // eax
  bool v28; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v32; // eax
  __int64 SessionVm; // [rsp+20h] [rbp-F8h]
  __int64 v34; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v35; // [rsp+30h] [rbp-E8h]
  __int64 v36[27]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+130h] [rbp+18h] BYREF
  KIRQL v39; // [rsp+138h] [rbp+20h]

  v38 = a3;
  v4 = 0;
  LOBYTE(v38) = 0;
  memset(v36, 0, 0x98uLL);
  v35 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  v5 = *(unsigned __int16 *)(v35 + 366);
  v6 = *(_QWORD *)(qword_140C67048 + 8 * v5);
  SessionVm = MiGetSessionVm(v35, v7, v5, v8);
  Pool = MiAllocatePool(64, 0x60uLL, 0x69486D4Du);
  if ( !Pool )
    return 3221225495LL;
  v10 = *(unsigned int *)(*a2 + 8);
  if ( *(_DWORD *)(*a2 + 8) && !(unsigned int)MiChargeCommit(v6, (unsigned int)v10, 0LL) )
  {
    active = -1073741670;
LABEL_29:
    ExFreePoolWithTag(Pool, 0);
    return (unsigned int)active;
  }
  v34 = MiBytesToMapSystemImage(v10 << 12);
  v11 = MiControlAreaRequiresCharge((__int64)a2, 2LL);
  v13 = v11;
  if ( !v11 )
  {
    MiReturnCommit(v6, v10, v12);
    active = -1073740277;
    goto LABEL_29;
  }
  if ( v11 == 2 )
  {
    active = MiReferenceActiveSubsection(a2 + 16, 264, 0x11u);
    if ( active < 0 )
    {
      MiReturnCommit(v6, v10, v23);
      goto LABEL_29;
    }
  }
  SharedVm = (volatile LONG *)MiGetSharedVm(SessionVm);
  v39 = ExAcquireSpinLockExclusive(SharedVm);
  *((_DWORD *)SharedVm + 1) = 0;
  MmLockLoadedModuleListExclusive((unsigned __int8 *)&v38);
  v15 = *(_QWORD *)(v35 + 64);
  v16 = 0;
  if ( !v15 )
  {
LABEL_19:
    memset(Pool, 0, 0x60uLL);
    *((_QWORD *)Pool + 5) = a1 | 3;
    *((_QWORD *)Pool + 9) = v10;
    *((_QWORD *)Pool + 6) = a1 + v34 - 1;
    *((_DWORD *)Pool + 15) = 1;
    *((_DWORD *)Pool + 14) = *(_DWORD *)(v35 + 8);
    *((_QWORD *)Pool + 10) = a2;
    *((_QWORD *)Pool + 11) = -2LL;
    if ( v13 == 2 )
      *((_BYTE *)Pool + 65) = 1;
    RtlAvlInsertNodeEx((unsigned __int64 *)(v35 + 64), v15, v16, (unsigned __int64)Pool);
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v21 = v38;
      if ( (unsigned __int8)v38 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = v38;
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
        v28 = (v32 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v32;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v21 = v38;
    }
    __writecr8(v21);
    MiUnlockWorkingSetExclusive(SessionVm, v39);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 40), v10);
    v36[0] = (__int64)a2;
    MiManageSubsectionView(v36, (_QWORD *)Pool + 3, 3);
    return v4;
  }
  while ( a1 > *(_QWORD *)(v15 + 48) )
  {
    v17 = *(_QWORD *)(v15 + 8);
    if ( !v17 )
    {
      v16 = 1;
      goto LABEL_19;
    }
LABEL_9:
    v15 = v17;
  }
  if ( a1 < (*(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFFFFFFCuLL) )
  {
    v17 = *(_QWORD *)v15;
    if ( !*(_QWORD *)v15 )
      goto LABEL_19;
    goto LABEL_9;
  }
  ++*(_DWORD *)(v15 + 60);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (v24 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v24 <= 0xFu )
  {
    v18 = v38;
    if ( (unsigned __int8)v38 <= 0xFu && v24 >= 2u )
    {
      v25 = KeGetCurrentPrcb();
      v26 = v25->SchedulerAssist;
      v18 = v38;
      v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
      v28 = (v27 & v26[5]) == 0;
      v26[5] &= v27;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(v25);
    }
  }
  else
  {
    v18 = v38;
  }
  __writecr8(v18);
  MiUnlockWorkingSetExclusive(SessionVm, v39);
  v4 = 272;
  ExFreePoolWithTag(Pool, 0);
  MiReturnCommit(v6, v10, v19);
  if ( v13 == 2 )
    MiReturnCrossPartitionControlAreaCharges(a2);
  return v4;
}
