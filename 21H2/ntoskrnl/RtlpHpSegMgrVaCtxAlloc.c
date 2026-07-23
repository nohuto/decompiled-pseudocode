/*
 * XREFs of RtlpHpSegMgrVaCtxAlloc @ 0x140222330
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x14022220C (RtlpHpSegMgrReserve.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x140313100 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpEnvGetHeapManager @ 0x140314164 (RtlpHpEnvGetHeapManager.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxAlloc(__int64 a1, int a2, char a3)
{
  __int64 v3; // rbx
  _QWORD **v4; // rdi
  ULONG_PTR v8; // r14
  unsigned __int8 v9; // al
  _QWORD *v10; // r12
  unsigned __int64 v11; // r15
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KTHREAD *v17; // rdi
  unsigned int v18; // edx
  unsigned __int8 v19; // r15
  unsigned int v20; // r8d
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v31; // r15
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rsi
  unsigned __int8 v35; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v39; // eax
  unsigned int v40; // [rsp+38h] [rbp-18h]
  __int128 v41; // [rsp+40h] [rbp-10h] BYREF

  v3 = 0LL;
  v4 = (_QWORD **)(a1 + 128);
  if ( *(_QWORD *)(a1 + 120) || *v4 )
  {
    v8 = a1 + 112;
    v9 = RtlpHpAcquireLockExclusive(a1 + 112, *(_DWORD *)(a1 + 40) & 1);
    v10 = *v4;
    v11 = v9;
    if ( *v4 || (a3 & 2) == 0 && (--v4, (v10 = *v4) != 0LL) )
    {
      v12 = *((unsigned __int16 *)v10 - 3);
      _BitScanForward(&v13, v12);
      v14 = v12 ^ (1 << v13);
      v40 = v13;
      *((_WORD *)v10 - 3) = v14;
      if ( !(_WORD)v14 )
      {
        if ( *v4 )
          *v4 = (_QWORD *)**v4;
        *v10 = 0LL;
      }
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v21 = (v39 & SchedulerAssist[5]) == 0;
              v15 = (unsigned int)v39 & SchedulerAssist[5];
              SchedulerAssist[5] = v15;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v31 = ++CurrentThread->AbAllocationRegionCount;
        v32 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v21 = !_BitScanReverse((unsigned int *)&v33, v32);
          if ( v21 )
            goto LABEL_55;
          v34 = (__int64)&CurrentThread->LockEntries[v33];
          v32 &= ~(1 << v33);
          if ( (*(_BYTE *)(v34 + 26) & 1) != 0
            && (*(_DWORD *)(v34 + 32) & 1) == 0
            && (*(_QWORD *)(v34 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v34 + 40) == SessionId )
          {
            *(_BYTE *)(v34 + 26) &= ~1u;
            if ( *(_QWORD *)(v34 + 32) )
              break;
          }
        }
        if ( !v34 )
        {
LABEL_55:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v8, SessionId, 0LL);
          goto LABEL_67;
        }
        *(_BYTE *)(v34 + 32) |= 2u;
        if ( *(__int64 *)(v34 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v34);
        *(_DWORD *)(v34 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v34 + 25) &= ~1u;
        *(_QWORD *)(v34 + 32) = 0LL;
        v35 = 1 << ((signed __int64)(v34 - (unsigned __int64)CurrentThread->LockEntries) / 96);
        if ( v31 == 1 )
          CurrentThread->AbEntrySummary |= v35;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v35);
LABEL_67:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v21 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v21
          && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
      v41 = *(_OWORD *)(a1 + 40);
      v16 = *(_QWORD *)(RtlpHpEnvGetHeapManager(&v41, v15) + 48LL * *((unsigned __int8 *)v10 - 15) + 2272);
      return (((unsigned __int64)v10 - *(_QWORD *)(v16 + 40) - 16) >> *(_DWORD *)(v16 + 24) << 20)
           + *(_QWORD *)(v16 + 8)
           + a2 * v40;
    }
    else if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
            v21 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
      }
      __writecr8(v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8);
      v17 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
        v18 = MmGetSessionIdEx(v17->ApcState.Process);
      else
        v18 = -1;
      --v17->SpecialApcDisable;
      v19 = ++v17->AbAllocationRegionCount;
      v20 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v21 = !_BitScanReverse((unsigned int *)&v22, v20);
        if ( v21 )
          goto LABEL_23;
        v23 = (__int64)&v17->LockEntries[v22];
        v20 &= ~(1 << v22);
        if ( (*(_BYTE *)(v23 + 26) & 1) != 0
          && (*(_DWORD *)(v23 + 32) & 1) == 0
          && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v23 + 40) == v18 )
        {
          *(_BYTE *)(v23 + 26) &= ~1u;
          if ( *(_QWORD *)(v23 + 32) )
            break;
        }
      }
      if ( !v23 )
      {
LABEL_23:
        if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v17, v8, v18, 0LL);
        goto LABEL_35;
      }
      *(_BYTE *)(v23 + 32) |= 2u;
      if ( *(__int64 *)(v23 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
      *(_DWORD *)(v23 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v23 + 25) &= ~1u;
      *(_QWORD *)(v23 + 32) = 0LL;
      v24 = (signed __int64)(v23 - (unsigned __int64)v17->LockEntries) / 96;
      if ( v19 == 1 )
        v17->AbEntrySummary |= 1 << v24;
      else
        _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v24);
LABEL_35:
      --v17->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v17);
      v21 = v17->SpecialApcDisable++ == -1;
      if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  return v3;
}
