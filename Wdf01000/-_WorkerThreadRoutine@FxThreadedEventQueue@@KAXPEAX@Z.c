/*
 * XREFs of ?_WorkerThreadRoutine@FxThreadedEventQueue@@KAXPEAX@Z @ 0x1C00815E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C008124C (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 */

void __fastcall FxThreadedEventQueue::_WorkerThreadRoutine(FxEventQueue *Context)
{
  FxEventQueue::EventQueueWorker(Context);
}
