/*
 * XREFs of BiSetFirmwareModified @ 0x140374368
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x14037431C (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x140804B8C (BiCloseStore.c)
 *     BcdCreateObject @ 0x1408052E0 (BcdCreateObject.c)
 *     BiOpenSystemStore @ 0x140805A48 (BiOpenSystemStore.c)
 * Callees:
 *     BiSetRegistryValue @ 0x140805FA0 (BiSetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x1408097F4 (BiDeleteRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
