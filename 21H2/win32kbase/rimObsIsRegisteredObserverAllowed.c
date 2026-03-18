/*
 * XREFs of rimObsIsRegisteredObserverAllowed @ 0x1C01B2E5C
 * Callers:
 *     rimObsDeliverToExclusiveObservers @ 0x1C000415C (rimObsDeliverToExclusiveObservers.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1C00077DC (rimObsDeliverToNonExclusiveObservers.c)
 * Callees:
 *     RIMIsTestSigningOn @ 0x1C01A82A8 (RIMIsTestSigningOn.c)
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C01B2ADC (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsIsRegisteredObserverAllowed(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  v1 = 1;
  if ( !(unsigned int)rimIsProcessLocalSystem(*(struct _EPROCESS **)(a1 + 32)) && !(unsigned int)RIMIsTestSigningOn() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    return 0;
  }
  return v1;
}
