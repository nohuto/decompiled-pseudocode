/*
 * XREFs of MmGetNextSession @ 0x14035C2F0
 * Callers:
 *     PfpProcessScenarioPhase @ 0x14073A2C8 (PfpProcessScenarioPhase.c)
 *     PopInvokeWin32Callout @ 0x14073A52C (PopInvokeWin32Callout.c)
 *     ExCallSessionCallBack @ 0x140776B38 (ExCallSessionCallBack.c)
 *     ObpProcessRemoveObjectQueue @ 0x1407DEA90 (ObpProcessRemoveObjectQueue.c)
 *     PfpPrivSourceEnum @ 0x1407E7DC0 (PfpPrivSourceEnum.c)
 *     MmEnumerateSystemImages @ 0x14080E4B0 (MmEnumerateSystemImages.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140980CF0 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140987528 (PopSendSuspendResumeApplicationNotification.c)
 *     MmPerfLogSessionRundown @ 0x140A2F8F8 (MmPerfLogSessionRundown.c)
 *     VfThunkApplyPristineToAllSession @ 0x140AD82CC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140AD844C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     MiGetNextSession @ 0x14035C308 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
