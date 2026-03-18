/*
 * XREFs of rimObsIsRegisteredObserverAllowed @ 0x1C01AC91C
 * Callers:
 *     rimObsDeliverToExclusiveObservers @ 0x1C00053E4 (rimObsDeliverToExclusiveObservers.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1C0005B48 (rimObsDeliverToNonExclusiveObservers.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsTestSigningOn @ 0x1C01A35C4 (RIMIsTestSigningOn.c)
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C01AC51C (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall rimObsIsRegisteredObserverAllowed(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 1;
  if ( !(unsigned int)rimIsProcessLocalSystem(*(struct _EPROCESS **)(a1 + 32)) && !(unsigned int)RIMIsTestSigningOn() )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 94);
    return 0;
  }
  return v1;
}
