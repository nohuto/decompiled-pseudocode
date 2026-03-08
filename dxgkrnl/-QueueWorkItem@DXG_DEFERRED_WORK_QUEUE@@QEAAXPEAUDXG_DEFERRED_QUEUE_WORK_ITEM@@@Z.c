/*
 * XREFs of ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C0050FA4
 * Callers:
 *     ?SendWnfNotificationToVmProcess@DXGGLOBAL@@SAJPEAVDXGPROCESS@@PEBU_WNF_STATE_NAME@@IPEAX@Z @ 0x1C0310530 (-SendWnfNotificationToVmProcess@DXGGLOBAL@@SAJPEAVDXGPROCESS@@PEBU_WNF_STATE_NAME@@IPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
        DXG_DEFERRED_WORK_QUEUE *this,
        struct DXG_DEFERRED_QUEUE_WORK_ITEM *a2)
{
  DXG_DEFERRED_WORK_QUEUE **v4; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  *((_QWORD *)this + 1) = KeGetCurrentThread();
  v4 = (DXG_DEFERRED_WORK_QUEUE **)*((_QWORD *)this + 4);
  if ( *v4 != (DXG_DEFERRED_WORK_QUEUE *)((char *)this + 24) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)this + 24;
  *((_QWORD *)a2 + 1) = v4;
  *v4 = a2;
  *((_QWORD *)this + 4) = a2;
  if ( ++*((_DWORD *)this + 10) == 1 )
  {
    KeResetEvent((PRKEVENT)this + 2);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)((char *)this + 72), *((WORK_QUEUE_TYPE *)this + 26));
  }
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
}
