/*
 * XREFs of ?QueryInterface@CControlCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180224380
 * Callers:
 *     ?QueryInterface@CControlCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164500 (-QueryInterface@CControlCenterExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164510 (-QueryInterface@CControlCenterExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164520 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180164520.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164530 (-QueryInterface@CControlCenterExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164540 (-QueryInterface@CControlCenterExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164550 (-QueryInterface@CControlCenterExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164560 (-QueryInterface@CControlCenterExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CControlCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180164570 (-QueryInterface@CControlCenterExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CControlCenterExperienceManager::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>>(
           this,
           a2,
           a3);
}
