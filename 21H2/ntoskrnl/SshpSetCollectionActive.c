/*
 * XREFs of SshpSetCollectionActive @ 0x14057FE3C
 * Callers:
 *     PdcPoSleepStudyHelperSetPhaseActive @ 0x1407D52A0 (PdcPoSleepStudyHelperSetPhaseActive.c)
 *     SshpPowerSettingCallback @ 0x1408FBAF0 (SshpPowerSettingCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     SshpStopBlockerAccounting @ 0x14058011C (SshpStopBlockerAccounting.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1407D5458 (CmpVolumeManagerLockContextListExclusive.c)
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
  _DWORD *v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v26; // rax
  __int64 v27; // rcx
  int v29; // [rsp+70h] [rbp+8h] BYREF
  int v30; // [rsp+78h] [rbp+10h]

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
  v29 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v18 = ++CurrentThread->AbAllocationRegionCount;
  v19 = (_DWORD *)(BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL);
  v20 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v22, v20);
    v30 = v22;
    if ( v15 )
      goto LABEL_30;
    v21 = (__int64)&CurrentThread->LockEntries[v22];
    v20 &= ~(1 << v22);
    if ( (*(_BYTE *)(v21 + 26) & 1) != 0
      && (*(_DWORD *)(v21 + 32) & 1) == 0
      && (_DWORD *)(*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v19
      && *(_DWORD *)(v21 + 40) == SessionId )
    {
      *(_BYTE *)(v21 + 26) &= ~1u;
      if ( *(_QWORD *)(v21 + 32) )
        break;
    }
  }
  if ( !v21 )
  {
LABEL_30:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    goto LABEL_37;
  }
  *(_BYTE *)(v21 + 32) |= 2u;
  if ( *(__int64 *)(v21 + 32) < 0 )
    KiAbEntryRemoveFromTree(v21);
  v23 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
  v24 = *(_DWORD *)(v21 + 88) & 0xFFFE0000;
  *(_BYTE *)(v21 + 25) &= ~1u;
  v29 = v23;
  *(_DWORD *)(v21 + 88) = v24;
  *(_QWORD *)(v21 + 32) = 0LL;
  v25 = (signed __int64)(v21 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v18 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v25;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v25);
LABEL_37:
  --CurrentThread->AbAllocationRegionCount;
  LOBYTE(v26) = KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, (__int64)&v29, v19);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 )
  {
    v26 = &CurrentThread->152;
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v26->ApcState.ApcListHead[0].Flink != v26 )
      LOBYTE(v26) = KiCheckForKernelApcDelivery(v27);
  }
  return (char)v26;
}
