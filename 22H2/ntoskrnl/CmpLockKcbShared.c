/*
 * XREFs of CmpLockKcbShared @ 0x140640230
 * Callers:
 *     CmpDoQueryKeyName @ 0x140347BE0 (CmpDoQueryKeyName.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryKey @ 0x1405F5810 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140649B30 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406DC020 (NtNotifyChangeMultipleKeys.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F870 (CmKeyBodyRemapToVirtual.c)
 *     CmRestoreKey @ 0x14087BF80 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x14087D448 (CmpRefreshHive.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpLockKcbShared(__int64 a1)
{
  __int64 result; // rax

  result = ExAcquirePushLockSharedEx(a1 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 56));
  return result;
}
