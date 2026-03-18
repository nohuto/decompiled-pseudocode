/*
 * XREFs of HvlpEtwRegister @ 0x140548644
 * Callers:
 *     HvlPhase2Initialize @ 0x1403B4610 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x14078DD90 (EtwRegister.c)
 *     EtwSetInformation @ 0x1407D76A0 (EtwSetInformation.c)
 */

NTSTATUS HvlpEtwRegister()
{
  EtwRegister(&HvlGlobalSystemEventsGuid, 0LL, 0LL, &HvlGlobalSystemEventsHandle);
  return EtwSetInformation(
           HvlGlobalSystemEventsHandle,
           EventProviderSetTraits,
           &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
           (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
}
