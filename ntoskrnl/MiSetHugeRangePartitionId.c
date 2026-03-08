/*
 * XREFs of MiSetHugeRangePartitionId @ 0x1406203CC
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140655AB0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRestrictRangeToNode @ 0x140370AB4 (MiRestrictRangeToNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLockHugePfnInternal @ 0x14061F020 (MiLockHugePfnInternal.c)
 *     MiUpdateHugePageCounts @ 0x14062090C (MiUpdateHugePageCounts.c)
 */

__int64 __fastcall MiSetHugeRangePartitionId(unsigned __int16 *a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4)
{
  unsigned __int16 *v4; // r14
  ULONG_PTR v5; // r15
  ULONG_PTR v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 result; // rax
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r12
  KIRQL v17; // r14
  ULONG_PTR v18; // rdi
  _QWORD *v19; // r13
  ULONG_PTR v20; // r12
  volatile LONG *v21; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int16 v27; // [rsp+20h] [rbp-78h]
  __int64 i; // [rsp+28h] [rbp-70h]
  ULONG_PTR v29; // [rsp+30h] [rbp-68h]
  unsigned __int64 v30; // [rsp+40h] [rbp-58h]
  unsigned __int64 v31; // [rsp+48h] [rbp-50h]
  ULONG_PTR v34; // [rsp+B0h] [rbp+18h]
  KIRQL v35; // [rsp+B8h] [rbp+20h]

  v34 = a3;
  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = (a3 >> 18) & 0x3FFFFF;
  v8 = a2;
  result = *a1;
  v27 = *a1;
  for ( i = qword_140C67A70 + 8 * v7; v5; v8 = a2 )
  {
    v29 = MiRestrictRangeToNode(v6, v5) >> 18;
    v10 = MiSearchNumaNodeTable(v6);
    v11 = *(_QWORD *)(v8 + 16);
    v12 = *((_QWORD *)v4 + 2);
    v13 = 25408LL * *((unsigned int *)v10 + 2);
    v14 = v12;
    v15 = v11 + v13;
    v16 = v12 + v13;
    v30 = v11 + v13;
    v31 = v12 + v13;
    if ( v12 + v13 >= (unsigned __int64)(v11 + v13) )
      v14 = v11;
    v35 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v13 + v14 + 23104));
    v17 = v35;
    if ( v16 >= v15 )
      v11 = v12;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v13 + v11 + 23104));
    if ( v29 )
    {
      v18 = v34;
      v19 = (_QWORD *)i;
      v20 = 0LL;
      do
      {
        if ( !(unsigned int)MiLockHugePfnInternal((__int64)v19, 1) )
          break;
        *v19 = (*v19 ^ (*(_DWORD *)v19 ^ (16 * v27)) & 0x7FF0) & 0xFFFFFFFFFFFFFFF8uLL | 3;
        _InterlockedAnd(
          (volatile signed __int32 *)(qword_140C67A78
                                    + 4 * (((((__int64)v19 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
          ~(1 << ((((__int64)v19 - qword_140C67A70) >> 3) & 0x1F)));
        MiUpdateHugePageCounts(a2, v7, v29, 0LL);
        MiUpdateHugePageCounts(a1, v7, v29, 1LL);
        ++v19;
        ++v20;
        v7 = ((unsigned int)v7 ^ ((_DWORD)v7 + 1)) & 0x3FFFFF ^ (unsigned __int64)v7;
        v18 += 0x40000LL;
        v5 -= 0x40000LL;
      }
      while ( v20 < v29 );
      v17 = v35;
      v16 = v31;
      i = (__int64)v19;
      v15 = v30;
      v34 = v18;
    }
    if ( v16 >= v15 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 23104));
      v21 = (volatile LONG *)(v15 + 23104);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v15 + 23104));
      v21 = (volatile LONG *)(v16 + 23104);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v21);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v17 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (v17 + 1));
        v26 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    result = v17;
    __writecr8(v17);
    v6 = v34;
    v4 = a1;
  }
  return result;
}
