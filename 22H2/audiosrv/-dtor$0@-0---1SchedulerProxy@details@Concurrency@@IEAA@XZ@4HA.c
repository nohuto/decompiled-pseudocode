/*
 * XREFs of ?dtor$0@?0???1SchedulerProxy@details@Concurrency@@IEAA@XZ@4HA @ 0x18007CB93
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Concurrency::details::SchedulerProxy::~SchedulerProxy'::`1'::dtor$0(__int64 a1, __int64 a2)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 64LL));
}
