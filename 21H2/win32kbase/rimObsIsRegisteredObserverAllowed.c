/*
 * XREFs of rimObsIsRegisteredObserverAllowed @ 0x1C017D3CC
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C017EFC8 (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C017D140 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     RIMIsTestSigningOn @ 0x1C018144C (RIMIsTestSigningOn.c)
 */

__int64 __fastcall rimObsIsRegisteredObserverAllowed(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx

  v1 = 1;
  if ( !(unsigned int)rimIsProcessLocalSystem(*(struct _EPROCESS **)(a1 + 32))
    && !(unsigned int)RIMIsTestSigningOn(v3, v2) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 94);
    return 0;
  }
  return v1;
}
