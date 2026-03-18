/*
 * XREFs of BiSaveFirmwareVariable @ 0x140A5D494
 * Callers:
 *     BiUpdateBcdObject @ 0x140806888 (BiUpdateBcdObject.c)
 * Callees:
 *     BiSetRegistryValue @ 0x140805FA0 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSaveFirmwareVariable(__int64 a1, void *a2, ULONG a3)
{
  return BiSetRegistryValue(a1, L"FirmwareVariable", (__int64)L"Description", 3u, a2, a3);
}
