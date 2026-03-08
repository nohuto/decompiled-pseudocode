/*
 * XREFs of IopCancelIrpsInThreadList @ 0x1407701C8
 * Callers:
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1407700F8 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     IopCancelSynchronousIrpsForThread @ 0x140941564 (IopCancelSynchronousIrpsForThread.c)
 * Callees:
 *     KeInitializeApc @ 0x140237E20 (KeInitializeApc.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1402E4DC4 (IopCancelIrpsInCurrentThreadList.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall IopCancelIrpsInThreadList(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdx
  char v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    return IopCancelIrpsInCurrentThreadList(
             *(_QWORD *)(a2 + 88),
             (__int64)CurrentThread,
             *(_QWORD *)(a2 + 96),
             *(_BYTE *)(a2 + 128));
  KeInitializeApc(a2, a1, 0, (__int64)IopCancelIrpsInCurrentThreadListSpecialApc, 0LL, 0LL, 0, 0LL);
  if ( (unsigned __int8)KeInsertQueueApc(a2, (__int64)&v6, 0LL, 0) )
  {
    KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
    KeResetEvent((PRKEVENT)(a2 + 104));
    if ( v6 )
    {
      KeInitializeEvent((PRKEVENT)(a2 + 104), NotificationEvent, 0);
      KeInitializeApc(
        a2,
        a1,
        0,
        (__int64)AlpcMessageDeleteProcedure,
        0LL,
        (__int64)IopCancelIrpsInCurrentThreadListApcRoutine,
        0,
        a2);
      if ( (unsigned __int8)KeInsertQueueApc(a2, 0LL, 0LL, 0) )
      {
        KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
        KeResetEvent((PRKEVENT)(a2 + 104));
      }
    }
  }
  return *(unsigned int *)(a2 + 132);
}
