/*
 * XREFs of ExpAcquireFastMutexContended @ 0x1402410FC
 * Callers:
 *     CcSetDirtyInMask @ 0x14021C370 (CcSetDirtyInMask.c)
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x140240AC0 (FsRtlAcquireEofLock.c)
 *     FsRtlAcquireHeaderMutex @ 0x140240F70 (FsRtlAcquireHeaderMutex.c)
 *     KeAcquireGuardedMutex @ 0x140241010 (KeAcquireGuardedMutex.c)
 *     CcSetDirtyPinnedData @ 0x140242420 (CcSetDirtyPinnedData.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     FsRtlReleaseEofLock @ 0x1402C3460 (FsRtlReleaseEofLock.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeAbPreWait @ 0x140241620 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(__int64 a1, __int64 a2)
{
  int v2; // ebp
  int v5; // esi
  __int64 result; // rax
  int v7; // ett
  int v8; // ett

  ++*(_DWORD *)(a1 + 16);
  v2 = 1;
  v5 = 4;
LABEL_2:
  LODWORD(result) = *(_DWORD *)a1;
  do
  {
    while ( (result & 1) == 0 )
    {
      v8 = result;
      LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)a1, v5 + result, result);
      if ( v8 == (_DWORD)result )
      {
        if ( a2 )
          KeAbPreWait(a2);
        KeWaitForSingleObject((PVOID)(a1 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)a1);
        v2 = 3;
        v5 = 2;
        if ( a2 )
          a2 = KeAbPreAcquire(a1, a2, 0LL);
        goto LABEL_2;
      }
    }
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)a1, v2 ^ result, result);
  }
  while ( v7 != (_DWORD)result );
  return result;
}
