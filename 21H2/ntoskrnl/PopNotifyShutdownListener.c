/*
 * XREFs of PopNotifyShutdownListener @ 0x1409B25C0
 * Callers:
 *     PopSaveHiberContext @ 0x1409937A0 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1409B2624 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 PopNotifyShutdownListener()
{
  __int64 result; // rax

  if ( PopShutdownNotificationCallback )
    return (*((__int64 (__fastcall **)(_QWORD))PopShutdownNotificationCallback + 1))(*((_QWORD *)PopShutdownNotificationCallback
                                                                                     + 2));
  return result;
}
