/*
 * XREFs of ?AddRef@PriorityBoostHelper@@WBI@EAAKXZ @ 0x180164FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PriorityBoostHelper::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::AddRef(a1 - 24);
}
