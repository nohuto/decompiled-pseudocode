/*
 * XREFs of RtlRealSuccessor @ 0x1402F80C0
 * Callers:
 *     FsRtlFastUnlockSingleExclusive @ 0x1402D94CC (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateInsertSharedLock @ 0x1402D9CF8 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1402D9E4C (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1402F7DB4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlSplitLocks @ 0x1402F8578 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x140305384 (FsRtlPrivateInsertExclusiveLock.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x1403232B0 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x14036B5E8 (FsRtlCheckNoExclusiveConflict.c)
 *     RtlEnumerateGenericTable @ 0x140381AD0 (RtlEnumerateGenericTable.c)
 *     FsRtlGetNextFileLock @ 0x1404EF680 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1406687A0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x140773640 (RtlNextUnicodePrefix.c)
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
