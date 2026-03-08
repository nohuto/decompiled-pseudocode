/*
 * XREFs of rimObsIsRegisteredObserverAllowed @ 0x1C01DA9E0
 * Callers:
 *     rimObsDeliverToExclusiveObservers @ 0x1C0003FAC (rimObsDeliverToExclusiveObservers.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1C00046F0 (rimObsDeliverToNonExclusiveObservers.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsTestSigningOn @ 0x1C01D16B8 (RIMIsTestSigningOn.c)
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C01DA5F4 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
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
