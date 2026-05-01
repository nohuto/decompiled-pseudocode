/*
 * XREFs of ?Release@CActionCenterExperienceManager@@UEAAKXZ @ 0x18007E140
 * Callers:
 *     ?Release@CActionCenterExperienceManager@@W7EAAKXZ @ 0x180164200 (-Release@CActionCenterExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WBA@EAAKXZ @ 0x180164210 (-Release@CActionCenterExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WBI@EAAKXZ @ 0x180164220 (-Release@CActionCenterExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WCA@EAAKXZ @ 0x180164230 (-Release@CActionCenterExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WCI@EAAKXZ @ 0x180164240 (-Release@CActionCenterExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WDA@EAAKXZ @ 0x180164250 (-Release@CActionCenterExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WDI@EAAKXZ @ 0x180164260 (-Release@CActionCenterExperienceManager@@WDI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WEA@EAAKXZ @ 0x180164270 (-Release@CActionCenterExperienceManager@@WEA@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WEI@EAAKXZ @ 0x180164280 (-Release@CActionCenterExperienceManager@@WEI@EAAKXZ.c)
 *     ?Release@CActionCenterExperienceManager@@WFA@EAAKXZ @ 0x180164290 (-Release@CActionCenterExperienceManager@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CActionCenterExperienceManager::Release(CActionCenterExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IActionCenterExperienceManager,IEdgeUiInvocation,IEdgeUiTouchInvocation,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release(this);
}
