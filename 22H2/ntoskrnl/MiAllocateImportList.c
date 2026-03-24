/*
 * XREFs of MiAllocateImportList @ 0x14075D254
 * Callers:
 *     MiAddEntryToImportList @ 0x140545488 (MiAddEntryToImportList.c)
 *     MiCompressImportList @ 0x14075D140 (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x14075D200 (MiPrepareImportList.c)
 * Callees:
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
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
