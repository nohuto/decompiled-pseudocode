/*
 * XREFs of SmpNtSerializeBoot @ 0x1400095C4
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140004090 (SmscpLoadSubSystemsForMuSession.c)
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 *     SmpAsyncMemoryConfiguration @ 0x14000A1C0 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x14000503C (SmpEventWriteULONG.c)
 *     SmpEventWrite @ 0x14000A0B4 (SmpEventWrite.c)
 */

__int64 SmpNtSerializeBoot()
{
  unsigned int v0; // ebx

  SmpEventWrite(&SmssEvt_SerializeBoot_Start);
  v0 = NtSerializeBoot();
  SmpEventWriteULONG(&SmssEvt_SerializeBoot_Stop, v0);
  return v0;
}
