/*
 * XREFs of CmpLockKcbShared @ 0x140AF20D0
 * Callers:
 *     CmpDoQueryKeyName @ 0x140243A70 (CmpDoQueryKeyName.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x1406B5340 (CmpCloseKeyObject.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406BA388 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x14074B840 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14074BC50 (CmpFindSubkeyInHashByChildCell.c)
 *     NtFlushKey @ 0x140758B70 (NtFlushKey.c)
 *     CmQueryMultipleValueKey @ 0x1407A6F60 (CmQueryMultipleValueKey.c)
 *     CmEnumerateValueKey @ 0x1407AB770 (CmEnumerateValueKey.c)
 *     CmpLockTwoKcbsShared @ 0x1407ACF00 (CmpLockTwoKcbsShared.c)
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 *     CmpLockKcbStackShared @ 0x1407AF490 (CmpLockKcbStackShared.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1407B4730 (CmQueryValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmDumpKeyToFile @ 0x140A07E64 (CmDumpKeyToFile.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140A15240 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A152D4 (CmKeyBodyRemapToVirtual.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1CE0C (CmpEnumerateAllHigherLayerKcbs.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  __int64 v2; // rdi
  signed __int64 result; // rax

  v2 = KeAbPreAcquire(a1 + 48, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), 0, v2, a1 + 48);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
  return result;
}
