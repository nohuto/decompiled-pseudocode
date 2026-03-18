/*
 * XREFs of PopNotifyShutdownListener @ 0x140A6BDA0
 * Callers:
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140A6BE04 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 PopNotifyShutdownListener()
{
  __int64 result; // rax

  if ( PopShutdownNotificationCallback )
    return (*((__int64 (__fastcall **)(_QWORD))PopShutdownNotificationCallback + 1))(*((_QWORD *)PopShutdownNotificationCallback
                                                                                     + 2));
  return result;
}
