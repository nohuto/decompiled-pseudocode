/*
 * XREFs of ?Release@CControlCenterExperienceManager@@UEAAKXZ @ 0x180224500
 * Callers:
 *     ?Release@CControlCenterExperienceManager@@W7EAAKXZ @ 0x180164490 (-Release@CControlCenterExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WBA@EAAKXZ @ 0x1801644A0 (-Release@CControlCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WBI@EAAKXZ @ 0x1801644B0 (-Release@CControlCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WCA@EAAKXZ @ 0x1801644C0 (-Release@CControlCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WCI@EAAKXZ @ 0x1801644D0 (-Release@CControlCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WDA@EAAKXZ @ 0x1801644E0 (-Release@CControlCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WDI@EAAKXZ @ 0x1801644F0 (-Release@CControlCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CControlCenterExperienceManager@@WEA@EAAKXZ @ 0x180164500 (-Release@CControlCenterExperienceManager@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CControlCenterExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release(this);
}
