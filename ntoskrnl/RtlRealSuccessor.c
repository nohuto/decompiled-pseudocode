/*
 * XREFs of RtlRealSuccessor @ 0x1402C1970
 * Callers:
 *     FsRtlCheckNoExclusiveConflict @ 0x140200C64 (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1402C16B4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1402C1C84 (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x1402C1DF4 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402C255C (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402C25E0 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlSplitLocks @ 0x1402C31DC (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x1402FBCA0 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     RtlEnumerateGenericTable @ 0x1403B0050 (RtlEnumerateGenericTable.c)
 *     FsRtlGetNextFileLock @ 0x14053B030 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140751F40 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x1408617B0 (RtlNextUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  RTL_SPLAY_LINKS *v2; // rdx
  _RTL_SPLAY_LINKS *v3; // r8
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->RightChild;
  v2 = 0LL;
  v3 = Links;
  if ( result )
  {
    for ( i = result->LeftChild; i; i = i->LeftChild )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      Links = Links->Parent;
      if ( Links->RightChild != v3 )
        break;
      v3 = Links;
    }
    if ( Links->LeftChild == v3 )
      return Links;
    return v2;
  }
  return result;
}
