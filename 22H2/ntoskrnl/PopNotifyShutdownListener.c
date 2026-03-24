/*
 * XREFs of PopNotifyShutdownListener @ 0x1409B2700
 * Callers:
 *     PopSaveHiberContext @ 0x140993F80 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1409B2764 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 PopNotifyShutdownListener()
{
  __int64 result; // rax

  if ( PopShutdownNotificationCallback )
    return (*((__int64 (__fastcall **)(_QWORD))PopShutdownNotificationCallback + 1))(*((_QWORD *)PopShutdownNotificationCallback
                                                                                     + 2));
  return result;
}
