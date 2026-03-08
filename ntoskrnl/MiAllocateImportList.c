/*
 * XREFs of MiAllocateImportList @ 0x14078AC28
 * Callers:
 *     MiCompressImportList @ 0x14078AB10 (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x14078ABD0 (MiPrepareImportList.c)
 *     MiAddEntryToImportList @ 0x140A282AC (MiAddEntryToImportList.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 */

_QWORD *__fastcall MiAllocateImportList(unsigned __int64 a1)
{
  _QWORD *result; // rax

  if ( a1 > 0x1FFFFFFE )
    return 0LL;
  result = MiAllocatePool(256, (unsigned int)(8 * a1 + 8), 0x54446D4Du);
  if ( result )
    *result = a1;
  return result;
}
