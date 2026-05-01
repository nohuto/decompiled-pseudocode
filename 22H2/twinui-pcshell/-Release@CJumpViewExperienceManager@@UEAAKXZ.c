/*
 * XREFs of ?Release@CJumpViewExperienceManager@@UEAAKXZ @ 0x1802487E0
 * Callers:
 *     ?Release@CJumpViewExperienceManager@@W7EAAKXZ @ 0x180164ED0 (-Release@CJumpViewExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WBA@EAAKXZ @ 0x180164EE0 (-Release@CJumpViewExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WBI@EAAKXZ @ 0x180164EF0 (-Release@CJumpViewExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WCA@EAAKXZ @ 0x180164F00 (-Release@CJumpViewExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CJumpViewExperienceManager@@WCI@EAAKXZ @ 0x180164F10 (-Release@CJumpViewExperienceManager@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CJumpViewExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::Release(this);
}
