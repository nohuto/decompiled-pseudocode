/*
 * XREFs of RtlpHpLargeFree @ 0x1402FDE04
 * Callers:
 *     RtlpHpFreeHeap @ 0x1402C2790 (RtlpHpFreeHeap.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlpHpFreeVA @ 0x14027ADF0 (RtlpHpFreeVA.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpMetadataFree @ 0x1402FDF7C (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x1402FE594 (RtlpHpLargeLockAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x1405934AC (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rbx
  char v5; // r15
  __int64 v6; // r12
  unsigned __int8 v7; // al
  _RTL_RB_TREE *v8; // rcx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // r15d
  unsigned __int64 v14; // rax
  char v15; // cl
  __int64 v16; // rax
  __m128i v18; // xmm0
  unsigned __int64 v19; // r12
  struct _KTHREAD *v20; // rdi
  unsigned int v21; // edx
  unsigned __int8 v22; // r15
  unsigned int v23; // r8d
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  __m128i v33; // xmm0
  unsigned __int64 v34; // r12
  struct _KTHREAD *CurrentThread; // r14
  unsigned int SessionId; // edx
  unsigned __int8 v37; // r13
  unsigned int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v46; // eax
  _DWORD v47[2]; // [rsp+30h] [rbp-40h] BYREF
  int v48; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v49; // [rsp+40h] [rbp-30h] BYREF
  __m128i v50; // [rsp+50h] [rbp-20h] BYREF
  __m128i v51; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v53; // [rsp+B8h] [rbp+48h] BYREF
  int v54; // [rsp+C8h] [rbp+58h]

  v53 = a2;
  v3 = a2;
  v4 = 0LL;
  v49 = 0LL;
  v5 = a3;
  v6 = a1;
  v7 = RtlpHpLargeLockAcquire(a1, a3);
  v8 = (_RTL_RB_TREE *)(v6 + 72);
  v9 = v7;
  v10 = *(_QWORD *)(v6 + 72);
  if ( (*(_BYTE *)(v6 + 80) & 1) != 0 )
  {
    if ( v10 )
      v10 ^= (unsigned __int64)v8;
    else
      v10 = 0LL;
  }
  while ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( v3 >= v11 )
    {
      if ( v3 <= v11 )
        goto LABEL_16;
      v12 = *(_QWORD *)(v10 + 8);
    }
    else
    {
      v12 = *(_QWORD *)v10;
    }
    if ( (*(_BYTE *)(v6 + 80) & 1) != 0 && v12 )
      v10 ^= v12;
    else
      v10 = v12;
  }
  v10 = 0LL;
LABEL_16:
  v13 = v5 & 1;
  if ( v10 )
  {
    RtlRbRemoveNode(v8, (PRTL_BALANCED_NODE)v10);
    if ( !v13 )
    {
      v33 = *(__m128i *)v6;
      v34 = v6 + 64;
      if ( (_mm_cvtsi128_si32(v33) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v34);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v24 = (v46 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v46;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v34, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v34);
        v48 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v34) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v37 = ++CurrentThread->AbAllocationRegionCount;
        v38 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v24 = !_BitScanReverse((unsigned int *)&v39, v38);
          v47[1] = v39;
          if ( v24 )
            goto LABEL_66;
          v40 = (__int64)&CurrentThread->LockEntries[v39];
          v38 &= ~(1 << v39);
          if ( (*(_BYTE *)(v40 + 26) & 1) != 0
            && (*(_DWORD *)(v40 + 32) & 1) == 0
            && (*(_QWORD *)(v40 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v34 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v40 + 40) == SessionId )
          {
            *(_BYTE *)(v40 + 26) &= ~1u;
            if ( *(_QWORD *)(v40 + 32) )
              break;
          }
        }
        if ( !v40 )
        {
LABEL_66:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v34, SessionId, 0LL);
          goto LABEL_78;
        }
        *(_BYTE *)(v40 + 32) |= 2u;
        if ( *(__int64 *)(v40 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v40);
        v48 = *(_DWORD *)(v40 + 88) & 0x1FFFF;
        *(_DWORD *)(v40 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v40 + 25) &= ~1u;
        *(_QWORD *)(v40 + 32) = 0LL;
        v41 = (signed __int64)(v40 - (unsigned __int64)CurrentThread->LockEntries) / 96;
        if ( v37 == 1 )
          CurrentThread->AbEntrySummary |= 1 << v41;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v41);
LABEL_78:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v34, &v48);
        v24 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v24
          && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v42);
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
      v6 = a1;
    }
    v14 = *(_QWORD *)(v10 + 32);
    v15 = (unsigned __int8)v14 >> 2;
    v50 = *(__m128i *)v6;
    v16 = (((v14 >> 12) + ((v14 >> 1) & 1)) << 12) - 1;
    v49 = (1LL << v15) - (((1LL << v15) - 1) & ((1LL << v15) + v16)) + v16;
    RtlpHpFreeVA(&v53, &v49, 0x8000, (__int128 *)v50.m128i_i8);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 96), -(*(_QWORD *)(v10 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 88), -(__int64)(v49 >> 12));
    v51 = *(__m128i *)v6;
    RtlpHpMetadataFree(v10, &v51);
    return v49;
  }
  else
  {
    if ( !v13 )
    {
      v18 = *(__m128i *)v6;
      v19 = v6 + 64;
      if ( (_mm_cvtsi128_si32(v18) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v19);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v29 >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              v31 = v30->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v24 = (v32 & v31[5]) == 0;
              v31[5] &= v32;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(v30);
              LODWORD(v3) = v53;
            }
          }
        }
        __writecr8(v9);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v19);
        v47[0] = 0;
        v20 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v19) == 1 )
          v21 = MmGetSessionIdEx((__int64)v20->ApcState.Process);
        else
          v21 = -1;
        --v20->SpecialApcDisable;
        v22 = ++v20->AbAllocationRegionCount;
        v23 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v24 = !_BitScanReverse((unsigned int *)&v25, v23);
          v54 = v25;
          if ( v24 )
            goto LABEL_30;
          v26 = (__int64)&v20->LockEntries[v25];
          v23 &= ~(1 << v25);
          if ( (*(_BYTE *)(v26 + 26) & 1) != 0
            && (*(_DWORD *)(v26 + 32) & 1) == 0
            && (*(_QWORD *)(v26 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v19 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v26 + 40) == v21 )
          {
            *(_BYTE *)(v26 + 26) &= ~1u;
            if ( *(_QWORD *)(v26 + 32) )
              break;
          }
        }
        if ( !v26 )
        {
LABEL_30:
          if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v20, v19, v21, 0LL);
          goto LABEL_42;
        }
        *(_BYTE *)(v26 + 32) |= 2u;
        if ( *(__int64 *)(v26 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v26);
        v47[0] = *(_DWORD *)(v26 + 88) & 0x1FFFF;
        *(_DWORD *)(v26 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v26 + 25) &= ~1u;
        *(_QWORD *)(v26 + 32) = 0LL;
        v27 = (signed __int64)(v26 - (unsigned __int64)v20->LockEntries) / 96;
        if ( v22 == 1 )
          v20->AbEntrySummary |= 1 << v27;
        else
          _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v27);
LABEL_42:
        --v20->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v20, v19, v47);
        v24 = v20->SpecialApcDisable++ == -1;
        if ( v24 && ($C459BD0D405E8E46662177FB3D0A143F *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
          KiCheckForKernelApcDelivery(v28);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        LODWORD(v3) = v53;
      }
      LODWORD(v6) = a1;
    }
    RtlpLogHeapFailure(8, v6, v3, 0, 0LL, 0LL);
  }
  return v4;
}
