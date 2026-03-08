/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x14021BD30
 * Callers:
 *     CcUnmapVacbArray @ 0x14021B910 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x14029E348 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x140535AC4 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x140535C90 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x140535FC0 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 */

__int64 __fastcall CcAcquireBcbLockAndVacbLock(int a1, __int64 a2)
{
  if ( a1 )
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 288));
  return ExAcquirePushLockExclusiveEx(a2 + 104, 0LL);
}
