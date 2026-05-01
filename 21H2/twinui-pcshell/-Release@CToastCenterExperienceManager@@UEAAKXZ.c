/*
 * XREFs of ?Release@CToastCenterExperienceManager@@UEAAKXZ @ 0x180234FA0
 * Callers:
 *     ?Release@CToastCenterExperienceManager@@W7EAAKXZ @ 0x180164BA0 (-Release@CToastCenterExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WBA@EAAKXZ @ 0x180164BB0 (-Release@CToastCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WBI@EAAKXZ @ 0x180164BC0 (-Release@CToastCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WCA@EAAKXZ @ 0x180164BD0 (-Release@CToastCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WCI@EAAKXZ @ 0x180164BE0 (-Release@CToastCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WDA@EAAKXZ @ 0x180164BF0 (-Release@CToastCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WDI@EAAKXZ @ 0x180164C00 (-Release@CToastCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CToastCenterExperienceManager@@WEA@EAAKXZ @ 0x180164C10 (-Release@CToastCenterExperienceManager@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CToastCenterExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IToastCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable,Windows::Internal::Shell::Holographic::IHolographicExperienceExtension,IInputHostLayoutChanges>::Release(this);
}
