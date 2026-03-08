/*
 * XREFs of rimNormalApcIoUnregisterPlugPlayNotificationEx @ 0x1C00C3AB0
 * Callers:
 *     <none>
 * Callees:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C00C3ACC (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 */

__int64 __fastcall rimNormalApcIoUnregisterPlugPlayNotificationEx(__int64 a1)
{
  return rimApcIoUnregisterPlugPlayNotificationExWorker((void *)(a1 - 88));
}
