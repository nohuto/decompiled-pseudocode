/*
 * XREFs of ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x1C008FC50
 * Callers:
 *     <none>
 * Callees:
 *     EnableFlushTimer @ 0x1C0043ED8 (EnableFlushTimer.c)
 *     LookUpTableFlushPartial @ 0x1C008FF90 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x1C0090038 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalFlushWorkItemRoutineKernelMode(void *a1)
{
  if ( *((_BYTE *)a1 + 372) )
  {
    *((_BYTE *)a1 + 372) = 0;
    LookUpTableFlushComplete();
  }
  else
  {
    LookUpTableFlushPartial();
  }
  if ( *((_DWORD *)a1 + 64) )
    EnableFlushTimer(*((_QWORD *)a1 + 45), *((_DWORD *)a1 + 92));
  if ( _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)a1 + 33) + 56LL), 0, 1) == 2 )
    KeSetEvent((PRKEVENT)(*((_QWORD *)a1 + 33) + 32LL), 0, 0);
}
