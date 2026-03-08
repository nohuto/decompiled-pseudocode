/*
 * XREFs of MmMapMemoryDumpMdl @ 0x14062E230
 * Callers:
 *     <none>
 * Callees:
 *     MiMapMemoryDumpMdl @ 0x14062D938 (MiMapMemoryDumpMdl.c)
 */

char __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  return MiMapMemoryDumpMdl(qword_140C67B30 << 25 >> 16, a2, a1, 0);
}
