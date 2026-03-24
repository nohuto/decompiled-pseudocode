/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x1402FAB20
 * Callers:
 *     MiDeletePagablePteRange @ 0x1402B79F0 (MiDeletePagablePteRange.c)
 *     MiUnlockLoaderEntry @ 0x140358A50 (MiUnlockLoaderEntry.c)
 *     MiFreePhysicalPageChain @ 0x14054BB28 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x14054BE84 (MiFreePhysicalPages.c)
 *     MiUnlockAwePagesExclusive @ 0x14054DEE0 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14054DF38 (MiUnlockAweVadsExclusive.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140390D84 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

char __fastcall ExReleaseAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  int v4; // eax
  int v5; // ecx
  char result; // al

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v4 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v4 & 1) != 0 )
  {
    ExpReleaseFannedOutPushLockExclusive(v4 & 0xFFFFFFF8);
  }
  else
  {
    v5 = *(_DWORD *)(BugCheckParameter2 + 12);
    if ( (v5 & 0xF0000u) < 0xF0000 )
      *(_DWORD *)(BugCheckParameter2 + 12) = v5 + 0x10000;
  }
  result = ExReleasePushLockEx(BugCheckParameter2, 2uLL);
  if ( (v2 & 2) == 0 )
    return KeAbPostRelease(BugCheckParameter2);
  return result;
}
