/*
 * XREFs of ?HasUnrealizedChores@ScheduleGroupSegmentBase@details@Concurrency@@IEAA_NXZ @ 0x180053F84
 * Callers:
 *     sub_180001430 @ 0x180001430 (sub_180001430.c)
 * Callees:
 *     sub_180053FA0 @ 0x180053FA0 (sub_180053FA0.c)
 */

bool __fastcall Concurrency::details::ScheduleGroupSegmentBase::HasUnrealizedChores(
        Concurrency::details::ScheduleGroupSegmentBase *this)
{
  return sub_180053FA0(this) != 0;
}
