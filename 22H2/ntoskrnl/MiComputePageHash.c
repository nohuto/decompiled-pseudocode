/*
 * XREFs of MiComputePageHash @ 0x140389A90
 * Callers:
 *     MiWritePageFileHash @ 0x1403898C4 (MiWritePageFileHash.c)
 *     MiValidatePagefilePageHash @ 0x14055D65C (MiValidatePagefilePageHash.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetPagingFileOffset @ 0x14033A2B0 (MiGetPagingFileOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiComputePageHash(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int64 v4; // r14
  _QWORD *v5; // rsi
  unsigned __int8 CurrentIrql; // di
  unsigned int PagingFileOffset; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 result; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf

  v4 = 0LL;
  v5 = a2;
  if ( a2 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v4 = MiMapPageInHyperSpaceWorker((a1 + 0x58000000000LL) / 48, 0LL, 0, (__int64)SchedulerAssist);
    v5 = (_QWORD *)v4;
  }
  PagingFileOffset = MiGetPagingFileOffset(a1 + 16);
  v10 = v5[1];
  v11 = v5 + 2;
  v12 = v5[2];
  v13 = v5[3];
  v14 = *v5 + PagingFileOffset;
  do
  {
    v11 += 4;
    v10 += *(v11 - 1);
    v14 += *(v11 - 2);
    v12 += *v11;
    v13 += v11[1];
  }
  while ( v11 - 2 != v5 + 508 );
  v15 = v10 + v13 + v12 + v14;
  if ( v4 )
  {
    LOBYTE(v9) = 17;
    MiUnmapPageInHyperSpaceWorker(v4, v9, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  result = (unsigned int)(v15 + HIDWORD(v15));
  if ( (unsigned int)result < 3 )
    return 3LL;
  return result;
}
