/*
 * XREFs of sub_180001430 @ 0x180001430
 * Callers:
 *     <none>
 * Callees:
 *     ?HasUnrealizedChores@ScheduleGroupSegmentBase@details@Concurrency@@IEAA_NXZ @ 0x180053F84 (-HasUnrealizedChores@ScheduleGroupSegmentBase@details@Concurrency@@IEAA_NXZ.c)
 */

bool __fastcall sub_180001430(Concurrency::details::ScheduleGroupSegmentBase *a1)
{
  bool result; // al

  result = Concurrency::details::ScheduleGroupSegmentBase::HasUnrealizedChores(a1);
  byte_18019E4CD = result;
  return result;
}
