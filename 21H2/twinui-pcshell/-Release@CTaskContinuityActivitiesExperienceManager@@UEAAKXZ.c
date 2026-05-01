/*
 * XREFs of ?Release@CTaskContinuityActivitiesExperienceManager@@UEAAKXZ @ 0x1800BD830
 * Callers:
 *     ?Release@MeetNowExperienceManager@@W7EAAKXZ @ 0x1801649D0 (-Release@MeetNowExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ @ 0x1801649E0 (-Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@MeetNowExperienceManager@@WBI@EAAKXZ @ 0x1801649F0 (-Release@MeetNowExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::Release(this);
}
