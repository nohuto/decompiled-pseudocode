/*
 * XREFs of BapdRegisterEtwProvider @ 0x14038069C
 * Callers:
 *     BapdWriteEtwEvents @ 0x140380290 (BapdWriteEtwEvents.c)
 *     BapdRecordFirmwareBootStats @ 0x140A8BD14 (BapdRecordFirmwareBootStats.c)
 *     BapdpRecordIumStatus @ 0x140B44430 (BapdpRecordIumStatus.c)
 * Callees:
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 *     EtwSetInformation @ 0x1407882D0 (EtwSetInformation.c)
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
