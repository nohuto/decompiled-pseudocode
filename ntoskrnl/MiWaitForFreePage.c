/*
 * XREFs of MiWaitForFreePage @ 0x140651458
 * Callers:
 *     MiGetSystemPage @ 0x1402141C8 (MiGetSystemPage.c)
 *     MiWalkPageTablesRecursively @ 0x140223160 (MiWalkPageTablesRecursively.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiAllocateKernelStackPages @ 0x14031D830 (MiAllocateKernelStackPages.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiSplitDirectMapPage @ 0x14063CE6C (MiSplitDirectMapPage.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1406619A4 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 *     MiCopyOnWriteCheckConditions @ 0x140664840 (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateTopLevelPage @ 0x140728F6C (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1407290FC (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 *     MiFillPerSessionProtos @ 0x140A4734C (MiFillPerSessionProtos.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     MiSufficientAvailablePages @ 0x1403643E4 (MiSufficientAvailablePages.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiObtainFreePages @ 0x140632B0C (MiObtainFreePages.c)
 *     MiCanFlushMakeProgress @ 0x14063678C (MiCanFlushMakeProgress.c)
 *     MiNoPagesLastChance @ 0x14064E904 (MiNoPagesLastChance.c)
 *     MiDemoteSlabEntries @ 0x1406541E4 (MiDemoteSlabEntries.c)
 */

__int64 __fastcall MiWaitForFreePage(_QWORD *a1)
{
  int v2; // r8d
  unsigned __int64 v3; // r13
  struct _KEVENT *v4; // rdi
  volatile LONG Lock; // r12d
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned int v12; // r14d
  unsigned int v13; // esi
  __int64 result; // rax
  unsigned __int64 v15; // rbx
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-79h] BYREF
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp-61h] BYREF
  __int64 v20; // [rsp+58h] [rbp-59h]
  _QWORD v21[14]; // [rsp+68h] [rbp-49h] BYREF

  Timeout.QuadPart = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2;
  v3 = v2 != 0 ? 34 : 160;
  v20 = MiNoPagesTimeout / -10000;
  v4 = (struct _KEVENT *)((char *)a1 + (-(__int64)(v2 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 15912);
  KeAcquireInStackQueuedSpinLock(a1 + 1984, &LockHandle);
  while ( !(unsigned int)MiSufficientAvailablePages((__int64)a1, v3) )
  {
    KeResetEvent(v4);
    Lock = v4[1].Header.Lock;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    MiObtainFreePages((__int64)a1);
    if ( a1[57] )
    {
      memset(v21, 0, 0x68uLL);
      v21[1] = a1[25];
      VslpEnterIumSecureMode(2u, 253, 0, (__int64)v21);
    }
    v12 = 0;
    while ( 1 )
    {
      if ( !a1[2200] || (v13 = 1000, !(unsigned int)MiCanFlushMakeProgress((__int64)a1, 0)) )
        v13 = 100;
      Timeout.QuadPart = -10000LL * v13;
      if ( KeWaitForSingleObject(v4, WrFreePage, 0, 0, &Timeout) != 258 )
        break;
      if ( Lock != v4[1].Header.LockNV )
        break;
      v12 += v13;
      MiDemoteSlabEntries(a1);
      if ( Lock != v4[1].Header.LockNV )
        break;
      if ( v12 >= (unsigned int)v20 )
      {
        MiNoPagesLastChance((__int64)a1, v3);
        break;
      }
    }
    KeAcquireInStackQueuedSpinLock(a1 + 1984, &LockHandle);
  }
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v15 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v11 = ((unsigned int)result & v17[5]) == 0;
      v17[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick((__int64)v16);
    }
  }
  __writecr8(v15);
  return result;
}
