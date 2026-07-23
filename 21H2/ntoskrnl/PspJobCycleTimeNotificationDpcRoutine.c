/*
 * XREFs of PspJobCycleTimeNotificationDpcRoutine @ 0x140243EB0
 * Callers:
 *     <none>
 * Callees:
 *     PspRequestDeferredJobNotification @ 0x140243EEC (PspRequestDeferredJobNotification.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall PspJobCycleTimeNotificationDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( (unsigned __int8)ObReferenceObjectSafeWithTag(DeferredContext, 1953261124LL) )
  {
    if ( !(unsigned __int8)PspRequestDeferredJobNotification(DeferredContext, 0x20000LL) )
      ObfDereferenceObjectWithTag(DeferredContext, 0x746C6644u);
  }
}
