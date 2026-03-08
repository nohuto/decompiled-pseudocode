/*
 * XREFs of ExpReleaseFastMutexContended @ 0x140239650
 * Callers:
 *     CcSetDirtyInMask @ 0x14021C370 (CcSetDirtyInMask.c)
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x140240AC0 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x140240EF0 (FsRtlReleaseHeaderMutex.c)
 *     CcSetDirtyPinnedData @ 0x140242420 (CcSetDirtyPinnedData.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     FsRtlReleaseEofLock @ 0x1402C3460 (FsRtlReleaseEofLock.c)
 *     KeReleaseGuardedMutex @ 0x1402CBD00 (KeReleaseGuardedMutex.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x1402396C0 (KeSetEventBoostPriorityEx.c)
 */

__int64 __fastcall ExpReleaseFastMutexContended(volatile signed __int32 *a1, signed __int32 a2)
{
  int v3; // ecx
  bool v4; // zf
  __int64 result; // rax
  char v6; // [rsp+40h] [rbp+8h] BYREF
  int Priority; // [rsp+48h] [rbp+10h] BYREF

  do
  {
    v3 = a2 & 2;
    result = (unsigned int)_InterlockedCompareExchange(a1, a2 + (v3 != 0 ? 1 : -1), a2);
    v4 = a2 == (_DWORD)result;
    a2 = result;
  }
  while ( !v4 );
  if ( !v3 )
  {
    Priority = KeGetCurrentThread()->Priority;
    return KeSetEventBoostPriorityEx((int)a1 + 24, (unsigned int)&v6, (unsigned int)&Priority, (_DWORD)a1, 1, 1);
  }
  return result;
}
