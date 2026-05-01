/*
 * XREFs of ?Release@MeetNowExperienceManager@@WBI@EAAKXZ @ 0x180164880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MeetNowExperienceManager::Release(__int64 a1)
{
  return CTaskContinuityActivitiesExperienceManager::Release(a1 - 24);
}
