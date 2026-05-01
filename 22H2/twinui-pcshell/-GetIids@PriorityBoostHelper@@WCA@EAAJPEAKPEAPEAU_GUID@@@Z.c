/*
 * XREFs of ?GetIids@PriorityBoostHelper@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180165680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PriorityBoostHelper::GetIids(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::GetIids(a1 - 32);
}
