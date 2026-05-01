/*
 * XREFs of ?Release@PriorityBoostHelper@@UEAAKXZ @ 0x1802441D0
 * Callers:
 *     ?Release@PriorityBoostHelper@@W7EAAKXZ @ 0x1801653E0 (-Release@PriorityBoostHelper@@W7EAAKXZ.c)
 *     ?Release@PriorityBoostHelper@@WBA@EAAKXZ @ 0x1801653F0 (-Release@PriorityBoostHelper@@WBA@EAAKXZ.c)
 *     ?Release@PriorityBoostHelper@@WBI@EAAKXZ @ 0x180165400 (-Release@PriorityBoostHelper@@WBI@EAAKXZ.c)
 *     ?Release@PriorityBoostHelper@@WCA@EAAKXZ @ 0x180165410 (-Release@PriorityBoostHelper@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PriorityBoostHelper::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IClosable,ILightDismissNotification,IImmersiveMonitorNotification,Windows::Internal::Shell::Experience::IInsightsExperienceManager>::Release(this);
}
