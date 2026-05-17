/*
 * XREFs of LdrpInsertModuleToIndex @ 0x180080730
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInsertModuleToIndexLockHeld @ 0x180014744 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall LdrpInsertModuleToIndex(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // r8

  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
  LdrpInsertModuleToIndexLockHeld(a1, a2, v6);
  return RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
