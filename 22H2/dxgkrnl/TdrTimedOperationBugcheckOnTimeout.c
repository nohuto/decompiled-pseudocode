/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C00453C8
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0045420 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C0266F10 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
