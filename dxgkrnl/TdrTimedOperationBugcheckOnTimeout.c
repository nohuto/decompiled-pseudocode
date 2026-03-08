/*
 * XREFs of TdrTimedOperationBugcheckOnTimeout @ 0x1C004F2C8
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C004F320 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C030B020 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __noreturn TdrTimedOperationBugcheckOnTimeout()
{
  KeBugCheckEx(0xEAu, (ULONG_PTR)KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
