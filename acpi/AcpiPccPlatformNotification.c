/*
 * XREFs of AcpiPccPlatformNotification @ 0x1C003417C
 * Callers:
 *     ACPIPccProcessSci @ 0x1C0033B3C (ACPIPccProcessSci.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiPccPlatformNotification(char *Context)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // si
  struct _IO_WORKITEM *WorkItem; // rax

  v1 = (KSPIN_LOCK *)(Context + 648);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 81);
  _InterlockedAnd16(*((volatile signed __int16 **)Context + 7), 0xFFF7u);
  if ( *((_QWORD *)Context + 33) )
  {
    WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 35));
    if ( WorkItem )
      IoQueueWorkItemEx(WorkItem, AcpiPccPlatformNotificationWorker, DelayedWorkQueue, Context);
  }
  KeReleaseSpinLock(v1, v3);
}
