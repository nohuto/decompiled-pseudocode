/*
 * XREFs of PopSuspendResumeInvocation @ 0x140998380
 * Callers:
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140983DA0 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x14098A5D8 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSendSuspendResumeServiceNotification @ 0x14098A7D4 (PopSendSuspendResumeServiceNotification.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 PopSuspendResumeInvocation()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C6B038 )
    return ((__int64 (*)(void))qword_140C6B038)();
  return result;
}
