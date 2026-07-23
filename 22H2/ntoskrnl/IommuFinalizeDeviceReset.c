/*
 * XREFs of IommuFinalizeDeviceReset @ 0x1404D8710
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140229570 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommuFinalizeDeviceReset(__int64 a1)
{
  _QWORD *v1; // rdi
  char v3; // r13
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 *i; // rbx
  __int64 v8; // rcx
  _DWORD *v9; // rax
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v17; // bp
  unsigned int v18; // r8d
  __int64 v19; // rdi
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v26; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD **)(a1 + 24);
  v3 = 0;
  if ( HalpHvIommu )
    return 3221225659LL;
  v4 = (unsigned __int64)(v1 + 48);
  if ( !v1[39] || !v1[40] )
    return 3221225659LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v1 + 48), 0LL);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[39])(v1[2], *(_QWORD *)(a1 + 40), *(unsigned int *)(a1 + 56));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 16));
  for ( i = *(__int64 **)(a1 + 88); i != (__int64 *)(a1 + 88); i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 40) )
    {
      v3 = 1;
      *((_BYTE *)i + 40) = 0;
      v8 = 512LL;
      v9 = i + 8;
      do
      {
        *(v9 - 4) = 0;
        *v9 &= ~2u;
        v9 += 6;
        --v8;
      }
      while ( v8 );
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[40])(v1[2], *(_QWORD *)(a1 + 40), *(unsigned int *)(i[4] + 16));
    }
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 16));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  CurrentThread = KeGetCurrentThread();
  v26 = 0;
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v17 = ++CurrentThread->AbAllocationRegionCount;
  v18 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v20, v18);
    if ( v14 )
      goto LABEL_34;
    v19 = (__int64)&CurrentThread->LockEntries[v20];
    v18 &= ~(1 << v20);
    if ( (*(_BYTE *)(v19 + 26) & 1) != 0
      && (*(_DWORD *)(v19 + 32) & 1) == 0
      && (*(_QWORD *)(v19 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v19 + 40) == SessionId )
    {
      *(_BYTE *)(v19 + 26) &= ~1u;
      if ( *(_QWORD *)(v19 + 32) )
        break;
    }
  }
  if ( !v19 )
  {
LABEL_34:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, SessionId, 0LL);
    goto LABEL_41;
  }
  *(_BYTE *)(v19 + 32) |= 2u;
  if ( *(__int64 *)(v19 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v19);
  v21 = *(_DWORD *)(v19 + 88) & 0x1FFFF;
  v22 = *(_DWORD *)(v19 + 88) & 0xFFFE0000;
  *(_BYTE *)(v19 + 25) &= ~1u;
  v26 = v21;
  *(_DWORD *)(v19 + 88) = v22;
  *(_QWORD *)(v19 + 32) = 0LL;
  v23 = (signed __int64)(v19 - (unsigned __int64)CurrentThread->LockEntries) / 96;
  if ( v17 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v23;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v23);
LABEL_41:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v4, &v26);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v24);
  return v3 == 0 ? 0xC0000225 : 0;
}
