/*
 * XREFs of IoInitializeTimer @ 0x14085EA80
 * Callers:
 *     DifIoInitializeTimerWrapper @ 0x1405DDB20 (DifIoInitializeTimerWrapper.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x1402B8DC0 (ExInterlockedInsertTailList.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoInitializeTimer(PDEVICE_OBJECT DeviceObject, PIO_TIMER_ROUTINE TimerRoutine, PVOID Context)
{
  PIO_TIMER Timer; // rax

  Timer = DeviceObject->Timer;
  if ( Timer )
    goto LABEL_4;
  Timer = (PIO_TIMER)ExAllocatePool2(64LL, 48LL, 1767141193LL);
  if ( Timer )
  {
    Timer->DeviceObject = DeviceObject;
    Timer->Type = 9;
    DeviceObject->Timer = Timer;
LABEL_4:
    Timer->TimerRoutine = (void (__fastcall *)(_DEVICE_OBJECT *, void *))TimerRoutine;
    Timer->Context = Context;
    ExInterlockedInsertTailList(&IopTimerQueueHead, &Timer->TimerList, &IopTimerLock);
    return 0;
  }
  return -1073741670;
}
