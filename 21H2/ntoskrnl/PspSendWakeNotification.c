/*
 * XREFs of PspSendWakeNotification @ 0x14067FDF8
 * Callers:
 *     PspDispatchWakeNotification @ 0x1405DA6C4 (PspDispatchWakeNotification.c)
 *     PspChargeJobWakeCounter @ 0x140681A78 (PspChargeJobWakeCounter.c)
 * Callees:
 *     PspRequestDeferredJobNotification @ 0x140243EEC (PspRequestDeferredJobNotification.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     EtwTraceWakeEvent @ 0x140936B34 (EtwTraceWakeEvent.c)
 */

char __fastcall PspSendWakeNotification(PVOID Object, unsigned int a2, _DWORD *a3, unsigned __int64 a4, char a5)
{
  if ( (((1 << a2) & a3[1]) == 0 || a4)
    && (((1 << a2) & *a3) == 0 || (a5 & 2) == 0 || a4 != 1 && (a4 <= 1 || (a5 & 1) == 0)) )
  {
    return 0;
  }
  ObfReferenceObjectWithTag(Object, 0x6F4E7350u);
  if ( (xmmword_140CFC490 & 0x400) != 0 && (a5 & 4) != 0 && a4 == 1 )
    EtwTraceWakeEvent(Object, a2);
  if ( !PspRequestDeferredJobNotification((signed __int64)Object, 0x2000u) )
    ObfDereferenceObjectWithTag(Object, 0x6F4E7350u);
  return 1;
}
