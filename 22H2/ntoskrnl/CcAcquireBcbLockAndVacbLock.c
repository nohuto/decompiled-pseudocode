/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x140291424
 * Callers:
 *     CcGetVacbMiss @ 0x140291040 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x1402934F0 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x1402F2054 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x1404EAF88 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404EB154 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB484 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall CcAcquireBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  if ( a1 )
    ExAcquireFastMutex(a2 + 5);
  return ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
}
