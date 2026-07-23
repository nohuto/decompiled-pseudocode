/*
 * XREFs of PspUnlockQuotaExpansion @ 0x140318984
 * Callers:
 *     PspReturnResourceQuota @ 0x140318838 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x1403188B8 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1403CB554 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x14058117C (PspExpandLimit.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

char __fastcall PspUnlockQuotaExpansion(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  int v4; // eax
  struct _KTHREAD *CurrentThread; // r14
  char v6; // al
  struct _KTHREAD *v7; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v9; // r15
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v21; // [rsp+70h] [rbp+18h] BYREF

  v2 = a1 + 16;
  v3 = a2;
  if ( *(_DWORD *)a1 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 16));
    LOBYTE(v4) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v4) = KeGetCurrentIrql();
        if ( (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v4 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v11 = (v4 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v4;
          if ( v11 )
            LOBYTE(v4) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 16));
    v21 = 0;
    v7 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    else
      SessionId = -1;
    --v7->SpecialApcDisable;
    v9 = ++v7->AbAllocationRegionCount;
    v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v12, v10);
      if ( v11 )
        break;
      v13 = (__int64)&v7->LockEntries[v12];
      v10 &= ~(1 << v12);
      if ( (*(_BYTE *)(v13 + 26) & 1) != 0
        && (*(_DWORD *)(v13 + 32) & 1) == 0
        && (*(_QWORD *)(v13 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v13 + 40) == SessionId )
      {
        *(_BYTE *)(v13 + 26) &= ~1u;
        if ( *(_QWORD *)(v13 + 32) )
        {
          if ( v13 )
          {
            *(_BYTE *)(v13 + 32) |= 2u;
            if ( *(__int64 *)(v13 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v13);
            v14 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
            v15 = *(_DWORD *)(v13 + 88) & 0xFFFE0000;
            *(_BYTE *)(v13 + 25) &= ~1u;
            v21 = v14;
            *(_DWORD *)(v13 + 88) = v15;
            *(_QWORD *)(v13 + 32) = 0LL;
            v16 = (signed __int64)(v13 - (unsigned __int64)v7->LockEntries) / 96;
            if ( v9 == 1 )
              v7->AbEntrySummary |= 1 << v16;
            else
              _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v16);
            goto LABEL_19;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, v2, SessionId, 0LL);
LABEL_19:
    --v7->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v7, v2, &v21);
    v11 = v7->SpecialApcDisable++ == -1;
    if ( v11 && ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
      KiCheckForKernelApcDelivery(v17);
    LOBYTE(v4) = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return v4;
}
