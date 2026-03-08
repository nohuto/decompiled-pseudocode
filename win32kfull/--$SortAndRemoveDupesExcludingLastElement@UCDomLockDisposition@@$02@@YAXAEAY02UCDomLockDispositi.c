/*
 * XREFs of ??$SortAndRemoveDupesExcludingLastElement@UCDomLockDisposition@@$02@@YAXAEAY02UCDomLockDisposition@@P6AHPEBX1@ZP6AXAEAU0@@Z@Z @ 0x1C004705C
 * Callers:
 *     NtUserScheduleDispatchNotification @ 0x1C0046B90 (NtUserScheduleDispatchNotification.c)
 * Callees:
 *     vDLOrderDispositionCompare @ 0x1C00C5440 (vDLOrderDispositionCompare.c)
 *     ??$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z @ 0x1C01259E8 (--$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z.c)
 */

int __fastcall SortAndRemoveDupesExcludingLastElement<CDomLockDisposition,3>(char *a1)
{
  unsigned int i; // ebx
  int result; // eax

  qsort(a1, 2uLL, 0x10uLL, vDLOrderDispositionCompare);
  for ( i = 1; i < 2; ++i )
  {
    result = vDLOrderDispositionCompare(&a1[16 * i], &a1[16 * (i - 1)]);
    if ( !result )
      result = ClearCObjLock<tagObjLock *>(&a1[16 * (i - 1)]);
  }
  return result;
}
