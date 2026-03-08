/*
 * XREFs of MiCacheImageSymbols @ 0x1407F7234
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1407F6FFC (MiDriverLoadSucceeded.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall MiCacheImageSymbols(int a1)
{
  char v2; // [rsp+48h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1, 6, (int)&v2);
}
