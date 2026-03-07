__int64 __fastcall MiMoveBadHugeRangeCrossPartition(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r13
  unsigned __int8 v12; // al
  __int64 v13; // rdi
  unsigned __int64 v14; // r15
  unsigned int v15; // ebp
  __int64 v16; // rax
  volatile LONG *v17; // rcx
  __int64 v18; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v22; // zf
  __int64 v23; // [rsp+70h] [rbp+8h]
  __int64 v26; // [rsp+88h] [rbp+20h]

  v4 = a1 & 0x3FFFFF;
  v7 = (__int64 *)(qword_140C67A70 + 8 * v4);
  v8 = MiSearchNumaNodeTable(v4 << 18);
  v9 = *(_QWORD *)(a2 + 16);
  v23 = *(_QWORD *)(a3 + 16);
  v26 = 25408LL * *((unsigned int *)v8 + 2);
  v10 = v23 + v26;
  v11 = v9 + v26;
  v12 = MiLockHugePfn((__int64)v7);
  v13 = *v7;
  v14 = v12;
  if ( (((unsigned __int64)*v7 >> 4) & 0x7FF) == *(_WORD *)a2 && (v13 & 8) != 0 )
  {
    v15 = 0;
    if ( (v13 & 7) == 4 )
    {
      v16 = v23;
      v15 = 9;
      if ( v10 >= v11 )
        v16 = v9;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v16 + v26 + 23104));
      if ( v10 >= v11 )
        v9 = v23;
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + v26 + 23104));
      MiUnlinkHugeRange(a2, a1);
    }
    *v7 = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)(16 * *(_WORD *)a3)) & 0x7FF0;
    if ( v15 >= 8 )
    {
      MiInsertHugeRangeInList(0LL, a1, v15);
      if ( v10 >= v11 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 23104));
        v17 = (volatile LONG *)(v11 + 23104);
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 23104));
        v17 = (volatile LONG *)(v10 + 23104);
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v17);
    }
    MiUpdateHugePageCounts(a2, a1, 1LL, 0LL);
    MiUpdateHugePageCounts(a3, a1, 1LL, 1LL);
  }
  v18 = (((__int64)v7 - qword_140C67A70) >> 3) & 0x3FFFFF;
  result = (unsigned int)~(1 << (v18 & 0x1F));
  _InterlockedAnd((volatile signed __int32 *)(qword_140C67A78 + 4 * ((unsigned __int64)(unsigned int)v18 >> 5)), result);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v14 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
      v22 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v22 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v14);
  return result;
}
