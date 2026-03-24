/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x140594C30
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x140389B54 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpQueryVA @ 0x1402A5CA4 (RtlpHpQueryVA.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1403083B0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int128 v3; // xmm0
  unsigned __int64 v7; // r15
  unsigned __int16 *v8; // rbx
  ULONG_PTR v9; // rbp
  unsigned __int64 v10; // rdi
  KIRQL v11; // al
  unsigned __int16 *v12; // r9
  unsigned __int64 v13; // r14
  int v14; // r10d
  int v15; // eax
  unsigned __int64 v16; // r8
  unsigned __int16 *v17; // rcx
  unsigned __int16 *v18; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v21; // si
  _DWORD *v22; // r9
  unsigned int v23; // edx
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v31; // eax
  _DWORD *SchedulerAssist; // r8
  __int128 v34[4]; // [rsp+30h] [rbp-48h] BYREF
  int v35; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int16 *v36; // [rsp+90h] [rbp+18h] BYREF

  v3 = *(_OWORD *)(a1 + 40);
  v36 = 0LL;
  v7 = a2 & 0xFFFFFFFFFFE00000uLL;
  v8 = 0LL;
  v34[0] = v3;
  RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, v34, &v36, 0LL);
  v9 = a1 + 112;
  v10 = (a2 - v7) / *a3;
  v11 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 112), *(_DWORD *)(a1 + 40) & 1);
  v12 = v36;
  v13 = v11;
  v14 = (unsigned __int16)(v36[1] ^ (1 << v10));
  v15 = 0x200000uLL / *a3;
  v36[1] = v14;
  v16 = (unsigned __int64)*v12 >> 15;
  if ( v14 == (1 << v15) - 1 )
  {
    if ( *((_QWORD *)v12 + 1) != -1LL )
    {
      while ( 1 )
      {
        v17 = *(unsigned __int16 **)(a1 + 8 * v16 + 120);
        if ( !v17 )
          NT_ASSERT("Link != ((void *)0)");
        *(_QWORD *)(a1 + 8 * v16 + 120) = *(_QWORD *)v17;
        if ( v17 == v12 + 4 )
          break;
        *(_QWORD *)v17 = v8;
        v8 = v17;
      }
      while ( 1 )
      {
        v18 = v8;
        if ( !v8 )
          break;
        v8 = *(unsigned __int16 **)v8;
        *(_QWORD *)v18 = *(_QWORD *)(a1 + 8 * v16 + 120);
        *(_QWORD *)(a1 + 8 * v16 + 120) = v18;
      }
    }
  }
  else
  {
    if ( ((v14 - 1) & v14) == 0 )
    {
      *((_QWORD *)v12 + 1) = *(_QWORD *)(a1 + 8 * v16 + 120);
      *(_QWORD *)(a1 + 8 * v16 + 120) = v12 + 4;
    }
    v7 = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v25 = (v31 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v31;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 112);
    v35 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 112) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v21 = ++CurrentThread->AbAllocationRegionCount;
    v22 = (_DWORD *)(v9 & 0x7FFFFFFFFFFFFFFCLL);
    v23 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v25 = !_BitScanReverse((unsigned int *)&v26, v23);
      if ( v25 )
        goto LABEL_25;
      v24 = (__int64)&CurrentThread->LockEntries[v26];
      v23 &= ~(1 << v26);
      if ( (*(_BYTE *)(v24 + 26) & 1) != 0
        && (*(_DWORD *)(v24 + 32) & 1) == 0
        && (_DWORD *)(*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v22
        && *(_DWORD *)(v24 + 40) == SessionId )
      {
        *(_BYTE *)(v24 + 26) &= ~1u;
        if ( *(_QWORD *)(v24 + 32) )
          break;
      }
    }
    if ( !v24 )
    {
LABEL_25:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v9, SessionId, 0LL);
      goto LABEL_32;
    }
    *(_BYTE *)(v24 + 32) |= 2u;
    if ( *(__int64 *)(v24 + 32) < 0 )
      KiAbEntryRemoveFromTree(v24);
    v35 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
    *(_DWORD *)(v24 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v24 + 25) &= ~1u;
    *(_QWORD *)(v24 + 32) = 0LL;
    v27 = (signed __int64)(v24 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v21 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v27;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v27);
LABEL_32:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v9, (__int64)&v35, v22);
    v25 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v25 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v28);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v7 )
    *a3 = 0x200000LL;
  return v7;
}
