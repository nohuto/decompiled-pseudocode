/*
 * XREFs of DpiMiracastConnectedStandbyDelayTimerDpc @ 0x1C005F2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastConnectedStandbyDelayTimerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _IO_WORKITEM *v4; // rax

  v4 = (struct _IO_WORKITEM *)_InterlockedCompareExchange64(
                                &qword_1C013B960,
                                qword_1C013B960 | 1,
                                qword_1C013B960 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( ((unsigned __int8)v4 & 1) == 0 )
    IoQueueWorkItem(v4, DpiMiracastConnectedStandbyDelayWork, DelayedWorkQueue, 0LL);
}
