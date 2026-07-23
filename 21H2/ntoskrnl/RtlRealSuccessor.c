/*
 * XREFs of RtlRealSuccessor @ 0x14021D2F0
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14021CFE4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlSplitLocks @ 0x14021D7A8 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x14022BF94 (FsRtlPrivateInsertExclusiveLock.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x140248680 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140363A3C (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140364268 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1403643BC (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x14036BE48 (FsRtlCheckNoExclusiveConflict.c)
 *     RtlEnumerateGenericTable @ 0x140381CE0 (RtlEnumerateGenericTable.c)
 *     FsRtlGetNextFileLock @ 0x1404EF980 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1405E7DB0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x140773950 (RtlNextUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v2; // rdx
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
