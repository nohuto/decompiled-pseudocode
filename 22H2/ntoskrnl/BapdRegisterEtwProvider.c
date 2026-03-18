/*
 * XREFs of BapdRegisterEtwProvider @ 0x140374214
 * Callers:
 *     BapdWriteEtwEvents @ 0x140373E08 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x140A88E78 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140B38C84 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwRegister @ 0x14078DD90 (EtwRegister.c)
 *     EtwSetInformation @ 0x1407D76A0 (EtwSetInformation.c)
 */

NTSTATUS __fastcall BapdRegisterEtwProvider(const GUID *a1, char a2, ULONGLONG *a3)
{
  NTSTATUS result; // eax

  result = EtwRegister(a1, 0LL, 0LL, a3);
  if ( result < 0 )
  {
    *a3 = 0LL;
  }
  else
  {
    if ( a2 )
      EtwSetInformation(
        *a3,
        EventProviderSetTraits,
        &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
        (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    return 0;
  }
  return result;
}
