/*
 * XREFs of EditionInitializeMoveSizeList @ 0x1C00F6440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *EditionInitializeMoveSizeList()
{
  __int64 *result; // rax

  result = &gActiveMoveSizeDataList;
  qword_1C0362158 = (__int64)&gActiveMoveSizeDataList;
  gActiveMoveSizeDataList = (__int64)&gActiveMoveSizeDataList;
  return result;
}
