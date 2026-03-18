/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C0050328
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0050380 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C030FE50 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
