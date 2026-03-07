void __fastcall ExpHotAddProcessorToWorkers(__int64 a1)
{
  unsigned __int16 *v1; // rdx
  signed __int64 v2; // r8

  v1 = (unsigned __int16 *)KeNodeBlock[*(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL)];
  v2 = 0LL;
  if ( (_UNKNOWN *)KeNodeBlock[*v1] != (_UNKNOWN *)((char *)&KiNodeInit + 304 * *v1) )
    v2 = KeNodeBlock[*(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 138LL)];
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 328), v2, 0LL) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v2 + 304), DelayedWorkQueue);
}
