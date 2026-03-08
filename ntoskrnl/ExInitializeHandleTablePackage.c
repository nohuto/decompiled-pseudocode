/*
 * XREFs of ExInitializeHandleTablePackage @ 0x140B4839C
 * Callers:
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x140375910 (HalQueryMaximumProcessorCount.c)
 */

__int64 ExInitializeHandleTablePackage()
{
  __int64 result; // rax

  HandleTableListLock = 0LL;
  qword_140D54EC8 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  result = HalQueryMaximumProcessorCount();
  ExpFreeListCount = result;
  return result;
}
