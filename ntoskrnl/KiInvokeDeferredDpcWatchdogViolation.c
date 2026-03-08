/*
 * XREFs of KiInvokeDeferredDpcWatchdogViolation @ 0x140578CA0
 * Callers:
 *     KxDeferredDpcWatchdogViolation @ 0x140417770 (KxDeferredDpcWatchdogViolation.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __noreturn KiInvokeDeferredDpcWatchdogViolation()
{
  KeBugCheckEx(
    0x133u,
    0LL,
    (unsigned int)KiSavedDpcTimeCount,
    (unsigned int)KiSavedDpcTimeLimitTicks,
    (ULONG_PTR)&KeDpcWatchdogProfileGlobalTriageBlock);
}
