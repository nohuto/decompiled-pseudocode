/*
 * XREFs of sub_180072E20 @ 0x180072E20
 * Callers:
 *     sub_180073760 @ 0x180073760 (sub_180073760.c)
 *     sub_180136310 @ 0x180136310 (sub_180136310.c)
 * Callees:
 *     ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x1800B7BD0 (--1TaskStack@details@Concurrency@@QEAA@XZ.c)
 */

__int64 __fastcall sub_180072E20(__int64 *a1)
{
  Concurrency::details::TaskStack::~TaskStack((Concurrency::details::TaskStack *)(a1 + 1));
  return sub_18000F708(a1);
}
