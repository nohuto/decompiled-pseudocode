/*
 * XREFs of ?Release@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ @ 0x1800BD810
 * Callers:
 *     ?Release@MeetNowExperienceManager@@W7EAAKXZ @ 0x180164860 (-Release@MeetNowExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ @ 0x180164870 (-Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@MeetNowExperienceManager@@WBI@EAAKXZ @ 0x180164880 (-Release@MeetNowExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release(this);
}
