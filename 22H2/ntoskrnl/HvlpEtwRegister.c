/*
 * XREFs of HvlpEtwRegister @ 0x1404F96A0
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CE9B8 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x1407622D0 (EtwRegister.c)
 *     EtwSetInformation @ 0x14077EFF0 (EtwSetInformation.c)
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
