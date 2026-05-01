/*
 * XREFs of ?GetIids@CToastCenterExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180231B20
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIToastCenterExperienceManager@5678@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIHolographicExperienceExtension@Holographic@678@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180164A00 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBaseExperienceMa.c)
 *     ?GetIids@CToastCenterExperienceManager@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180164A10 (-GetIids@CToastCenterExperienceManager@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CToastCenterExperienceManager@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180164A20 (-GetIids@CToastCenterExperienceManager@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CToastCenterExperienceManager::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>>(
           this,
           a2,
           a3);
}
