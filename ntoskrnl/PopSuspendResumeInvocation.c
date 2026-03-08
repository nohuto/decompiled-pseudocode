/*
 * XREFs of PopSuspendResumeInvocation @ 0x1409952D0
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140980CF0 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x140987528 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x140987724 (PopSendSuspendResumeServiceNotification.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 PopSuspendResumeInvocation()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C6ABC8 )
    return ((__int64 (*)(void))qword_140C6ABC8)();
  return result;
}
