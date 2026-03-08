/*
 * XREFs of CcSlowReferenceSharedCacheMapFileObject @ 0x140343968
 * Callers:
 *     CcReferenceSharedCacheMapFileObject @ 0x140343320 (CcReferenceSharedCacheMapFileObject.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

void *__fastcall CcSlowReferenceSharedCacheMapFileObject(__int64 a1)
{
  void *v2; // rbx

  ExAcquirePushLockSharedEx((ULONG_PTR)&CcChangeSharedCacheMapFileLock, 0LL);
  v2 = (void *)(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v2 )
    ObfReferenceObjectWithTag(v2, 0x63536343u);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  return v2;
}
