/*
 * XREFs of ?SetQueueLength@SchedulerProxy@details@Concurrency@@QEAAXI@Z @ 0x1800AC540
 * Callers:
 *     sub_1800C1360 @ 0x1800C1360 (sub_1800C1360.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::SchedulerProxy::SetQueueLength(
        Concurrency::details::SchedulerProxy *this,
        int a2)
{
  *((_DWORD *)this + 42) = a2;
}
