/*
 * XREFs of MiDeleteStaleCacheMaps @ 0x14033ABE0
 * Callers:
 *     MiWorkingSetManager @ 0x14033BC70 (MiWorkingSetManager.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x140234490 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void MiDeleteStaleCacheMaps()
{
  int v0; // esi
  unsigned __int64 v1; // rdi
  unsigned __int64 *v2; // rdx
  int v3; // eax
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  void *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rdx
  signed __int32 v16[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (__int64 *)qword_140C4EC60 != &qword_140C4EC60 )
  {
    _InterlockedOr(v16, 0);
    v0 = KiCacheFlushTimeStamp;
    if ( (unsigned int)(KiCacheFlushTimeStamp - dword_140C4EC70) > 2
      || (dword_140C4EC70 & 1) == 0 && (unsigned int)(KiCacheFlushTimeStamp - dword_140C4EC70) >= 2 )
    {
      v17[1] = v17;
      v17[0] = v17;
      v1 = ExAcquireSpinLockExclusive(&dword_140C4EC40);
      while ( (__int64 *)qword_140C4EC60 != &qword_140C4EC60 )
      {
        v2 = (unsigned __int64 *)(qword_140C4EC60 - 24);
        v3 = *(_DWORD *)(qword_140C4EC60 - 24 + 56);
        if ( (unsigned int)(v0 - v3) <= 2 && ((v3 & 1) != 0 || (unsigned int)(v0 - v3) < 2) )
          break;
        v4 = (_QWORD *)qword_140C4EC60;
        v5 = *(_QWORD *)qword_140C4EC60;
        v6 = (_QWORD *)v2[4];
        if ( *(_QWORD *)(*(_QWORD *)qword_140C4EC60 + 8LL) != qword_140C4EC60
          || *v6 != qword_140C4EC60
          || (*v6 = v5,
              *(_QWORD *)(v5 + 8) = v6,
              RtlAvlRemoveNode((unsigned __int64 *)&qword_140C4EC58, v2),
              v7 = v17[0],
              --qword_140C4EC78,
              *(_QWORD **)(v17[0] + 8LL) != v17) )
        {
LABEL_27:
          __fastfail(3u);
        }
        *v4 = v17[0];
        v4[1] = v17;
        *(_QWORD *)(v7 + 8) = v4;
        v17[0] = v4;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4EC40);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
            v12 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v1);
      while ( (_QWORD *)v17[0] != v17 )
      {
        v13 = (void *)(v17[0] - 24LL);
        v14 = *(_QWORD *)v17[0];
        v15 = *(_QWORD **)(v17[0] + 8LL);
        if ( *(_QWORD *)(*(_QWORD *)v17[0] + 8LL) != v17[0] || *v15 != v17[0] )
          goto LABEL_27;
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
        ExFreePoolWithTag(v13, 0);
      }
    }
  }
}
