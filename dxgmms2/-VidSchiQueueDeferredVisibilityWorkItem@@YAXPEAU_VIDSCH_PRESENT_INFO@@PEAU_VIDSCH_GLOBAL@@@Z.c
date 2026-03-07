void __fastcall VidSchiQueueDeferredVisibilityWorkItem(struct _VIDSCH_PRESENT_INFO *a1, struct _VIDSCH_GLOBAL *a2)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 19696, 3, 2) == 2
    && !_InterlockedExchange((volatile __int32 *)a2 + 614, 1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a2 + 2) + 24LL));
    *((_QWORD *)a2 + 302) = -1LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)a2 + 2424), CriticalWorkQueue);
  }
}
