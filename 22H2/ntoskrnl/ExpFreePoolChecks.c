/*
 * XREFs of ExpFreePoolChecks @ 0x1402AC370
 * Callers:
 *     ExRemovePoolTag @ 0x1403C31AC (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x14060F118 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 * Callees:
 *     KeCheckForTimer @ 0x140570B8C (KeCheckForTimer.c)
 *     ExpCheckForResource @ 0x14060ACC8 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14060B408 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14060CC78 (ExpCheckForWorker.c)
 *     VfPtFreePoolNotification @ 0x140ADF73C (VfPtFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 result; // rax

  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !a4 )
      ExpCheckForLookaside(BugCheckParameter3, a3);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(BugCheckParameter3);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource(BugCheckParameter3, a3);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(BugCheckParameter3);
  }
  result = (unsigned int)ExpPoolFlags;
  if ( (ExpPoolFlags & 0x10) != 0 )
    return VfPtFreePoolNotification(BugCheckParameter3, a2, a3, a5);
  return result;
}
