/*
 * XREFs of PfpPowerActionDpcRoutine @ 0x140580860
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPowerActionDpcRoutine(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // ebx
  PVOID v5; // rdi
  int v6; // eax

  v4 = DeferredContext[40];
  v5 = DeferredContext;
  KxAcquireSpinLock(&qword_140C64C98);
  v6 = *((_DWORD *)v5 + 41);
  if ( v4 )
  {
    if ( dword_140C64CA0 == v6 && qword_140C64C88 )
    {
      *((_QWORD *)v5 + 16) = 0LL;
      *((_QWORD *)v5 + 18) = PfpServiceMainThreadUnboost;
      *((_QWORD *)v5 + 19) = v5;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v5 + 4, DelayedWorkQueue);
      v5 = 0LL;
    }
  }
  else if ( dword_140C64CA4 == v6 )
  {
    _InterlockedAnd(&dword_140D0BE94, 0xFFFFFFFE);
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C64C98);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
