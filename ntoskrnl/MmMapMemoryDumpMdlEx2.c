/*
 * XREFs of MmMapMemoryDumpMdlEx2 @ 0x14062E298
 * Callers:
 *     PopGetNextTable @ 0x14058C744 (PopGetNextTable.c)
 *     PopDecompressHiberBlocks @ 0x140A9F1C4 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x140A9FD30 (PopHiberCheckResume.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x14062D938 (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx2(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  MiMapMemoryDumpMdl(a1, a2, a3, a4);
  return 0LL;
}
