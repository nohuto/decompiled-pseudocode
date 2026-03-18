/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x1402A0F10
 * Callers:
 *     CcUnmapVacbArray @ 0x14029ECA0 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x14029EFF0 (CcGetVacbMiss.c)
 *     CcExtendVacbArray @ 0x1402F2A44 (CcExtendVacbArray.c)
 *     CcDereferenceFileOffset @ 0x140537F94 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x140538160 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x140538490 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, __int64 a2)
{
  ExReleasePushLockEx((__int64 *)(a2 + 104), 0LL);
  if ( a1 )
    ExReleaseFastMutex((PFAST_MUTEX)(a2 + 288));
}
