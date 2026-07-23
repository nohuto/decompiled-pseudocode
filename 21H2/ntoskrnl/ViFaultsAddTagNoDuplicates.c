/*
 * XREFs of ViFaultsAddTagNoDuplicates @ 0x1409DDE28
 * Callers:
 *     ViFaultsAddAllTags @ 0x1409DDC28 (ViFaultsAddAllTags.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     ViFaultsIsTagPresentInList @ 0x1409DE370 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsAddTagNoDuplicates(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int64 i; // rax
  char v5; // cl
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rsi
  unsigned int v8; // ebx
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf
  unsigned int v17; // [rsp+38h] [rbp+10h]

  v2 = 0;
  if ( a2 <= 4 )
  {
    for ( i = 0LL; i < 4; ++i )
    {
      v5 = 32;
      if ( i < a2 )
        v5 = *(_BYTE *)(a1 + 2 * i);
      *((_BYTE *)&v17 + i) = v5;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x54466656u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      v8 = v17;
      *((_DWORD *)PoolWithTag + 4) = v17;
      v9 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
      if ( (unsigned int)ViFaultsIsTagPresentInList(v8) )
      {
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        v10 = (_QWORD *)qword_140C1CE28;
        ViHaveFaultTags = 1;
        if ( *(PVOID **)qword_140C1CE28 != &ViFaultTagsList )
          __fastfail(3u);
        *v7 = &ViFaultTagsList;
        v7[1] = v10;
        *v10 = v7;
        qword_140C1CE28 = (__int64)v7;
      }
      KxReleaseSpinLock(&ViFaultInjectionLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v15 = (v14 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v14;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
