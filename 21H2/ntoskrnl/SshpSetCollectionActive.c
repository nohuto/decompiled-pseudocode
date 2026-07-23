/*
 * XREFs of SshpSetCollectionActive @ 0x14058007C
 * Callers:
 *     PdcPoSleepStudyHelperSetPhaseActive @ 0x1407D5410 (PdcPoSleepStudyHelperSetPhaseActive.c)
 *     SshpPowerSettingCallback @ 0x1408FBC50 (SshpPowerSettingCallback.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     SshpStopBlockerAccounting @ 0x14058035C (SshpStopBlockerAccounting.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1407D55C8 (CmpVolumeManagerLockContextListExclusive.c)
 */

char __fastcall SshpSetCollectionActive(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // r12
  _QWORD *i; // rdi
  __int64 v6; // rbx
  KIRQL v7; // al
  int v8; // ecx
  unsigned __int64 v9; // r15
  int v10; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v18; // bp
  unsigned int v19; // r8d
  __int64 v20; // rdi
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v25; // rax
  int v27; // [rsp+70h] [rbp+8h] BYREF
  int v28; // [rsp+78h] [rbp+10h]

  CmpVolumeManagerLockContextListExclusive();
  if ( *(_BYTE *)(BugCheckParameter2 + 8) != a2 )
  {
    v4 = MEMORY[0xFFFFF78000000008];
    for ( i = *(_QWORD **)(BugCheckParameter2 + 16); i != (_QWORD *)(BugCheckParameter2 + 16); i = (_QWORD *)*i )
    {
      v6 = i[11];
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
      v8 = *(_DWORD *)(v6 + 8);
      v9 = v7;
      if ( a2 )
      {
        v10 = v8 | 2;
        *(_DWORD *)(v6 + 8) = v10;
        if ( (v10 & 1) == 0 )
          ++*(_DWORD *)(v6 + 112);
        *(_QWORD *)(v6 + 16) = v4;
      }
      else if ( (v8 & 2) != 0 )
      {
        SshpStopBlockerAccounting(v6, v4, 1LL);
        *(_DWORD *)(v6 + 8) &= ~2u;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)v6);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v15 = (v14 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v14;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
    *(_BYTE *)(BugCheckParameter2 + 8) = a2;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  v27 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v18 = ++CurrentThread->AbAllocationRegionCount;
  v19 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v21, v19);
    v28 = v21;
    if ( v15 )
      goto LABEL_30;
    v20 = (__int64)&CurrentThread->LockEntries[v21];
    v19 &= ~(1 << v21);
    if ( (*(_BYTE *)(v20 + 26) & 1) != 0
      && (*(_DWORD *)(v20 + 32) & 1) == 0
      && (*(_QWORD *)(v20 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v20 + 40) == SessionId )
    {
      *(_BYTE *)(v20 + 26) &= ~1u;
      if ( *(_QWORD *)(v20 + 32) )
        break;
    }
  }
  if ( !v20 )
  {
LABEL_30:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    goto LABEL_37;
  }
  *(_BYTE *)(v20 + 32) |= 2u;
  if ( *(__int64 *)(v20 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v20);
  v22 = *(_DWORD *)(v20 + 88) & 0x1FFFF;
  v23 = *(_DWORD *)(v20 + 88) & 0xFFFE0000;
  *(_BYTE *)(v20 + 25) &= ~1u;
  v27 = v22;
  *(_DWORD *)(v20 + 88) = v23;
  *(_QWORD *)(v20 + 32) = 0LL;
  v24 = (signed __int64)(v20 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v18 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v24;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v24);
LABEL_37:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v25) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, (unsigned int *)&v27);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 )
  {
    v25 = &CurrentThread->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v25->ApcState.ApcListHead[0].Flink != v25 )
      LOBYTE(v25) = KiCheckForKernelApcDelivery();
  }
  return (char)v25;
}
