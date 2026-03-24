/*
 * XREFs of BiSetFirmwareModified @ 0x14039AD98
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1405C3A74 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x140781C00 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14078371C (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x14096EC68 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x1407820E4 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x140784964 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
