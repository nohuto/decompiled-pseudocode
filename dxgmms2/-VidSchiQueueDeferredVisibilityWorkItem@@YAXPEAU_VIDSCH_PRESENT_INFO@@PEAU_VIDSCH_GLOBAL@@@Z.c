/*
 * XREFs of ?VidSchiQueueDeferredVisibilityWorkItem@@YAXPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C003657C
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0004B90 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0009880 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     <none>
 */

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
