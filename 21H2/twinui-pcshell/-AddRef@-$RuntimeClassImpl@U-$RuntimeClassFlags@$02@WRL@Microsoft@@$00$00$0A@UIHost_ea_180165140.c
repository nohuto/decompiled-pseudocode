/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHostExperienceManager@Experience@Shell@Internal@Windows@@UIExperienceManagerPriorityManipulator@5678@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180165140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IHostExperienceManager,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::AddRef(a1 - 32);
}
