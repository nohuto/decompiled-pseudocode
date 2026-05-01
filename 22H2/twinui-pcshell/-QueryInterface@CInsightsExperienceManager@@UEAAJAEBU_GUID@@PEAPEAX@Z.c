/*
 * XREFs of ?QueryInterface@CInsightsExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18025FFA0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@Foundation@Windows@@UILightDismissNotification@@UIImmersiveMonitorNotification@@UIInsightsExperienceManager@Experience@Shell@Internal@6@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801651F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIClosable@.c)
 *     ?QueryInterface@CInsightsExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180165200 (-QueryInterface@CInsightsExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CInsightsExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180165210 (-QueryInterface@CInsightsExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CInsightsExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180165220 (-QueryInterface@CInsightsExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CInsightsExperienceManager::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>>(
           this,
           a2,
           a3);
}
