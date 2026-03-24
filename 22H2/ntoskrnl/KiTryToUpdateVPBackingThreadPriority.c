/*
 * XREFs of KiTryToUpdateVPBackingThreadPriority @ 0x140318DE4
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402C4550 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiUpdateVPBackingThreadPriority @ 0x140258670 (KiUpdateVPBackingThreadPriority.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiTryToAcquireThreadLock @ 0x14035E7D8 (KiTryToAcquireThreadLock.c)
 */

void __fastcall KiTryToUpdateVPBackingThreadPriority(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  char v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0
    && (unsigned __int8)KiTryToAcquireThreadLock(BugCheckParameter1, &v4) )
  {
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
      KiUpdateVPBackingThreadPriority(BugCheckParameter1, a2, 0);
    KiReleaseThreadLockSafe(BugCheckParameter1);
  }
}
