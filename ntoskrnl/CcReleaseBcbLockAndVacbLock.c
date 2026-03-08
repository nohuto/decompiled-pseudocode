/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x14021BCF0
 * Callers:
 *     CcUnmapVacbArray @ 0x14021B910 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x14029E348 (CcExtendVacbArray.c)
 *     CcGetVacbMiss @ 0x140335850 (CcGetVacbMiss.c)
 *     CcDereferenceFileOffset @ 0x140535AC4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x140535C90 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x140535FC0 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, __int64 a2)
{
  ExReleasePushLockEx(a2 + 104, 0LL);
  if ( a1 )
    ExReleaseFastMutex((PFAST_MUTEX)(a2 + 288));
}
