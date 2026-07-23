/*
 * XREFs of RtlpHpLargeAlloc @ 0x140222AE0
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x1402233E0 (RtlpHpAllocateHeapInternal.c)
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpMetadataFree @ 0x140222AA0 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x1402230B8 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpQueryVA @ 0x1402230E4 (RtlpHpQueryVA.c)
 *     RtlpHpMetadataAlloc @ 0x140223158 (RtlpHpMetadataAlloc.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     RtlpHpFreeVA @ 0x1403054C0 (RtlpHpFreeVA.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x140315860 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpAllocVA @ 0x140315AA0 (RtlpHpAllocVA.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034B1D0 (RtlRbInsertNodeEx.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

void *__fastcall RtlpHpLargeAlloc(__int64 a1, __int16 a2, size_t a3, unsigned int a4)
{
  __int128 v4; // xmm0
  void *v5; // rbx
  void *v8; // r12
  __int64 v9; // rax
  _RTL_BALANCED_NODE *v10; // r14
  BOOL v11; // edi
  int v12; // r8d
  unsigned __int64 v13; // rcx
  int v14; // ecx
  unsigned __int64 v15; // r15
  int v16; // r9d
  unsigned int v17; // r15d
  int v18; // ecx
  _RTL_BALANCED_NODE *v19; // rbx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r12
  unsigned __int8 v22; // al
  _RTL_RB_TREE *v23; // rcx
  unsigned __int64 v24; // r15
  unsigned __int64 Root; // rdx
  BOOLEAN v26; // r8
  unsigned __int64 v27; // rax
  volatile signed __int64 *v28; // r14
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v32; // r15
  unsigned int v33; // edx
  bool v34; // zf
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v41; // eax
  void *v42; // [rsp+38h] [rbp-D0h] BYREF
  signed __int64 v43; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v44; // [rsp+48h] [rbp-C0h]
  __int64 v45; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v46; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v48; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v49; // [rsp+78h] [rbp-90h] BYREF
  __int128 v50; // [rsp+88h] [rbp-80h] BYREF
  __int128 v51; // [rsp+98h] [rbp-70h] BYREF
  __int128 v52; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v54; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v55; // [rsp+D8h] [rbp-30h]
  __int128 v56; // [rsp+E8h] [rbp-20h]
  __int128 v57; // [rsp+F8h] [rbp-10h]
  __int128 v58; // [rsp+108h] [rbp+0h]
  __int128 v59; // [rsp+118h] [rbp+10h]
  __int128 v60; // [rsp+128h] [rbp+20h]
  int v61; // [rsp+178h] [rbp+70h]

  v4 = *(_OWORD *)a1;
  v46 = 0LL;
  v5 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  v8 = 0LL;
  v48 = v4;
  v9 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v48);
  v10 = (_RTL_BALANCED_NODE *)v9;
  if ( v9 )
  {
    *(_OWORD *)v9 = 0LL;
    v11 = 0;
    *(_OWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 32) = 0LL;
    if ( (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
      v11 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
    while ( 1 )
    {
      v61 = 0;
      if ( v11 )
      {
        v12 = 0x200000;
        v13 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        v12 = 0;
        v61 = BYTE1(*(_QWORD *)a1) < 2u;
        v13 = a3 + (unsigned int)(v61 << 12);
      }
      v43 = v13;
      if ( v13 < a3 )
        break;
      v14 = *(_DWORD *)(a1 + 20) & 0x40000000;
      v49 = *(_OWORD *)a1;
      v55 = 0LL;
      v56 = 0LL;
      v57 = 0LL;
      if ( v14 )
      {
        *(_QWORD *)&v55 = a1;
        DWORD2(v55) = 64;
      }
      if ( (int)RtlpHpAllocVA((unsigned int)&v42, (unsigned int)&v43, v12, 0x2000, v14 != 0 ? 64 : 4, (__int64)&v49) < 0 )
        goto LABEL_39;
      v5 = v42;
      v50 = *(_OWORD *)a1;
      RtlpHpQueryVA(v42, &v50, &v46, &v45);
      *v46 = a1;
      v44 = (a3 + 4095) >> 12;
      v15 = v44 << 12;
      v47 = v44 << 12;
      if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v44 << 12, a1) )
        break;
      if ( v11 )
      {
        v16 = 536875008;
        v47 = v15 - ((v15 - 1) & 0x1FFFFF) + 0x1FFFFF;
        v17 = a4;
      }
      else
      {
        v17 = a4;
        v16 = 4096;
        if ( (a4 & 2) != 0 )
          v16 = 1073745920;
      }
      v18 = *(_DWORD *)(a1 + 20) & 0x40000000;
      v51 = *(_OWORD *)a1;
      v58 = 0LL;
      v59 = 0LL;
      v60 = 0LL;
      if ( v18 )
      {
        *(_QWORD *)&v58 = a1;
        DWORD2(v58) = 64;
      }
      if ( (int)RtlpHpAllocVA((unsigned int)&v42, (unsigned int)&v47, 0, v16, v18 != 0 ? 64 : 4, (__int64)&v51) >= 0 )
      {
        v19 = (_RTL_BALANCED_NODE *)v42;
        if ( v11 && (v17 & 2) != 0 )
          memset(v42, 0, a3);
        _BitScanForward64(&v20, v43);
        v21 = v44;
        HIDWORD(v45) = v20;
        v10[1].Children[0] = v19;
        v10[1].Children[1] = (_RTL_BALANCED_NODE *)((__int64)v10[1].Right & 0xF01 | (2
                                                                                   * (v61 & 0xFFFFFF81 | (2 * ((v21 << 10) | v20 & 0x3F)))));
        LOWORD(v10[1].Children[0]) = ((_WORD)v21 << 12) - a2;
        v22 = RtlpHpLargeLockAcquire(a1, v17);
        v23 = (_RTL_RB_TREE *)(a1 + 72);
        v24 = v22;
        if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
        {
          if ( v23->Root )
            Root = (unsigned __int64)v23->Root ^ (unsigned __int64)v23;
          else
            Root = 0LL;
        }
        else
        {
          Root = (unsigned __int64)v23->Root;
        }
        v26 = 0;
        if ( Root )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)v19 < (*(_QWORD *)(Root + 24) & 0xFFFFFFFFFFFF0000uLL) )
            {
              v27 = *(_QWORD *)Root;
              if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
              {
                if ( !v27 )
                  break;
                v27 ^= Root;
              }
              if ( !v27 )
                break;
            }
            else
            {
              v27 = *(_QWORD *)(Root + 8);
              if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
              {
                if ( !v27 )
                  goto LABEL_33;
                v27 ^= Root;
              }
              if ( !v27 )
              {
LABEL_33:
                v26 = 1;
                break;
              }
            }
            Root = v27;
          }
        }
        RtlRbInsertNodeEx(v23, (PRTL_BALANCED_NODE)Root, v26, v10);
        if ( (a4 & 1) == 0 )
        {
          v28 = (volatile signed __int64 *)(a1 + 64);
          if ( (*(_DWORD *)a1 & 1) != 0 )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v24 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
                  v34 = (v41 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v41;
                  if ( v34 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
            }
            __writecr8(v24);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(a1 + 64);
            LODWORD(v44) = 0;
            CurrentThread = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
              SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
            else
              SessionId = -1;
            --CurrentThread->SpecialApcDisable;
            v32 = ++CurrentThread->AbAllocationRegionCount;
            v33 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
            while ( 1 )
            {
              v34 = !_BitScanReverse((unsigned int *)&v35, v33);
              if ( v34 )
                break;
              v36 = (__int64)&CurrentThread->LockEntries[v35];
              v33 &= ~(1 << v35);
              if ( (*(_BYTE *)(v36 + 26) & 1) != 0
                && (*(_DWORD *)(v36 + 32) & 1) == 0
                && (*(_QWORD *)(v36 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v28 & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v36 + 40) == SessionId )
              {
                *(_BYTE *)(v36 + 26) &= ~1u;
                if ( *(_QWORD *)(v36 + 32) )
                {
                  if ( v36 )
                  {
                    *(_BYTE *)(v36 + 32) |= 2u;
                    if ( *(__int64 *)(v36 + 32) < 0 )
                      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v36);
                    LODWORD(v44) = *(_DWORD *)(v36 + 88) & 0x1FFFF;
                    *(_DWORD *)(v36 + 88) &= 0xFFFE0000;
                    *(_BYTE *)(v36 + 25) &= ~1u;
                    *(_QWORD *)(v36 + 32) = 0LL;
                    v37 = (signed __int64)(v36 - (unsigned __int64)CurrentThread->LockEntries) / 96;
                    if ( v32 == 1 )
                      CurrentThread->AbEntrySummary |= 1 << v37;
                    else
                      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v37);
                    goto LABEL_68;
                  }
                  break;
                }
              }
            }
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, SessionId, 0LL);
LABEL_68:
            --CurrentThread->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
            v34 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v34
              && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
          }
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v43 / 4096);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v21);
        v8 = v42;
        v10 = 0LL;
LABEL_39:
        v5 = 0LL;
        v42 = 0LL;
        break;
      }
      if ( !v11 )
      {
        v5 = v42;
        break;
      }
      v11 = 0;
      v52 = *(_OWORD *)a1;
      RtlpHpFreeVA(&v42, &v43, 0x8000LL, &v52);
      v5 = 0LL;
      v42 = 0LL;
    }
    if ( v10 )
    {
      v53 = *(_OWORD *)a1;
      RtlpHpMetadataFree((__int64)v10, &v53);
    }
    if ( v5 )
    {
      v54 = *(_OWORD *)a1;
      RtlpHpFreeVA(&v42, &v43, 0x8000LL, &v54);
    }
  }
  return v8;
}
