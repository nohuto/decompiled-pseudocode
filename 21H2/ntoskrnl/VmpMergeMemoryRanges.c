/*
 * XREFs of VmpMergeMemoryRanges @ 0x14062AAC8
 * Callers:
 *     VmMergeMemoryRanges @ 0x1409D9620 (VmMergeMemoryRanges.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     VmpProcessContextLockExclusive @ 0x14045F78C (VmpProcessContextLockExclusive.c)
 *     VmpVaMemoryRangeGetNext @ 0x14062C4B4 (VmpVaMemoryRangeGetNext.c)
 *     VmpVaRangeNumberOfGpaRanges @ 0x14062C558 (VmpVaRangeNumberOfGpaRanges.c)
 *     VmpFreeMemoryRanges @ 0x1409DA014 (VmpFreeMemoryRanges.c)
 *     VmpLockMemoryForPin @ 0x1409DA070 (VmpLockMemoryForPin.c)
 *     VmpUnlockMemoryForPin @ 0x1409DA634 (VmpUnlockMemoryForPin.c)
 */

__int64 __fastcall VmpMergeMemoryRanges(PEX_SPIN_LOCK SpinLock, unsigned __int64 a2, __int64 a3)
{
  void *v3; // rdi
  PEX_SPIN_LOCK v6; // rbp
  __int64 v7; // r12
  int v8; // ebx
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  unsigned __int64 Next; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 *v21; // r8
  __int64 *v22; // r14
  __int64 *v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  __int64 v29; // rax
  _QWORD *v30; // r14
  __int64 *v31; // rbx
  unsigned __int64 *v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v36; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v36 = 0LL;
  v6 = SpinLock;
  v7 = VmpProcessContextLockExclusive(SpinLock);
  if ( *((_QWORD *)v6 + 9) == a3 )
  {
    v9 = *((_QWORD *)v6 + 3);
    if ( (v6[8] & 1) != 0 && v9 )
      v9 ^= (unsigned __int64)(v6 + 6);
    while ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 32);
      if ( a2 <= v10 )
      {
        if ( a2 >= *(_QWORD *)(v9 + 24) )
        {
          if ( v10 == a2 && (Next = VmpVaMemoryRangeGetNext(v6)) != 0 && *(_QWORD *)(Next + 24) == a2 + 1 )
          {
            VmpVaRangeNumberOfGpaRanges(v9);
            v19 = VmpVaRangeNumberOfGpaRanges(Next);
            if ( v20 == v19 && ((*(_BYTE *)(v9 + 64) ^ *(_BYTE *)(Next + 64)) & 1) == 0 )
            {
              v21 = *(__int64 **)(Next + 40);
              v22 = (__int64 *)(v9 + 40);
              v23 = *(__int64 **)(v9 + 40);
              do
              {
                v24 = v23[7];
                if ( v24 + 1 < v24 || v24 + 1 != v21[6] || ((*((_BYTE *)v23 + 64) ^ *((_BYTE *)v21 + 64)) & 1) != 0 )
                  goto LABEL_35;
                v23 = (__int64 *)*v23;
                v21 = (__int64 *)*v21;
              }
              while ( v23 != v22 );
              if ( !*(_QWORD *)(v9 + 56) )
              {
LABEL_53:
                v30 = (_QWORD *)*v22;
                v31 = *(__int64 **)(Next + 40);
                v32 = (unsigned __int64 *)(v6 + 2);
                do
                {
                  RtlRbRemoveNode(v32, (unsigned __int64)(v31 + 3));
                  v33 = v31[7];
                  v31[5] = -1LL;
                  v30[7] = v33;
                  *((_DWORD *)v31 + 16) &= ~1u;
                  v30 = (_QWORD *)*v30;
                  v31 = (__int64 *)*v31;
                }
                while ( v30 != (_QWORD *)(v9 + 40) );
                v6 = SpinLock;
                RtlRbRemoveNode((unsigned __int64 *)SpinLock + 3, Next);
                v34 = *(_QWORD *)(Next + 32);
                *(_QWORD *)(Next + 16) = -1LL;
                *(_QWORD *)(v9 + 32) = v34;
                v3 = (void *)Next;
                ++*((_QWORD *)SpinLock + 5);
                v8 = 0;
                goto LABEL_18;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel(v6);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
                    v16 = (v28 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v28;
                    if ( v16 )
                      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                  }
                }
              }
              __writecr8((unsigned __int8)v7);
              v8 = VmpLockMemoryForPin(
                     (_DWORD)v6,
                     *(_QWORD *)(v9 + 24),
                     (unsigned int)*(_QWORD *)(Next + 32) - (unsigned int)*(_QWORD *)(v9 + 24) + 1,
                     *(_DWORD *)(v9 + 64) & 1,
                     (__int64)&v36);
              if ( v8 >= 0 )
              {
                VmpUnlockMemoryForPin(v6, *(_QWORD *)(Next + 56));
                VmpUnlockMemoryForPin(v6, *(_QWORD *)(v9 + 56));
                v7 = VmpProcessContextLockExclusive(v6);
                v29 = v36;
                v36 = 0LL;
                *(_QWORD *)(v9 + 56) = v29;
                *(_QWORD *)(Next + 56) = 0LL;
                goto LABEL_53;
              }
              return (unsigned int)v8;
            }
LABEL_35:
            v8 = -1073741182;
          }
          else
          {
            v8 = -1073741503;
          }
LABEL_17:
          v3 = 0LL;
          goto LABEL_18;
        }
        v11 = *(_QWORD *)v9;
      }
      else
      {
        v11 = *(_QWORD *)(v9 + 8);
      }
      if ( (v6[8] & 1) != 0 && v11 )
        v9 ^= v11;
      else
        v9 = v11;
    }
    v8 = -1073741172;
    goto LABEL_17;
  }
  v8 = -1073740007;
LABEL_18:
  if ( v7 != -1 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = v13->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v16 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v13);
        }
      }
    }
    __writecr8((unsigned __int8)v7);
  }
  if ( v3 )
    VmpFreeMemoryRanges(v3);
  return (unsigned int)v8;
}
