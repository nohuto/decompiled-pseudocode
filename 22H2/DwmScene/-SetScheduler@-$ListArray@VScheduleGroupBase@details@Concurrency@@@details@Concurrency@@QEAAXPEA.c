/*
 * XREFs of ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x18006283C
 * Callers:
 *     sub_180073C38 @ 0x180073C38 (sub_180073C38.c)
 *     sub_180073CFC @ 0x180073CFC (sub_180073CFC.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::ListArray<Concurrency::details::ScheduleGroupBase>::SetScheduler(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a1 + 72) = a2;
}
