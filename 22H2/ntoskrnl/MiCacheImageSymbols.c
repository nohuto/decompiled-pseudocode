/*
 * XREFs of MiCacheImageSymbols @ 0x140695DFC
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140695BC4 (MiDriverLoadSucceeded.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall MiCacheImageSymbols(int a1)
{
  char v2; // [rsp+48h] [rbp+10h] BYREF

  return RtlImageDirectoryEntryToData(a1, 1, 6, (int)&v2);
}
