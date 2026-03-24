/*
 * XREFs of RtlpHpLargeFree @ 0x1402A54E8
 * Callers:
 *     RtlpHpFreeHeap @ 0x140342100 (RtlpHpFreeHeap.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpMetadataFree @ 0x1402A5660 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x1402A5C78 (RtlpHpLargeLockAcquire.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     RtlpHpFreeVA @ 0x1402FA770 (RtlpHpFreeVA.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     RtlpLogHeapFailure @ 0x14059356C (RtlpLogHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__m128i *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rbx
  char v5; // r15
  __m128i *v6; // r12
  unsigned __int8 v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  int v15; // r15d
  unsigned __int64 v16; // rax
  char v17; // cl
  __int64 v18; // rax
  __m128i v20; // xmm0
  ULONG_PTR v21; // r12
  struct _KTHREAD *v22; // rdi
  unsigned int v23; // edx
  unsigned __int8 v24; // r15
  unsigned int v25; // r8d
  bool v26; // zf
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  __m128i v35; // xmm0
  ULONG_PTR v36; // r12
  struct _KTHREAD *CurrentThread; // r14
  unsigned int SessionId; // edx
  unsigned __int8 v39; // r13
  unsigned int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v48; // eax
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
  v10 = (unsigned __int64)&v6[4].m128i_u64[1];
  v11 = v7;
  v12 = v6[4].m128i_u64[1];
  if ( (v6[5].m128i_i8[0] & 1) != 0 )
  {
    if ( v12 )
      v12 ^= v10;
    else
      v12 = 0LL;
  }
  while ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( v3 >= v13 )
    {
      if ( v3 <= v13 )
        goto LABEL_16;
      v14 = *(_QWORD *)(v12 + 8);
    }
    else
    {
      v14 = *(_QWORD *)v12;
    }
    if ( (v6[5].m128i_i8[0] & 1) != 0 && v14 )
      v12 ^= v14;
    else
      v12 = v14;
  }
  v12 = 0LL;
LABEL_16:
  v15 = v5 & 1;
  if ( v12 )
  {
    RtlRbRemoveNode(v10, v12, v8, v9);
    if ( !v15 )
    {
      v35 = *v6;
      v36 = (ULONG_PTR)&v6[4];
      if ( (_mm_cvtsi128_si32(v35) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v36);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v26 = (v48 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v48;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v36);
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v36) == 1 )
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v39 = ++CurrentThread->AbAllocationRegionCount;
        v40 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v26 = !_BitScanReverse((unsigned int *)&v41, v40);
          if ( v26 )
            goto LABEL_66;
          v42 = (__int64)&CurrentThread->LockEntries[v41];
          v40 &= ~(1 << v41);
          if ( (*(_BYTE *)(v42 + 26) & 1) != 0
            && (*(_DWORD *)(v42 + 32) & 1) == 0
            && (*(_QWORD *)(v42 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v36 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v42 + 40) == SessionId )
          {
            *(_BYTE *)(v42 + 26) &= ~1u;
            if ( *(_QWORD *)(v42 + 32) )
              break;
          }
        }
        if ( !v42 )
        {
LABEL_66:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v36, SessionId, 0LL);
          goto LABEL_78;
        }
        *(_BYTE *)(v42 + 32) |= 2u;
        if ( *(__int64 *)(v42 + 32) < 0 )
          KiAbEntryRemoveFromTree(v42);
        *(_DWORD *)(v42 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v42 + 25) &= ~1u;
        *(_QWORD *)(v42 + 32) = 0LL;
        v43 = (signed __int64)(v42 - (unsigned __int64)CurrentThread->LockEntries) / 96;
        if ( v39 == 1 )
          CurrentThread->AbEntrySummary |= 1 << v43;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v43);
LABEL_78:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v26 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v26
          && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v44);
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
      v6 = a1;
    }
    v16 = *(_QWORD *)(v12 + 32);
    v17 = (unsigned __int8)v16 >> 2;
    v50 = *v6;
    v18 = (((v16 >> 12) + ((v16 >> 1) & 1)) << 12) - 1;
    v49 = (1LL << v17) - (((1LL << v17) - 1) & ((1LL << v17) + v18)) + v18;
    RtlpHpFreeVA(&v53, &v49, 0x8000LL, &v50);
    _InterlockedExchangeAdd64(v6[6].m128i_i64, -(*(_QWORD *)(v12 + 32) >> 12));
    _InterlockedExchangeAdd64(&v6[5].m128i_i64[1], -(__int64)(v49 >> 12));
    v51 = *v6;
    RtlpHpMetadataFree(v12, &v51);
    return v49;
  }
  else
  {
    if ( !v15 )
    {
      v20 = *v6;
      v21 = (ULONG_PTR)&v6[4];
      if ( (_mm_cvtsi128_si32(v20) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v21);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v31 >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              v33 = v32->SchedulerAssist;
              v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v26 = (v34 & v33[5]) == 0;
              v33[5] &= v34;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(v32);
              LODWORD(v3) = v53;
            }
          }
        }
        __writecr8(v11);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v21);
        v22 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v21) == 1 )
          v23 = MmGetSessionIdEx(v22->ApcState.Process);
        else
          v23 = -1;
        --v22->SpecialApcDisable;
        v24 = ++v22->AbAllocationRegionCount;
        v25 = ((char)v22->AbEntrySummary | (char)v22->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v26 = !_BitScanReverse((unsigned int *)&v27, v25);
          v54 = v27;
          if ( v26 )
            goto LABEL_30;
          v28 = (__int64)&v22->LockEntries[v27];
          v25 &= ~(1 << v27);
          if ( (*(_BYTE *)(v28 + 26) & 1) != 0
            && (*(_DWORD *)(v28 + 32) & 1) == 0
            && (*(_QWORD *)(v28 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v21 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v28 + 40) == v23 )
          {
            *(_BYTE *)(v28 + 26) &= ~1u;
            if ( *(_QWORD *)(v28 + 32) )
              break;
          }
        }
        if ( !v28 )
        {
LABEL_30:
          if ( (*((_DWORD *)&v22->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v22, v21, v23, 0LL);
          goto LABEL_42;
        }
        *(_BYTE *)(v28 + 32) |= 2u;
        if ( *(__int64 *)(v28 + 32) < 0 )
          KiAbEntryRemoveFromTree(v28);
        *(_DWORD *)(v28 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v28 + 25) &= ~1u;
        *(_QWORD *)(v28 + 32) = 0LL;
        v29 = (signed __int64)(v28 - (unsigned __int64)v22->LockEntries) / 96;
        if ( v24 == 1 )
          v22->AbEntrySummary |= 1 << v29;
        else
          _InterlockedOr8((volatile signed __int8 *)&v22->AbOrphanedEntrySummary, 1 << v29);
LABEL_42:
        --v22->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v22);
        v26 = v22->SpecialApcDisable++ == -1;
        if ( v26 && ($C459BD0D405E8E46662177FB3D0A143F *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
          KiCheckForKernelApcDelivery(v30);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        LODWORD(v3) = v53;
      }
      LODWORD(v6) = (_DWORD)a1;
    }
    RtlpLogHeapFailure(8, (_DWORD)v6, v3, 0, 0LL, 0LL);
  }
  return v4;
}
