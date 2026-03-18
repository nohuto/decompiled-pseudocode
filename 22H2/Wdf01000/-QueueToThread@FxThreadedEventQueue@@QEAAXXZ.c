/*
 * XREFs of ?QueueToThread@FxThreadedEventQueue@@QEAAXXZ @ 0x1C000E5D4
 * Callers:
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C000EC10 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C008BA90 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 * Callees:
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C001178C (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 *     ?QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ @ 0x1C0012764 (-QueueWorkItem@FxThreadedEventQueue@@IEAAXXZ.c)
 */

void __fastcall FxThreadedEventQueue::QueueToThread(FxThreadedEventQueue *this)
{
  if ( FxEventQueue::QueueToThreadWorker(this) )
    FxThreadedEventQueue::QueueWorkItem(this);
}
