/*
 * XREFs of ExReleaseAutoExpandPushLockShared @ 0x1402623C0
 * Callers:
 *     FsRtlLookupPerFileContext @ 0x1402FD1B0 (FsRtlLookupPerFileContext.c)
 *     MiUnlockAweVadsShared @ 0x14064989C (MiUnlockAweVadsShared.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockSharedEx @ 0x140241CF0 (ExfReleasePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExpTryExpandAutoExpandPushLock @ 0x1403CF2A8 (ExpTryExpandAutoExpandPushLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

int __fastcall ExReleaseAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  ULONG_PTR v3; // rbx
  unsigned int v4; // esi
  signed __int64 v5; // rax
  unsigned int v6; // esi
  unsigned __int64 v8; // [rsp+60h] [rbp+18h] BYREF

  v2 = BugCheckParameter1;
  v8 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 || (BugCheckParameter2 & 2) != 0 && (BugCheckParameter1 & 2) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v3 = BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (BugCheckParameter2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(v3 + 12));
    v4 = *(_DWORD *)(v3 + 12);
    if ( v4 >= 0x80000000 && (*(_DWORD *)(v3 + 8) & 3) == 0 )
    {
      if ( (unsigned __int16)v4 < (unsigned int)ExpAeCycleCountThreshold
        || (v4 & 0xF0000) >= 0xF0000
        || KeGetCurrentIrql() >= 2u )
      {
        v4 = (v4 >> 2) & 0x3FF33FFF;
        *(_DWORD *)(v3 + 12) = v4;
      }
      else
      {
        ExpTryExpandAutoExpandPushLock(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL);
      }
    }
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL);
    if ( v5 == 17 )
    {
LABEL_6:
      if ( v4 < 0x80000000 )
        *(_DWORD *)(v3 + 12) = v4 + 0x100000;
      goto LABEL_8;
    }
    if ( (v4 & ExpAeSamplingPeriodMask) == 0 )
    {
      LODWORD(v5) = ExfReleasePushLockSharedEx((signed __int64 *)v3, &v8);
      if ( !v8 )
        goto LABEL_8;
      v6 = *(_DWORD *)(v3 + 12);
      if ( v6 >= 0x80000000 )
        goto LABEL_8;
      v5 = v8 >> ExpAeCycleCountScaler;
      if ( v8 >> ExpAeCycleCountScaler > 0x1FF )
        LODWORD(v5) = 511;
      v4 = v5 + v6;
      goto LABEL_6;
    }
    ExfReleasePushLockSharedEx((signed __int64 *)v3, 0LL);
    LODWORD(v5) = *(_DWORD *)(v3 + 12);
    if ( (unsigned int)v5 < 0x80000000 )
    {
      LODWORD(v5) = v5 + 0x100000;
      *(_DWORD *)(v3 + 12) = v5;
    }
  }
  else
  {
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL);
    if ( v5 != 17 )
      LODWORD(v5) = ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL));
    v3 = *(_QWORD *)(v3 + 8);
  }
LABEL_8:
  if ( (v2 & 2) == 0 )
    LODWORD(v5) = KeAbPostRelease(v3);
  return v5;
}
