/*
 * XREFs of MmGetNextSession @ 0x14035E6A0
 * Callers:
 *     PfpPrivSourceEnum @ 0x140741CC0 (PfpPrivSourceEnum.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749A50 (ObpProcessRemoveObjectQueue.c)
 *     ExCallSessionCallBack @ 0x1407C6220 (ExCallSessionCallBack.c)
 *     PfpProcessScenarioPhase @ 0x1407D3BD0 (PfpProcessScenarioPhase.c)
 *     PopInvokeWin32Callout @ 0x1407D3E3C (PopInvokeWin32Callout.c)
 *     MmEnumerateSystemImages @ 0x140828110 (MmEnumerateSystemImages.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140983DA0 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x14098A5D8 (PopSendSuspendResumeApplicationNotification.c)
 *     MmPerfLogSessionRundown @ 0x140A32628 (MmPerfLogSessionRundown.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADC2CC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADC44C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     MiGetNextSession @ 0x14035E6B8 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
