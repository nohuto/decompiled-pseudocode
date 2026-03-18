/*
 * XREFs of PspJobCycleTimeNotificationDpcRoutine @ 0x1405E0E20
 * Callers:
 *     <none>
 * Callees:
 *     PspRequestDeferredJobNotification @ 0x14025CFA4 (PspRequestDeferredJobNotification.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 */

void __fastcall PspJobCycleTimeNotificationDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( ObReferenceObjectSafeWithTag((__int64)DeferredContext) )
  {
    if ( !PspRequestDeferredJobNotification((signed __int64)DeferredContext, 0x20000u) )
      ObfDereferenceObjectWithTag(DeferredContext, 0x746C6644u);
  }
}
