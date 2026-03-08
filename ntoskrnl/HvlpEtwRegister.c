/*
 * XREFs of HvlpEtwRegister @ 0x1405461A4
 * Callers:
 *     HvlPhase2Initialize @ 0x1403AF870 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 *     EtwSetInformation @ 0x1407882D0 (EtwSetInformation.c)
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
