/*
 * XREFs of BiSetFirmwareModified @ 0x140390340
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1403902F4 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x14082BD84 (BiCloseStore.c)
 *     BcdCreateObject @ 0x14082C4D8 (BcdCreateObject.c)
 *     BiOpenSystemStore @ 0x14082CC40 (BiOpenSystemStore.c)
 * Callees:
 *     BiSetRegistryValue @ 0x14082D198 (BiSetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x14083089C (BiDeleteRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
