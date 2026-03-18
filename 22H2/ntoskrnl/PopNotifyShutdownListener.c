/*
 * XREFs of PopNotifyShutdownListener @ 0x140AA8F5C
 * Callers:
 *     PopSaveHiberContext @ 0x140AA4A40 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140AA8FD4 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 PopNotifyShutdownListener()
{
  PVOID *i; // rbx
  __int64 result; // rax

  for ( i = (PVOID *)PopShutdownNotificationCallbackList; i != &PopShutdownNotificationCallbackList; i = (PVOID *)*i )
    result = ((__int64 (__fastcall *)(PVOID))i[3])(i[4]);
  return result;
}
