/*
 * XREFs of ExpAcquireFastMutexContended @ 0x1402FCD4C
 * Callers:
 *     FsRtlAcquireHeaderMutex @ 0x140230240 (FsRtlAcquireHeaderMutex.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     CcUnpinFileDataEx @ 0x14025D6F0 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x140263770 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1402C8FC0 (CcSetDirtyInMask.c)
 *     CcSetDirtyPinnedData @ 0x1402FC580 (CcSetDirtyPinnedData.c)
 *     KeAcquireGuardedMutex @ 0x1402FCC60 (KeAcquireGuardedMutex.c)
 *     FsRtlCheckOplockEx2 @ 0x1402FD950 (FsRtlCheckOplockEx2.c)
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x140304790 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x140328600 (FsRtlReleaseEofLock.c)
 *     CmpDeleteKeyObject @ 0x1406DB3F0 (CmpDeleteKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7F40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1402FD270 (KeAbPreWait.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 v4; // rdi
  int v6; // esi
  __int64 result; // rax
  int v8; // ett
  int v9; // ett

  ++*(_DWORD *)(a1 + 16);
  v3 = 1;
  v4 = a2;
  v6 = 4;
LABEL_2:
  LODWORD(result) = *(_DWORD *)a1;
  do
  {
    while ( (result & 1) == 0 )
    {
      v9 = result;
      LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)a1, v6 + result, result);
      if ( v9 == (_DWORD)result )
      {
        if ( v4 )
          KeAbPreWait(v4, a2, a3);
        KeWaitForSingleObject((PVOID)(a1 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)a1);
        v3 = 3;
        v6 = 2;
        if ( v4 )
          v4 = KeAbPreAcquire(a1, v4);
        goto LABEL_2;
      }
    }
    v8 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, v3 ^ result, result);
  }
  while ( v8 != (_DWORD)result );
  return result;
}
