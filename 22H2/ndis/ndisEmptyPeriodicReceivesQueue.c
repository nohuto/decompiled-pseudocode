/*
 * XREFs of ndisEmptyPeriodicReceivesQueue @ 0x1C00A3528
 * Callers:
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C0020400 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00A4940 (ndisSwitchMiniportReceiveFunction.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C009A084 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A3074 (ndisDoPeriodicReceivesIndication.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1C00A4B70 (ndisTracePeriodicReceivesEnd.c)
 *     ndisTracePeriodicReceivesStart @ 0x1C00A4C58 (ndisTracePeriodicReceivesStart.c)
 */

struct _KTHREAD *__fastcall ndisEmptyPeriodicReceivesQueue(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  struct _KTHREAD *result; // rax
  struct _NET_BUFFER_LIST *QueuedHead; // rdi
  KSPIN_LOCK *p_SpinLock; // rsi
  char v7; // bp
  __int64 v8; // r8
  __int64 Clock; // r14
  unsigned int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rax

  result = (struct _KTHREAD *)a1->PeriodicReceiveQueue.QueuedHead;
  QueuedHead = 0LL;
  if ( result )
  {
    QueuedHead = a1->PeriodicReceiveQueue.QueuedHead;
    result = (struct _KTHREAD *)(unsigned int)a1->PeriodicReceiveQueue.NumMQueuedNbls;
    a1->PeriodicReceiveQueue.TrackingDequeued += (unsigned int)result;
    if ( a2 )
      a1->PeriodicReceiveQueue.TrackingEmptied += (unsigned int)result;
    else
      a1->PeriodicReceiveQueue.NumNblsDequeued += (int)result;
  }
  a1->PeriodicReceiveQueue.QueuedHead = 0LL;
  a1->PeriodicReceiveQueue.QueuedTail = 0LL;
  a1->PeriodicReceiveQueue.NumMQueuedNbls = 0;
  if ( QueuedHead )
  {
    a1->PeriodicReceiveQueue.LockThread = 0LL;
    p_SpinLock = &a1->PeriodicReceiveQueue.SpinLock;
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    if ( a2 )
    {
      ndisReturnNetBufferListsInternal(a1, QueuedHead, 0, 0LL);
    }
    else
    {
      if ( BYTE1(dword_1C00E7198) )
      {
        v7 = 1;
        ndisTracePeriodicReceivesStart(a1);
        Clock = WmiGetClock(0LL, 0LL, v8);
      }
      else
      {
        Clock = 0LL;
        v7 = 0;
      }
      v10 = ndisDoPeriodicReceivesIndication(a1, QueuedHead);
      if ( v7 )
      {
        v12 = WmiGetClock(0LL, 0LL, v11);
        ndisTracePeriodicReceivesEnd(a1, v12 - Clock, v10);
      }
    }
    KeAcquireSpinLockAtDpcLevel(p_SpinLock);
    result = KeGetCurrentThread();
    a1->PeriodicReceiveQueue.LockThread = result;
  }
  return result;
}
