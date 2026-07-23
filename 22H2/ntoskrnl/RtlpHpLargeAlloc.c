/*
 * XREFs of RtlpHpLargeAlloc @ 0x1402FDFBC
 * Callers:
 *     ExAllocateHeapPool @ 0x1402BC8A0 (ExAllocateHeapPool.c)
 *     RtlpHpAllocateHeapInternal @ 0x1402FE8BC (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlpHpFreeVA @ 0x14027ADF0 (RtlpHpFreeVA.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x14028B190 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpAllocVA @ 0x14028B3D0 (RtlpHpAllocVA.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1402C0B10 (RtlRbInsertNodeEx.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpMetadataFree @ 0x1402FDF7C (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x1402FE594 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpQueryVA @ 0x1402FE5C0 (RtlpHpQueryVA.c)
 *     RtlpHpMetadataAlloc @ 0x1402FE634 (RtlpHpMetadataAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 */

void *__fastcall RtlpHpLargeAlloc(__int64 a1, __int16 a2, size_t a3, unsigned int a4)
{
  __int128 v4; // xmm0
  void *v5; // rbx
  void *v8; // r12
  __int64 v9; // rax
  _RTL_BALANCED_NODE *v10; // r14
  BOOL v11; // edi
  __int64 v12; // r8
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
  __int64 v38; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v42; // eax
  void *v43; // [rsp+38h] [rbp-D0h] BYREF
  signed __int64 v44; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v47; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v48; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v49; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v50; // [rsp+78h] [rbp-90h] BYREF
  __int128 v51; // [rsp+88h] [rbp-80h] BYREF
  __int128 v52; // [rsp+98h] [rbp-70h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v54; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v55; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v56; // [rsp+D8h] [rbp-30h]
  __int128 v57; // [rsp+E8h] [rbp-20h]
  __int128 v58; // [rsp+F8h] [rbp-10h]
  __int128 v59; // [rsp+108h] [rbp+0h]
  __int128 v60; // [rsp+118h] [rbp+10h]
  __int128 v61; // [rsp+128h] [rbp+20h]
  int v62; // [rsp+178h] [rbp+70h]

  v4 = *(_OWORD *)a1;
  v47 = 0LL;
  v5 = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  v8 = 0LL;
  v49 = v4;
  v9 = RtlpHpMetadataAlloc(40LL, 40LL, 0LL, &v49);
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
      v62 = 0;
      if ( v11 )
      {
        v12 = 0x200000LL;
        v13 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        v12 = 0LL;
        v62 = BYTE1(*(_QWORD *)a1) < 2u;
        v13 = a3 + (unsigned int)(v62 << 12);
      }
      v44 = v13;
      if ( v13 < a3 )
        break;
      v14 = *(_DWORD *)(a1 + 20) & 0x40000000;
      v50 = *(_OWORD *)a1;
      v56 = 0LL;
      v57 = 0LL;
      v58 = 0LL;
      if ( v14 )
      {
        *(_QWORD *)&v56 = a1;
        DWORD2(v56) = 64;
      }
      if ( (int)RtlpHpAllocVA(&v43, (size_t *)&v44, v12, 0x2000, v14 != 0 ? 64 : 4, &v50) < 0 )
        goto LABEL_39;
      v5 = v43;
      v51 = *(_OWORD *)a1;
      RtlpHpQueryVA(v43, &v51, &v47, &v46);
      *v47 = a1;
      v45 = (a3 + 4095) >> 12;
      v15 = v45 << 12;
      v48 = v45 << 12;
      if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v45 << 12, a1) )
        break;
      if ( v11 )
      {
        v16 = 536875008;
        v48 = v15 - ((v15 - 1) & 0x1FFFFF) + 0x1FFFFF;
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
      v52 = *(_OWORD *)a1;
      v59 = 0LL;
      v60 = 0LL;
      v61 = 0LL;
      if ( v18 )
      {
        *(_QWORD *)&v59 = a1;
        DWORD2(v59) = 64;
      }
      if ( (int)RtlpHpAllocVA(&v43, (size_t *)&v48, 0LL, v16, v18 != 0 ? 64 : 4, &v52) >= 0 )
      {
        v19 = (_RTL_BALANCED_NODE *)v43;
        if ( v11 && (v17 & 2) != 0 )
          memset(v43, 0, a3);
        _BitScanForward64(&v20, v44);
        v21 = v45;
        HIDWORD(v46) = v20;
        v10[1].Children[0] = v19;
        v10[1].Children[1] = (_RTL_BALANCED_NODE *)((__int64)v10[1].Right & 0xF01 | (2
                                                                                   * (v62 & 0xFFFFFF81 | (2 * ((v21 << 10) | v20 & 0x3F)))));
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
                  v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
                  v34 = (v42 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v42;
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
              ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
            LODWORD(v45) = 0;
            CurrentThread = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
              SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
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
                    LODWORD(v45) = *(_DWORD *)(v36 + 88) & 0x1FFFF;
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
            KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 64, &v45);
            v34 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v34
              && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery(v38);
            }
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          }
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v44 / 4096);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v21);
        v8 = v43;
        v10 = 0LL;
LABEL_39:
        v5 = 0LL;
        v43 = 0LL;
        break;
      }
      if ( !v11 )
      {
        v5 = v43;
        break;
      }
      v11 = 0;
      v53 = *(_OWORD *)a1;
      RtlpHpFreeVA((unsigned __int64 *)&v43, (unsigned __int64 *)&v44, 0x8000, &v53);
      v5 = 0LL;
      v43 = 0LL;
    }
    if ( v10 )
    {
      v54 = *(_OWORD *)a1;
      RtlpHpMetadataFree((__int64)v10, &v54);
    }
    if ( v5 )
    {
      v55 = *(_OWORD *)a1;
      RtlpHpFreeVA((unsigned __int64 *)&v43, (unsigned __int64 *)&v44, 0x8000, &v55);
    }
  }
  return v8;
}
