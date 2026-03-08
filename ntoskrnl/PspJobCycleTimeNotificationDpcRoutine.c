/*
 * XREFs of PspJobCycleTimeNotificationDpcRoutine @ 0x1405A1FD0
 * Callers:
 *     <none>
 * Callees:
 *     PspRequestDeferredJobNotification @ 0x140200BEC (PspRequestDeferredJobNotification.c)
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
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
