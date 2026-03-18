/*
 * XREFs of MmMapMemoryDumpMdlEx2 @ 0x140630718
 * Callers:
 *     PopGetNextTable @ 0x14058EC74 (PopGetNextTable.c)
 *     PopDecompressHiberBlocks @ 0x140AA23F4 (PopDecompressHiberBlocks.c)
 *     PopHiberCheckResume @ 0x140AA2F60 (PopHiberCheckResume.c)
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x14062FDB8 (MiMapMemoryDumpMdl.c)
 */

__int64 __fastcall MmMapMemoryDumpMdlEx2(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  MiMapMemoryDumpMdl(a1, a2, a3, a4);
  return 0LL;
}
