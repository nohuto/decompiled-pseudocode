/*
 * XREFs of ExInitializeHandleTablePackage @ 0x140B76B88
 * Callers:
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14037FEF0 (HalQueryMaximumProcessorCount.c)
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
