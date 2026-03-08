/*
 * XREFs of MiMarkHugePfnGood @ 0x14061F9B8
 * Callers:
 *     MiUnlinkBadPages @ 0x1406288F4 (MiUnlinkBadPages.c)
 * Callees:
 *     MiIsPageInHugePfn @ 0x14029C30C (MiIsPageInHugePfn.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiHugePfnPartition @ 0x14061E808 (MiHugePfnPartition.c)
 *     MiInsertHugeRangeInList @ 0x14061EB84 (MiInsertHugeRangeInList.c)
 *     MiLockHugePfn @ 0x14061EFAC (MiLockHugePfn.c)
 *     MiUnlinkHugeRange @ 0x140620680 (MiUnlinkHugeRange.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiMarkHugePfnGood(ULONG_PTR a1)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // ebp
  __int64 v4; // r14
  __int64 v5; // rsi
  unsigned __int64 *v6; // rbx
  unsigned __int8 v7; // r12
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  signed __int64 *v13; // rcx
  unsigned __int64 v14; // r15
  signed __int64 *v15; // rax
  signed __int64 *v16; // rcx
  int v17; // esi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  signed __int64 *v20; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v27; // [rsp+70h] [rbp+8h]
  int v28; // [rsp+78h] [rbp+10h]

  v2 = (a1 >> 18) & 0x3FFFFF;
  v3 = 0;
  v28 = 0;
  v4 = 0LL;
  v5 = *((unsigned int *)MiSearchNumaNodeTable(a1) + 2);
  v6 = (unsigned __int64 *)(qword_140C67A70 + 8 * v2);
  v27 = MiLockHugePfn((__int64)v6);
  v7 = v27;
  LOBYTE(v8) = MiIsPageInHugePfn(a1);
  if ( v8 )
  {
    if ( (*(_BYTE *)v6 & 8) != 0 )
    {
      v9 = MiHugePfnPartition(v6);
      v10 = v9;
      if ( v9 )
      {
        v11 = *(_QWORD *)(v9 + 16) + 25408 * v5;
        if ( (*(_BYTE *)v6 & 7) == 4 )
        {
          v28 = 1;
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 23104));
        }
        ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C66F90);
        v4 = qword_140C66FE0;
        while ( v4 )
        {
          v12 = *(_QWORD *)(v4 + 24) & 0x3FFFFFLL;
          if ( v2 <= v12 )
          {
            if ( v2 >= v12 )
              break;
            v4 = *(_QWORD *)v4;
          }
          else
          {
            v4 = *(_QWORD *)(v4 + 8);
          }
        }
        v13 = *(signed __int64 **)(v4 + 32);
        v14 = a1 & 0x3FFFF;
        if ( _bittest64(v13, v14) )
        {
          _bittestandreset64(v13, v14);
          --qword_140C66FE8;
          v3 = 274;
          v15 = v13;
          v16 = v13 + 4095;
          while ( v15 != v16 )
          {
            if ( *v15 )
              goto LABEL_28;
            ++v15;
          }
          if ( !*v15 )
          {
            if ( (*(_BYTE *)v6 & 7) == 4 )
            {
              MiUnlinkHugeRange(v10, v2);
              v17 = 1;
            }
            else
            {
              v17 = 0;
            }
            RtlAvlRemoveNode((unsigned __int64 *)&qword_140C66FE0, (unsigned __int64 *)v4);
            v18 = *v6 & 0xFFFFFFFFFFFFFFF7uLL;
            *v6 = v18;
            if ( v17 || (v19 = v18 & 7, v19 != 3) && v19 != 5 )
              MiInsertHugeRangeInList(0LL, v2, 5);
            goto LABEL_31;
          }
LABEL_28:
          v20 = (signed __int64 *)(*(_QWORD *)(v4 + 32) + 0x8000LL);
          if ( _bittest64(v20, v14) )
            _bittestandreset64(v20, v14);
        }
        v4 = 0LL;
LABEL_31:
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66F90);
        if ( v28 )
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 23104));
      }
      else
      {
        v3 = -1073740748;
      }
      v7 = v27;
    }
  }
  else
  {
    v3 = -1073740748;
  }
  _InterlockedAnd(
    (volatile signed __int32 *)(qword_140C67A78 + 4 * (((((__int64)v6 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
    ~(1 << ((((__int64)v6 - qword_140C67A70) >> 3) & 0x1F)));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (v7 + 1));
      v25 = (v24 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  if ( v4 )
  {
    ExFreePoolWithTag(*(PVOID *)(v4 + 32), 0);
    ExFreePoolWithTag((PVOID)v4, 0);
  }
  return v3;
}
