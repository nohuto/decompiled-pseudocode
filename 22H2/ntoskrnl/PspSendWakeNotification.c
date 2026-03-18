/*
 * XREFs of PspSendWakeNotification @ 0x1407DA928
 * Callers:
 *     PspChargeJobWakeCounter @ 0x1406A3A44 (PspChargeJobWakeCounter.c)
 *     PspDispatchWakeNotification @ 0x1407DA8B4 (PspDispatchWakeNotification.c)
 * Callees:
 *     PspRequestDeferredJobNotification @ 0x140200C90 (PspRequestDeferredJobNotification.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     EtwTraceWakeEvent @ 0x1409E5FC8 (EtwTraceWakeEvent.c)
 */

char __fastcall PspSendWakeNotification(PVOID Object, unsigned int a2, _DWORD *a3, unsigned __int64 a4, char a5)
{
  if ( (((1 << a2) & a3[1]) == 0 || a4)
    && (((1 << a2) & *a3) == 0 || (a5 & 2) == 0 || a4 != 1 && (a4 <= 1 || (a5 & 1) == 0)) )
  {
    return 0;
  }
  ObfReferenceObjectWithTag(Object, 0x6F4E7350u);
  if ( (xmmword_140D1EAD0 & 0x400) != 0 && (a5 & 4) != 0 && a4 == 1 )
    EtwTraceWakeEvent(Object, a2);
  if ( !PspRequestDeferredJobNotification((signed __int64)Object, 0x2000u) )
    ObfDereferenceObjectWithTag(Object, 0x6F4E7350u);
  return 1;
}
