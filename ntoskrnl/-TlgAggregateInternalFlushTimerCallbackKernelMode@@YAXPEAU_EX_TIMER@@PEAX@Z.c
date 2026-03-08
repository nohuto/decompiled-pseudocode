/*
 * XREFs of ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1403D0A20
 * Callers:
 *     TlgAggregateFlush @ 0x140674D20 (TlgAggregateFlush.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     EnableFlushTimer @ 0x1403C12C0 (EnableFlushTimer.c)
 */

void __fastcall TlgAggregateInternalFlushTimerCallbackKernelMode(struct _EX_TIMER *a1, volatile signed __int16 *a2)
{
  signed __int16 v2; // ax

  v2 = _InterlockedCompareExchange16(a2 + 28, 1, 0);
  if ( v2 )
  {
    if ( v2 == 1 )
      EnableFlushTimer((ULONG_PTR)a1, 0x3A98u);
  }
  else
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a2, DelayedWorkQueue);
  }
}
